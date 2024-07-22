#include <stdio.h>
#include "color_code_converter.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

const int MAX_COLORPAIR_NAME_CHARS = 16;

int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s", MajorColorNames[colorPair->majorColor], MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor = (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;
}

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
