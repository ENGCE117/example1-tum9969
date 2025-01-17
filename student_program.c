#include <stdio.h>

int main() {
    int a = 0 ;
    scanf( "%d", &a ) ;
    for( int i = 0 ; i < a ; i++ ) {
        if( i % 2 == 0 ) printf( "%d ", i )  ;
    }
    return 0 ;
}//end function
