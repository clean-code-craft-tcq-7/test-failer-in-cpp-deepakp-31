#include <iostream>
#include <assert.h>

const char *majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char *minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int printColorMap()
{
    int i = 0, j = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    return i * j;
}

void testNumberToPair(int pairNumber,
                      MajorColor expectedMajor,
                      MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

bool testPairToNumber(char *major,char * minor, int expectedPairNumber)
{
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);

    return true;

    else
        return false;
}

bool  assertionTest()
{
    for (int )
    
}

int main()
{
    int result = printColorMap();
    assert(result == 25);
    assert(testPairToNumber("Red","Green", 8));
    assert(testPairToNumber("Yellow","Brown", 19);)

    std::cout << "All is well (maybe!)\n";
    return 0;
}
