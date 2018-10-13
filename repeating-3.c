#include <stdio.h>

int main(){
    int x, el = 0, temp, trigger = 0;
    scanf("%d ", &x);
    while(x != -9){
        if(trigger == 0){
            printf("%d", x);
            trigger++;
            temp = x;
        }else{
            if(x != temp){
                printf("%d", x);
            }
            temp = x;
        }
        scanf("%d", &x);
    }
    printf("\n");
    return 0;
}