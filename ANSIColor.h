// ANSIColor by GROMPIT, 6th of March 2023.

#ifndef ANSICOLOR_H
#define ANSICOLOR_H

// NORMAL 
#define C_BLK "\x1b[0;30m"   // BLACK
#define C_RED "\x1b[0;31m"   // RED
#define C_GRN "\x1b[0;32m"   // GREEN
#define C_YEL "\x1b[0;33m"   // YELLOW
#define C_BLU "\x1b[0;34m"   // BLUE
#define C_MAG "\x1b[0;35m"   // MAGENTA
#define C_CYN "\x1b[0;36m"   // CYAN
#define C_WHT "\x1b[0;37m"   // WHITE

// BRIGHT (HIGH INTENSITY)
#define C_BBLK "\x1b[0;90m"   // BRIGHT BLACK
#define C_BRED "\x1b[0;91m"   // BRIGHT RED
#define C_BGRN "\x1b[0;92m"   // BRIGHT GREEN
#define C_BYEL "\x1b[0;93m"   // BRIGHT YELLOW
#define C_BBLU "\x1b[0;94m"   // BRIGHT BLUE
#define C_BMAG "\x1b[0;95m"   // BRIGHT MAGENTA
#define C_BCYN "\x1b[0;96m"   // BRIGHT CYAN
#define C_BWHT "\x1b[0;97m"   // BRIGHT WHITE

// BOLD
#define C_BLK_B "\x1b[1;30m"   // BLACK          + BOLD
#define C_RED_B "\x1b[1;31m"   // RED            + BOLD
#define C_GRN_B "\x1b[1;32m"   // GREEN          + BOLD
#define C_YEL_B "\x1b[1;33m"   // YELLOW         + BOLD
#define C_BLU_B "\x1b[1;34m"   // BLUE           + BOLD
#define C_MAG_B "\x1b[1;35m"   // MAGENTA        + BOLD
#define C_CYN_B "\x1b[1;36m"   // CYAN           + BOLD
#define C_WHT_B "\x1b[1;37m"   // WHITE          + BOLD

// BOLD BRIGHT (HIGH INTENSITY)

#define C_BBLK_B "\x1b[1;90m"   // BRIGHT BLACK   + BOLD
#define C_BRED_B "\x1b[1;91m"   // BRIGHT RED     + BOLD
#define C_BGRN_B "\x1b[1;92m"   // BRIGHT GREEN   + BOLD
#define C_BYEL_B "\x1b[1;93m"   // BRIGHT YELLOW  + BOLD
#define C_BBLU_B "\x1b[1;94m"   // BRIGHT BLUE    + BOLD
#define C_BMAG_B "\x1b[1;95m"   // BRIGHT MAGENTA + BOLD
#define C_BCYN_B "\x1b[1;96m"   // BRIGHT CYAN    + BOLD
#define C_BWHT_B "\x1b[1;97m"   // BRIGHT WHITE   + BOLD


// UNDERLINE

#define C_BLK_U "\x1b[4;30m"   // BLACK          + UNDERLINE
#define C_RED_U "\x1b[4;31m"   // RED            + UNDERLINE
#define C_GRN_U "\x1b[4;32m"   // GREEN          + UNDERLINE
#define C_YEL_U "\x1b[4;33m"   // YELLOW         + UNDERLINE
#define C_BLU_U "\x1b[4;34m"   // BLUE           + UNDERLINE
#define C_MAG_U "\x1b[4;35m"   // MAGENTA        + UNDERLINE
#define C_CYN_U "\x1b[4;36m"   // CYAN           + UNDERLINE
#define C_WHT_U "\x1b[4;37m"   // WHITE          + UNDERLINE

// NORMAL BACKGROUND COLOR
#define CB_BLK "\x1b[0;40m"   // BLACK
#define CB_RED "\x1b[0;41m"   // RED
#define CB_GRN "\x1b[0;42m"   // GREEN
#define CB_YEL "\x1b[0;43m"   // YELLOW
#define CB_BLU "\x1b[0;44m"   // BLUE
#define CB_MAG "\x1b[0;45m"   // MAGENTA
#define CB_CYN "\x1b[0;46m"   // CYAN
#define CB_WHT "\x1b[0;47m"   // WHITE

// BRIGHT (HIGH INTENSITY) BACKGROUND COLOR
#define CB_BBLK "\x1b[0;100m"   // BRIGHT BLACK
#define CB_BRED "\x1b[0;101m"   // BRIGHT RED
#define CB_BGRN "\x1b[0;102m"   // BRIGHT GREEN
#define CB_BYEL "\x1b[0;103m"   // BRIGHT YELLOW
#define CB_BBLU "\x1b[0;104m"   // BRIGHT BLUE
#define CB_BMAG "\x1b[0;105m"   // BRIGHT MAGENTA
#define CB_BCYN "\x1b[0;106m"   // BRIGHT CYAN
#define CB_BWHT "\x1b[0;107m"   // BRIGHT WHITE

// COLOR RESET
#define C_RST "\x1b[0m"    // RESET

#endif