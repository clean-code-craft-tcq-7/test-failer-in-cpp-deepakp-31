#include <iostream>
#include <assert.h>
#include <string.h>

const char *majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char *minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int printColorMap()
{
    int i = 0, j = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            std::cout << ((i * 5) + j + 1) << "\t| ";
            std::string strMajcol = majorColor[i];
            if (strMajcol.length() > 5)
                std::cout<< majorColor[i] ;
            else
            {    
                std::cout<<majorColor[i] ;
                for (long unsigned int k =1; k <= (6 - strMajcol.length()); k ++)  std::cout<<" ";
            }
            
            std::cout<< "\t| " << minorColor[j] << "\n";
        }
    }
    return i * j;
}

bool checkString(int major, int minor, std::string strToCompare)
{
    std::string checkString = std::to_string((((major - 1) * 5) + minor)) + " | " + majorColor[major - 1] + " | " + minorColor[minor - 1];

    // Compare string
    return checkString.compare(strToCompare);
}

int main()
{
    int result = printColorMap();
    assert(result == 25);

    // Random Test
    assert(checkString(5, 5, "25\t| Violet\t| Slate"));
    assert(checkString(2, 4, "9\t| Red   \t| Brown"));

    std::cout << "All is well (maybe!)\n";
    return 0;
}
