#ifndef TEST_COLOR_PAIR_NUM_MAPPING_H_
#define TEST_COLOR_PAIR_NUM_MAPPING_H_

void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor);
void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber);

#endif // TEST_COLOR_PAIR_NUM_MAPPING_H_
