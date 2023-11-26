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

// 1-5-4
void reverseArray(int *a, int n){
    printf("reverseArray : ");
    for (int i = 0, j = n-1; i<j; i++, j--){
        a[i] ^= a[j] ^= a[i] ^= a[j];
    }
    for (int i = 0; i < n; i++){
        printf(" %d,", a[i]);
    }
    printf("\n");
    
}

void reverseArray2(int *a, int n, int k){
    printf("reverseArray2 start\n");
    reverseArray(a, k);
    reverseArray(&a[k], n - k);
    reverseArray(a, n);
    printf("end\n");
}

int main(){
    int nArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int nArray2[10] = {1, 4, 6, 7, 2, 8, 6, 3, 5, 10};
    int nArray3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("SumArray : %d\n",SumArray(nArray, sizeof(nArray)/sizeof(nArray[0])));
    findValue(nArray, sizeof(nArray)/sizeof(nArray[0]), 9);
    printf("BinarySearch : %d\n", BinarySearch(nArray, sizeof(nArray)/sizeof(nArray[0]), 1));
    reverseArray2(nArray3, sizeof(nArray3)/sizeof(nArray3[0]), 2);
    return 0;
}