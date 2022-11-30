#include <iostream>
#include <assert.h>

const char *majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char *minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

bool testAlignment(int icheck, int jcheck, const char *minCol, const char *majCol )
{
    
}

int printColorMap()
{
    int i = 0, j = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
            assert(testAlignment(i, j, majorColor[i], majorColor[j]));// test function 
        }
    }
    return i * j;
}

int main()
{
    int result = printColorMap();
    assert(result == 25);
    assert(result > 0);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
