//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-video",			1,					7},
	{"",	"sb-mic",			1,					6},
	{"",	"sb-music",			1,					11},
	{"",	"sb-clock",			1,					1},
	{"",	"sb-volume",		1,					10},
	{"",	"sb-bluetooth",		5,					5},
	{"",	"sb-battery",		5,					3},
	{"",	"sb-internet",		5,					4},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "|";
