#include "Utility.h"

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