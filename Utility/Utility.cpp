#include "Utility.h"

/*errMinMax  simulates circle array through bounds checking
    @param *nInt        = number to check and correct
    @param nMax         = upper bound
    @param nMin         = lower bound
*/
void errMinMax(int *nInt, int nMax, int nMin){
    int nTemp;
    if(*nInt > nMax){
        nTemp = *nInt - nMax;
        *nInt = nMin + (nTemp - 1);
    }
    else if(*nInt < nMin){
        nTemp = *nInt - nMin;
        *nInt = nMax - (nTemp + 1);
    }
}