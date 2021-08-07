//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"" , "blocks-volume.sh", 0, 10},
    {"" , "blocks-net.sh", 1, 0},
    {" " , "blocks-pack.sh", 3600, 0},
    {" ", "blocks-mem.sh", 10, 0},
    {" ", "blocks-cpu.sh", 5, 0},
	{"", "blocks-wttr.sh", 3600, 0},
	{"", "date '+%d/%b/%y (%a) %R'", 60, 0},
    {"" , "blocks-connect.sh", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
