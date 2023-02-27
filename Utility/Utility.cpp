#include "Utility.h"

void errMinMax(int nInt, int nMax, int nMin = 0){
    int nTemp;
    if(nInt > nMax){
        nTemp = nInt - nMax;
        nInt = nMin + nTemp;
    }
    else if(nInt < nMin){
        nTemp = nInt - nMin;
        nInt = nMax - nTemp;
    }
}