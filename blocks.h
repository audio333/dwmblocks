//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	// {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	// {"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
  {"",  "sb-internet",  5,  4},
  // {"",  "sb-nettraf", 1,  16},
	{"",	"sb-cpu",		10,	18},
  // {"", "sb-memory",  10, 14},
  // {"",  "sb-disk",  0,  0},
  {"",  "sb-battery", 5,  3},
	{"",	"sb-uptime",	60,	1},
	{"",	"sb-clock",	60,	1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
