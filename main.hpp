//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        return rand() % 100;
        
}

int getClosestMed(int rdnum1, int rdnum2, int rdnum3)


{
        int mean = ((rdnum1 + rdnum2 + rdnum3) / 3);

        int dif1 = abs( rdnum1 - mean);
        int dif2 = abs (rdnum2 - mean);
        int dif3 = abs (rdnum3 - mean);

        if ( dif1 <= dif2 && dif1 <= dif3){
                return rdnum1;
        }
        else if (dif2 <= dif1 && dif2 <= dif3)
        {
        return rdnum2;
        }
        else {
                return rdnum3;
        }
        
}
        int main (){
                srand(time(0));
                return (0);
        }