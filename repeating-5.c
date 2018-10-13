#include <stdio.h>

int main(){
    int n, i, j, k, l, min, maks, posMin, posMaks, selisih;
    scanf("%d", &n);
    int bil[n];
    for(i = 0; i < n; i++)
        scanf("%d", &bil[i]);
    
    min = bil[0];
    maks = bil[0];
    for(j = 1; j < n; j++){
        if(bil[j] > maks){
            maks = bil[j];
            posMaks = j+1;
        }else if(bil[j] < min){
            min = bil[j];
            posMin = j+1;
        }
    }

    selisih = maks - min;
    if(posMaks > posMin)
        printf("%d %d %d\n", selisih, posMin, posMaks);
    else
        printf("%d %d %d\n", selisih, posMaks, posMin);
    return 0;
}