#include <stdio.h>

int main() {
    int a = 0 ;
    scanf( "%d", &a ) ;
    if( a % 2 == 0 ) 
        for( int i = 1 ; i <= a ; i++ ) printf( "%d ", i * 2 )  ;
    else 
        for( int i = 9 ; i >= 1 ; i -= 2 ) printf( "%d ", i )  ;
    
    return 0 ;
}//end function
