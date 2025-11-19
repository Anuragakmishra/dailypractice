#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int toSeconds(int hours, int minutes, int seconds){
    int second = ((hours*3600)+(minutes*60)+(seconds));
    return second;
}

int main() {
    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);
    int res = (toSeconds(h, m, s));
    printf("Total seconds: %d", res);
    return 0;
}