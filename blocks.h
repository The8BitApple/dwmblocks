//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"" , "scripts/blocks-net.sh", 1, 0},
    {" " , "scripts/blocks-pack.sh", 3600, 0},
    {" " , "scripts/blocks-home.sh", 350, 0},
    {" ", "scripts/blocks-root.sh", 350, 0},
    {" ", "scripts/blocks-mem.sh", 10, 0},
    {" ", "scripts/blocks-cpu.sh", 5, 0},
	{"", "scripts/blocks-wttr.sh", 3600, 0},
	{"", "date '+%b %d (%a) %R'", 60, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
