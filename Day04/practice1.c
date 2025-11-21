#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void split(int num){
    printf("%d %d %d", (num/100), ((num/10)%10), (num%10));
}
int main() {
    int num;
    scanf("%d", &num);
    split(num);
    return 0;
}