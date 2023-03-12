#include <stdio.h>
#include "ANSIColor.h"

int main() {
    printf("Color test\n\n");
    printf(C_BGRN_B"Hello :-)\n"C_RST);
    printf(C_YEL_B""CB_BLU"Hello :-)\n"C_RST);

    return 0;
}