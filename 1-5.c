#include <stdio.h>

// 1-5-1
int SumArray(int array[], int size) {
    int i = 0;
    int sum = 0;
    for (i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}

// 1-5-2
int findValue(int array[], int size, int nFindThisValue) {
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (nFindThisValue == array[i]){
            printf("find one : %d\n", array[i]);
        }
    }
}

// 1-5-3
int BinarySearch(int array[], int size, int value){
    int nLow = 0;
    int nHigh = size - 1;
    int nMid;

    while(nLow <= nHigh){
        nMid = nLow + (nHigh - nLow) / 2;
        if (array[nMid] == value){
            return nMid;
        } else if (array[nMid] < value){
            nLow = nMid + 1;
        } else {
            nHigh = nMid - 1;
        }
    }
    return -1;
}

int main(){
    int nArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int nArray2[10] = {1, 4, 6, 7, 2, 8, 6, 3, 5};

    printf("SumArray : %d\n",SumArray(nArray, sizeof(nArray)/sizeof(nArray[0])));
    findValue(nArray, sizeof(nArray)/sizeof(nArray[0]), 9);
    printf("BinarySearch : %d\n", BinarySearch(nArray, sizeof(nArray)/sizeof(nArray[0]), 1));

    return 0;
}