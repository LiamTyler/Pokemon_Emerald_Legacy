Liam_DigLab_MapScripts::
	.byte 0


Liam_DigLab_WarpOut::
# 5 "data/maps/Liam_DigLab/scripts.pory"
	warp MAP_ROUTE106, 48, 17
# 6 "data/maps/Liam_DigLab/scripts.pory"
	waitstate
	return


Liam_DigLab_Sign1::
# 10 "data/maps/Liam_DigLab/scripts.pory"
	lockall
# 11 "data/maps/Liam_DigLab/scripts.pory"
	msgbox Liam_DigLab_Sign1_Text_0
# 12 "data/maps/Liam_DigLab/scripts.pory"
	releaseall
	return


Liam_DigLab_Sign1_Text_0:
# 11 "data/maps/Liam_DigLab/scripts.pory"
	.string "Hello Bwee$"
