#define CMDLENGTH 100
#define DELIMITER " "
#define CLICKABLE_BLOCKS
#define LEADING_DELIMITER

const Block blocks[] = {
	BLOCK("sb-todo",		1,  1),
	BLOCK("sb-m30-sync",	2,  2),
	BLOCK("sb-video",		5,  3),
	BLOCK("sb-mic",			5,  4),
	BLOCK("sb-music",		0,  5),
	BLOCK("sb-clock",		1,  6),
	BLOCK("sb-volume",		5,  7),
	BLOCK("sb-bluetooth",	5,	8),
	BLOCK("sb-battery",		60,	9),
	BLOCK("sb-internet",    5,	10),
};
