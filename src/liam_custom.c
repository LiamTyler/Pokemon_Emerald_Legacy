
#include "global.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "sprite.h"
#include "task.h"
#include "overworld.h"
#include "constants/maps.h"
#include "field_screen_effect.h"

bool8 Liam_ShouldDigToLab(void)
{
    if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE106) &&
        gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE106))
    {
        if (gSaveBlock1Ptr->pos.x == 29 && gSaveBlock1Ptr->pos.y == 14)
            return TRUE;
    }

    return FALSE;
}

void Liam_PerformDig(void)
{
    SetWarpDestination(
        MAP_GROUP(LIAM_DIG_LAB),
        MAP_NUM(LIAM_DIG_LAB),
        0,
        0,
        0
    );

    DoWarp();
    //ResetInitialPlayerAvatarState();
}

// One sequence of horizontal pixel offsets.
static const s8 sTruckShakeOffsets[] = {
    0, 1, -1, 1, -1, 0
};

static void Task_ShakeTruck(u8 taskId)
{
    struct Task *task = &gTasks[taskId];
    u8 spriteId = task->data[0];

    // Change offset every 3 frames.
    if (++task->data[1] < 3)
        return;

    task->data[1] = 0;

    gSprites[spriteId].x2 =
        sTruckShakeOffsets[task->data[2]++];

    if (task->data[2] >= ARRAY_COUNT(sTruckShakeOffsets))
    {
        gSprites[spriteId].x2 = 0;
        DestroyTask(taskId);
    }
}

// Called from Poryscript.
// VAR_0x8004 contains the truck's Local ID.
void ShakeTruck(void)
{
    u8 objectEventId;
    u8 taskId;

    if (FuncIsActiveTask(Task_ShakeTruck))
        return;

    // Find the truck on the current map.
    if (TryGetObjectEventIdByLocalIdAndMap(
            gSpecialVar_0x8004,
            gSaveBlock1Ptr->location.mapNum,
            gSaveBlock1Ptr->location.mapGroup,
            &objectEventId))
        return;

    taskId = CreateTask(Task_ShakeTruck, 50);

    gTasks[taskId].data[0] =
        gObjectEvents[objectEventId].spriteId;

    gTasks[taskId].data[1] = 0;
    gTasks[taskId].data[2] = 0;
}
