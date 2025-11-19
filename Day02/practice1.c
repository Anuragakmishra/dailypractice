#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int diff(char x , char y){
    int difference = (y-x);
    return (difference);
}
int main() {
    char letter1, letter2;
    scanf("%c %c", &letter1, &letter2);
    int res = diff(letter1 , letter2);
    printf("The distance between %c and %c is %d", letter1, letter2, res);
    return 0;
}