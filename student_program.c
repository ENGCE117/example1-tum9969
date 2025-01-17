#include <stdio.h>

int main() {
    int a = 0 ;
    scanf( "%d", &a ) ;
    for( int i = 0 ; i < a ; i++ ) {
        if( (i+1) % 2 == 0 ) printf( "%d ", (i+1) * 2 )  ;
    }
    return 0 ;
}//end function
