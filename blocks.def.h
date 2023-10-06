//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/  /*Command*/    /*Update Interval*/  /*Update Signal*/
  {"| ", "/usr/local/bin/sb-vol",             0,    1},

  {" " , "date '+%a, %b %d %H:%M'",          5,    0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
