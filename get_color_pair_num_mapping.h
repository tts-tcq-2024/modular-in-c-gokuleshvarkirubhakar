#ifndef GET_COLOR_PAIR_NUM_MAPPING_H_
#define GET_COLOR_PAIR_NUM_MAPPING_H_

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

extern const int MAX_COLORPAIR_NAME_CHARS;
extern int numberOfMajorColors;
extern int numberOfMinorColors;

typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);

#endif // GET_COLOR_PAIR_NUM_MAPPING_H_
