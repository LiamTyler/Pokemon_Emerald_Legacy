Liam_DigLab_MapScripts::
	.byte 0


Liam_DigLab_SignBackground::
# 10 "data/maps/Liam_DigLab/scripts.pory"
	lockall
# 11 "data/maps/Liam_DigLab/scripts.pory"
	msgbox Liam_DigLab_SignBackground_Text_0
# 12 "data/maps/Liam_DigLab/scripts.pory"
	releaseall
	return


Liam_DigLab_Sign1::
# 16 "data/maps/Liam_DigLab/scripts.pory"
	lockall
# 17 "data/maps/Liam_DigLab/scripts.pory"
	msgbox Liam_DigLab_Sign1_Text_0
# 25 "data/maps/Liam_DigLab/scripts.pory"
	releaseall
	return


# 28 "data/maps/Liam_DigLab/scripts.pory"

# 29 "data/maps/Liam_DigLab/scripts.pory"
Liam_DigLab_Braille1::
# 30 "data/maps/Liam_DigLab/scripts.pory"
    brailleformat 0, 0, 0, 0, 0, 0
# 31 "data/maps/Liam_DigLab/scripts.pory"
    .braille "I LOVE$"

Liam_DigLab_Sign2::
# 35 "data/maps/Liam_DigLab/scripts.pory"
	lockall
# 36 "data/maps/Liam_DigLab/scripts.pory"
	msgbox Liam_DigLab_Sign2_Text_0
# 40 "data/maps/Liam_DigLab/scripts.pory"
	closemessage
# 41 "data/maps/Liam_DigLab/scripts.pory"
	braillemsgbox Liam_DigLab_Braille1
# 42 "data/maps/Liam_DigLab/scripts.pory"
	closemessage
# 43 "data/maps/Liam_DigLab/scripts.pory"
	msgbox Liam_DigLab_Sign2_Text_1
# 46 "data/maps/Liam_DigLab/scripts.pory"
	releaseall
	end


# 50 "data/maps/Liam_DigLab/scripts.pory"

# 51 "data/maps/Liam_DigLab/scripts.pory"
Liam_DigLab_Braille2::
# 52 "data/maps/Liam_DigLab/scripts.pory"
    brailleformat 0, 0, 0, 0, 0, 0
# 53 "data/maps/Liam_DigLab/scripts.pory"
    .braille "FORESTS$"

Liam_DigLab_Sign3::
# 57 "data/maps/Liam_DigLab/scripts.pory"
	lockall
# 58 "data/maps/Liam_DigLab/scripts.pory"
	msgbox Liam_DigLab_Sign3_Text_0
# 63 "data/maps/Liam_DigLab/scripts.pory"
	closemessage
# 64 "data/maps/Liam_DigLab/scripts.pory"
	braillemsgbox Liam_DigLab_Braille2
# 65 "data/maps/Liam_DigLab/scripts.pory"
	releaseall
	end


Liam_DigLab_Sign4::
# 70 "data/maps/Liam_DigLab/scripts.pory"
	lockall
# 71 "data/maps/Liam_DigLab/scripts.pory"
	msgbox Liam_DigLab_Sign4_Text_0
# 76 "data/maps/Liam_DigLab/scripts.pory"
	releaseall
	return


Liam_DigLab_SignBackground_Text_0:
# 11 "data/maps/Liam_DigLab/scripts.pory"
	.string "The computer appears to be running\nsome sort of analysis.$"

Liam_DigLab_Sign1_Text_0:
# 18 "data/maps/Liam_DigLab/scripts.pory"
	.string "We're so close to finding Mew, I can\n"
	.string "feel it! We're getting an emergency\l"
	.string "signal from Kanto though, things must\l"
	.string "be going really poorly there, we need to\l"
	.string "return immediately, despite our\l"
	.string "progress.$"

Liam_DigLab_Sign2_Text_0:
# 37 "data/maps/Liam_DigLab/scripts.pory"
	.string "We found some strange symbols from\n"
	.string "ancient ruins we believe Mew inhabited:$"

Liam_DigLab_Sign2_Text_1:
# 44 "data/maps/Liam_DigLab/scripts.pory"
	.string "If only we had more time to analyze!$"

Liam_DigLab_Sign3_Text_0:
# 59 "data/maps/Liam_DigLab/scripts.pory"
	.string "This was the second half of the symbols\n"
	.string "from the ruins we found, I just can't\l"
	.string "make heads or tails of it yet...$"

Liam_DigLab_Sign4_Text_0:
# 72 "data/maps/Liam_DigLab/scripts.pory"
	.string "Bruh why do we keep making our bases in\n"
	.string "the sand, I really doubt Mew was going\l"
	.string "to be chillin here...$"
