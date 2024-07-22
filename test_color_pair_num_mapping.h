#ifndef TEST_COLOR_PAIR_NUM_MAPPING_H_
#define TEST_COLOR_PAIR_NUM_MAPPING_H_

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);

#endif
