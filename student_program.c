#include <stdio.h>

int main() {
    int a = 0, b = 0, answer = 0 ;
    printf( "Enter Number : " ) ;
    scanf( "%d %d", &a, &b ) ;
    if( a == 0 && b == 0 ) answer = 0 ;
    else if( a == 1 && b == 1 ) answer = 0 ;
    else answer = a + b ;
    printf( "Answer = %d", answer ) ;
    return 0 ;
}
