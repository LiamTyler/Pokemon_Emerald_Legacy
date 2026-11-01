TheEnd_MapScripts::
# 2 "data/maps/TheEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TheEnd_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TheEnd_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/TheEnd/scripts.pory"
	goto_if_unset FLAG_TRUCK_MEW_INITIALIZED, TheEnd_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

TheEnd_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/TheEnd/scripts.pory"
	setflag FLAG_HIDE_TRUCK_MEW
# 5 "data/maps/TheEnd/scripts.pory"
	setflag FLAG_TRUCK_MEW_INITIALIZED
	return


TheEnd_EventScript_Truck::
# 13 "data/maps/TheEnd/scripts.pory"
	lockall
# 14 "data/maps/TheEnd/scripts.pory"
	msgbox TheEnd_EventScript_Truck_Text_0, MSGBOX_YESNO
# 15 "data/maps/TheEnd/scripts.pory"
	closemessage
# 16 "data/maps/TheEnd/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne TheEnd_EventScript_Truck_2
# 21 "data/maps/TheEnd/scripts.pory"
	setvar VAR_0x8004, 1
# 22 "data/maps/TheEnd/scripts.pory"
	callnative ShakeTruck
# 23 "data/maps/TheEnd/scripts.pory"
	delay 30
# 25 "data/maps/TheEnd/scripts.pory"
	msgbox TheEnd_EventScript_Truck_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/TheEnd/scripts.pory"
	msgbox TheEnd_EventScript_Truck_Text_2, MSGBOX_YESNO
# 29 "data/maps/TheEnd/scripts.pory"
	closemessage
# 30 "data/maps/TheEnd/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne TheEnd_EventScript_Truck_5
# 35 "data/maps/TheEnd/scripts.pory"
	setvar VAR_0x8004, 1
# 36 "data/maps/TheEnd/scripts.pory"
	callnative ShakeTruck
# 37 "data/maps/TheEnd/scripts.pory"
	delay 30
# 39 "data/maps/TheEnd/scripts.pory"
	msgbox TheEnd_EventScript_Truck_Text_3, MSGBOX_DEFAULT
# 41 "data/maps/TheEnd/scripts.pory"
	msgbox TheEnd_EventScript_Truck_Text_4, MSGBOX_YESNO
# 42 "data/maps/TheEnd/scripts.pory"
	closemessage
# 43 "data/maps/TheEnd/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_ne TheEnd_EventScript_Truck_8
# 48 "data/maps/TheEnd/scripts.pory"
	setvar VAR_0x8004, 1
# 49 "data/maps/TheEnd/scripts.pory"
	callnative ShakeTruck
# 50 "data/maps/TheEnd/scripts.pory"
	delay 30
# 52 "data/maps/TheEnd/scripts.pory"
	msgbox TheEnd_EventScript_Truck_Text_5, MSGBOX_DEFAULT
# 53 "data/maps/TheEnd/scripts.pory"
	closemessage
# 55 "data/maps/TheEnd/scripts.pory"
	fadescreen FADE_TO_WHITE
# 56 "data/maps/TheEnd/scripts.pory"
	delay 20
# 58 "data/maps/TheEnd/scripts.pory"
	clearflag FLAG_HIDE_TRUCK_MEW
# 59 "data/maps/TheEnd/scripts.pory"
	addobject 2
# 61 "data/maps/TheEnd/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 63 "data/maps/TheEnd/scripts.pory"
	delay 15
# 66 "data/maps/TheEnd/scripts.pory"
	playse SE_PIN
# 67 "data/maps/TheEnd/scripts.pory"
	applymovement 2, TheEnd_EventScript_Truck_Movement_0
# 70 "data/maps/TheEnd/scripts.pory"
	waitmovement 2
# 72 "data/maps/TheEnd/scripts.pory"
	delay 90
# 74 "data/maps/TheEnd/scripts.pory"
	getplayerxy VAR_0x8000, VAR_0x8001
# 75 "data/maps/TheEnd/scripts.pory"
	setvar VAR_0x8001, 9
# 76 "data/maps/TheEnd/scripts.pory"
	subvar VAR_0x8001, VAR_0x8000
# 77 "data/maps/TheEnd/scripts.pory"
	copyvar VAR_0x8000, VAR_0x8001
# 80 "data/maps/TheEnd/scripts.pory"
	applymovement 2, TheEnd_EventScript_Truck_Movement_1
# 84 "data/maps/TheEnd/scripts.pory"
	waitmovement 2
TheEnd_EventScript_Truck_11:
# 85 "data/maps/TheEnd/scripts.pory"
	compare VAR_0x8000, 0
	goto_if_gt TheEnd_EventScript_Truck_12
