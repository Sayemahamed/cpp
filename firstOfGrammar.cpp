#include<bits/stdc++.h>
using namespace std;
int nop;
char production[ 10 ][ 10 ];

void result( char res[], char val )
{
    int k;
    for (k = 0; res[ k ] != '\0'; k++)
        if (res[ k ] == val)
            return;
    res[ k ] = val;
    res[ k + 1 ] = '\0';
}
void FIRST( char res[], char c ) {
    int i, j, k;
    char subres[ 5 ];
    int eps;
    subres[ 0 ] = '\0';
    res[ 0 ] = '\0';
    if (!(isupper( c ))) {
        result( res, c );
        return;
    }
    for (i = 0; i < nop; i++) {
        if (production[ i ][ 0 ] == c) {
            if (production[ i ][ 2 ] == '$')
                result( res, '$' );
            else
            {
                j = 2;
                while (production[ i ][ j ] != '\0') {
                    eps = 0;
                    FIRST( subres, production[ i ][ j ] );
                    for (k = 0; subres[ k ] != '\0'; k++)
                        result( res, subres[ k ] );
                    for (k = 0; subres[ k ] != '\0'; k++)
                        if (subres[ k ] == '$') {
                            eps = 1;
                            break;
                        }
                    if (!eps)
                        break;
                    j++;
                }
            }
        }
    }
    return;
}
int main() {
    int i;
    char choice;
    char c;
    char res1[ 20 ];
    printf( "Number of production rules: " );
    scanf( " %d", &nop );
    for (i = 0; i < nop; i++) {
        printf( "Enter production Number %d : ", i + 1 );
        scanf( " %s", production[ i ] );
    }
    do {
        printf( "\n Find the FIRST of :" );
        scanf( " %c", &c );
        FIRST( res1, c );
        printf( "\n FIRST(%c)= { ", c );
        for (i = 0; res1[ i ] != '\0'; i++)
            printf( " %c ", res1[ i ] );
        printf( "}\n" );
        printf( "press 'y' to continue : " );
        scanf( " %c", &choice );
    } while (choice == 'y'||choice == 'Y');
    return 0;
}