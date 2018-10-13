#include <stdio.h>

int main(){
    int n, i, j, k, l, num = 1;
    scanf("%d", &n);
    for(k = 0; k < n; k++){
        if(num > 9)
            num = 0;
        for(l = 0; l < n; l++){
            if(k%2 != 0){
                if(l != n-1)
                    printf("%d", num--);
                else
                    printf("%d", num);
                if(num < 0)
                    num = 9;
            }else if(k%2 == 0 || k == 0){
                if(l != n-1)
                    printf("%d", num++);
                else
                    printf("%d", num);
                if(num > 9)
                    num = 0;
            }
        }
        num += 4;
        printf("\n");
    }
    return 0;
}