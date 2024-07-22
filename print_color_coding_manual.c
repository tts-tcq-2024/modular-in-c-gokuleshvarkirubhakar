#include <stdio.h>
#include <get_color_pair_num_mapping.h>

void PrintColorCodeManual(void) {
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    int pairNumber = 0;
    ColorPair colorPair;
    
    for (int major = 0; major < numberOfMajorColors; major++) {
        for (int minor = 0; minor < numberOfMinorColors; minor++) {
            colorPair = (ColorPair){major, minor};
            pairNumber = GetPairNumberFromColor(&colorPair);       
            ColorPairToString(&colorPair, colorPairNames);
            printf("%d - %s\n", pairNumber, colorPairNames);
        }
    }
}
