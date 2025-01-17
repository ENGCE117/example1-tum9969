#include <stdio.h>

int main() {
    int a = 0 ;
    scanf( "%d", &a ) ;
    for( int i = 1 ; i <= a ; i++ ) {
        printf( "%d ", i * 2 )  ;
    }
    return 0 ;
}//end function
