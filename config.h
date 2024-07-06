// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"", "backlight", 0, 20},
    {"", "volume", 0, 10},
    {"", "internet", 5, 4},
    {"", "nettraf", 1, 16},
    {"", "cpu", 10, 18},
    {"", "memory", 10, 14},
    {"", "clock", 60, 1},
    {"", "battery", 5, 3},
    {"", "pacupdate", 3600, 24},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
