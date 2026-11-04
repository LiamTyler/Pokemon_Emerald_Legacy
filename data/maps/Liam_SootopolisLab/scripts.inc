Liam_SootopolisLab_MapScripts::
	.byte 0


Liam_SootopolisLab_EquipmentSign::
# 5 "data/maps/Liam_SootopolisLab/scripts.pory"
	lockall
# 6 "data/maps/Liam_SootopolisLab/scripts.pory"
	msgbox Liam_SootopolisLab_EquipmentSign_Text_0
# 7 "data/maps/Liam_SootopolisLab/scripts.pory"
	releaseall
	return


Liam_SootopolisLab_BrokenComputer::
# 11 "data/maps/Liam_SootopolisLab/scripts.pory"
	lockall
# 12 "data/maps/Liam_SootopolisLab/scripts.pory"
	msgbox Liam_SootopolisLab_BrokenComputer_Text_0
# 16 "data/maps/Liam_SootopolisLab/scripts.pory"
	releaseall
	return


Liam_SootopolisLab_ComputerSign::
# 20 "data/maps/Liam_SootopolisLab/scripts.pory"
	lockall
# 21 "data/maps/Liam_SootopolisLab/scripts.pory"
	callnative CheckPartyForPorygon
# 22 "data/maps/Liam_SootopolisLab/scripts.pory"
	compare VAR_0x8004, 1
	goto_if_ne Liam_SootopolisLab_ComputerSign_2
# 32 "data/maps/Liam_SootopolisLab/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 33 "data/maps/Liam_SootopolisLab/scripts.pory"
	waitmoncry
# 34 "data/maps/Liam_SootopolisLab/scripts.pory"
	msgbox Liam_SootopolisLab_ComputerSign_Text_1
Liam_SootopolisLab_ComputerSign_1:
# 57 "data/maps/Liam_SootopolisLab/scripts.pory"
	releaseall
	return

Liam_SootopolisLab_ComputerSign_2:
# 24 "data/maps/Liam_SootopolisLab/scripts.pory"
	msgbox Liam_SootopolisLab_ComputerSign_Text_0
	goto Liam_SootopolisLab_ComputerSign_1


Liam_SootopolisLab_EquipmentSign_Text_0:
# 6 "data/maps/Liam_SootopolisLab/scripts.pory"
	.string "The machines appear to be measuring\nsomething from the cave below...$"

Liam_SootopolisLab_BrokenComputer_Text_0:
# 13 "data/maps/Liam_SootopolisLab/scripts.pory"
	.string "This computer appears to be recently\n"
	.string "wiped clean, as if someone was trying to\l"
	.string "hide something...$"

Liam_SootopolisLab_ComputerSign_Text_0:
# 25 "data/maps/Liam_SootopolisLab/scripts.pory"
	.string "A working computer! However, it appears\n"
	.string "to be encryped. If only there was\l"
	.string "someone good with computers...$"

Liam_SootopolisLab_ComputerSign_Text_1:
# 35 "data/maps/Liam_SootopolisLab/scripts.pory"
	.string "Porygon hacked into the computer! This\n"
	.string "appears to be an old Team Rocket\l"
	.string "secret lab! They must have expanded\l"
	.string "further than anyone predicted...\p"
	.string "The files on this computer look to be\n"
	.string "related to various legendaries,\l"
	.string "particularly Mew. It looks like they\l"
	.string "were trying to capture Mew for some\l"
	.string "sort of secret project? Can't tell...\p"
	.string "They were analyzing the Cave of Origin\n"
	.string "below to see if the energies\l"
	.string "emitted there could be used to\l"
	.string "track down Mew. It's unclear if they\l"
	.string "found him, but there is mention of\l"
	.string "another secret lab in Hoenn! I don't\l"
	.string "see any explicit directions, but there\l"
	.string "are mentions of 'lots of trees' and\l"
	.string "'a waterfall'.$"