# 92 "data/maps/TheEnd/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TheEnd_EventScript_Truck_Movement_3
# 95 "data/maps/TheEnd/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 97 "data/maps/TheEnd/scripts.pory"
	msgbox TheEnd_EventScript_Truck_Text_6
# 137 "data/maps/TheEnd/scripts.pory"
	releaseall
	return

TheEnd_EventScript_Truck_2:
# 17 "data/maps/TheEnd/scripts.pory"
	releaseall
	return

TheEnd_EventScript_Truck_5:
# 31 "data/maps/TheEnd/scripts.pory"
	releaseall
	return

TheEnd_EventScript_Truck_8:
# 44 "data/maps/TheEnd/scripts.pory"
	releaseall
	return

TheEnd_EventScript_Truck_12:
# 86 "data/maps/TheEnd/scripts.pory"
	applymovement 2, TheEnd_EventScript_Truck_Movement_2
# 87 "data/maps/TheEnd/scripts.pory"
	waitmovement 2
# 88 "data/maps/TheEnd/scripts.pory"
	subvar VAR_0x8000, 1
	goto TheEnd_EventScript_Truck_11


# 67 "data/maps/TheEnd/scripts.pory"
TheEnd_EventScript_Truck_Movement_0:
# 68 "data/maps/TheEnd/scripts.pory"
	emote_exclamation_mark
	step_end

# 80 "data/maps/TheEnd/scripts.pory"
TheEnd_EventScript_Truck_Movement_1:
# 81 "data/maps/TheEnd/scripts.pory"
	walk_down
# 82 "data/maps/TheEnd/scripts.pory"
	walk_down
	step_end

# 86 "data/maps/TheEnd/scripts.pory"
TheEnd_EventScript_Truck_Movement_2:
# 86 "data/maps/TheEnd/scripts.pory"
	walk_left
	step_end

# 92 "data/maps/TheEnd/scripts.pory"
TheEnd_EventScript_Truck_Movement_3:
# 93 "data/maps/TheEnd/scripts.pory"
	face_right
	step_end

TheEnd_EventScript_Truck_Text_0:
# 14 "data/maps/TheEnd/scripts.pory"
	.string "It's a large moving truck.\nWould you like to shake it?$"

TheEnd_EventScript_Truck_Text_1:
# 25 "data/maps/TheEnd/scripts.pory"
	.string "Mmmmmm...$"

TheEnd_EventScript_Truck_Text_2:
# 28 "data/maps/TheEnd/scripts.pory"
	.string "......\pShake it again?$"

TheEnd_EventScript_Truck_Text_3:
# 39 "data/maps/TheEnd/scripts.pory"
	.string "Bleugh... Who's there...$"

TheEnd_EventScript_Truck_Text_4:
# 41 "data/maps/TheEnd/scripts.pory"
	.string "......\pShake it one last time?$"

TheEnd_EventScript_Truck_Text_5:
# 52 "data/maps/TheEnd/scripts.pory"
	.string "I'm up, I'm up, who's banging around out\nthere!?$"

TheEnd_EventScript_Truck_Text_6:
# 98 "data/maps/TheEnd/scripts.pory"
	.string "MEW: Hi Morgan! It's so good to see you!\n"
	.string "I was just taking a quick nap in my\l"
	.string "favorite spot, under this truck!\p"
	.string "It used to be in Vermilion City years\n"
	.string "ago, but some weird humans with 'R'\l"
	.string "shirts kept trying to track me down\l"
	.string "and wouldn't leave me alone!\p"
	.string "I kept teleporting it all across the\n"
	.string "world to dodge them, and found this new\l"
	.string "spot that I really like!\p"
	.string "So what's up?? Do you need help with\n"
	.string "something, or do you want to play??\p"
	.string "......\p"
	.string "Oh man! This Team Catalyst sounds\n"
	.string "terrible! I'm so glad you've found two\l"
	.string "of the eggs already. Let me help you\l"
	.string "find the last one! I should be able to\l"
	.string "use my psychic powers to get a sense of\l"
	.string "where it is...\p"
	.string "It's buried somewhere near\n"
	.string "water... Somewhere quite pretty...\l"
	.string "I'm getting the impression this place\l"
	.string "has a lot of love and meaning to it. And\l"
	.string "a place where something special truly\l"
	.string "began...\p"
	.string "Hmmm, looks like that's all I got. I hope\n"
	.string "that helps you Morgan. It was so good\l"
	.string "to see you again! Good luck with the\l"
	.string "last egg-- I know you can do it!\l"
	.string "Come back play with me sometime!$"
