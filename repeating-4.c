#include <stdio.h>

int main(){
    int n, a, b, res;
    scanf("%d %d %d", &n, &a, &b);
    res = n/a + n/b - n/(a*b);
    printf("%d\n", res);
    return 0;
}