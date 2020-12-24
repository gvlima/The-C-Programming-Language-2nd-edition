/**
 * Chapter: 2
 * Exercise: 2-10 - Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression
 * instead of if-else.
 **/

#include <stdio.h>

int lower(int c);

int main() {
    printf("%c", lower('G'));
    return 0;
}

int lower(int c){
    return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}