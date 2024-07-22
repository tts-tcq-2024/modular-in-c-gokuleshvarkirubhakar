#include <stdio.h>
#include "get_color_pair_num_mapping.h"
#include "print_color_coding_manual.h"
#include "test_color_pair_num_mapping.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    printf("\nColor Code Manual:\n");
    PrintColorCodeManual();
    
    return 0;
}
