#include<bits/stdc++.h>
using namespace std;
int nop, m = 0, p, i = 0, j = 0;
char prod[ 10 ][ 10 ], res[ 10 ];
void FOLLOW( char c );
void first( char c );
void result( char );
int main()
{
    int i;
    int choice;
    char c, ch;
    printf( "Enter the no.of production rules: " );
    scanf( "%d", &nop );
    for (i = 0; i < nop; i++) {
        scanf( " %s", prod[ i ] );
    }
    do {
        m = 0;
        printf( "Find FOLLOW of -- >" );
        scanf( " %c", &c );
        FOLLOW( c );
        printf( "FOLLOW(%c) ={", c );
        for (i = 0; i < m; i++)
            printf( "%c ", res[ i ] );
        printf( "}\n" );
        printf( "Press 1 to continue: " );
        scanf( "%d%c", &choice, &ch );
    } while (choice == 1);
}
void FOLLOW( char c )
{
    if (prod[ 0 ][ 0 ] == c)
        result( '$' );
    for (i = 0; i < nop; i++) {
        for (j = 2; j < strlen( prod[ i ] ); j++)
        {
            if (prod[ i ][ j ] == c)
            {
                if (prod[ i ][ j + 1 ] != '\0')
                    first( prod[ i ][ j + 1 ] );
                if (prod[ i ][ j + 1 ] == '\0' && c != prod[ i ][ 0 ])
                    FOLLOW( prod[ i ][ 0 ] );
            }
        }
    }
}
void first( char c ) {
    int k;
    if (!(isupper( c )))
        result( c );
    for (k = 0; k < nop; k++) {
        if (prod[ k ][ 0 ] == c) {
            if (prod[ k ][ 2 ] == '$')
                FOLLOW( prod[ i ][ 0 ] );
            else if (islower( prod[ k ][ 2 ] ))
                result( prod[ k ][ 2 ] );
            else
                first( prod[ k ][ 2 ] );
        }
    }
}
void result( char c ) {
    int i;
    for (i = 0; i <= m; i++)
        if (res[ i ] == c)
            return;
    res[ m++ ] = c;
}