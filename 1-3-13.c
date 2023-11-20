#include <stdio.h>

int fun11(int n){
    int i, j = 0, m = 0;
    for (i = 0; i < n; i++){
        for (; j < n; j++){
            m += 1;
            printf("%d\n", m);
        }
    }
    return m;
}

int main(){
    
    int nInput = 0;

    scanf("%d", &nInput);
    fun11(nInput);
    
    return 0;
}
