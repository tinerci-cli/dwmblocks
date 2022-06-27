//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",    "~/.local/bin/sbar/weather.sh", 18000, 5},
    {"",    "~/.local/bin/sbar/volume.sh", 0, 12},
    {"",    "~/.local/bin/sbar/calendar.sh", 1, 1},
    {";", "", 0, 0},
    {"",    "~/.local/bin/sbar/nettraf.sh", 1, 1},
    {"",    "~/.local/bin/sbar/ram.sh", 10, 14},
    {"",    "~/.local/bin/sbar/cpu.sh", 10, 13},
    {";", "", 0, 0},
    {"",    "~/.local/bin/sbar/praytimes.sh", 10, 13}
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "|";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
