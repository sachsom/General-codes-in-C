#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
#include<cs50.h>

int count, key, len, k = 0;
string s;
int lol;
int main(int argc, string argv[])
{
    lol = argc;
    if ( argc == 2)
    {
    key = atoi(argv[1]);
    s = get_string ("plaintext:  ");
    len = strlen ( s );
    int x = len;

        while( x >= 0 )
        {
        if( isalpha( s[count] ) )           // if-1 for checking if s[count] is alphabet or not
            {
                    if( isupper ( s[count] ) )       // if-2 for checking if s[count] is UPPER case or not
                    {
                       // printf("%d",(int)s[count]);                     //debug
                        k = ( ( ( (int)s[count] ) - 65 ) + key ) % 26;
                        s[count] =(char)( 65 + k);
                       // printf("%c",s[count]);                          //DEBUG
                        x--;
                        k = 0;
                        count++;
                    }
                    else                            // else statement for increment for lower case
                    {
                        k = ( ( ( (int)s[count] - 97 ) ) + key ) % 26;
                        s[count] =(char)( 97 + k);
                        printf("%c",s[count]);
                        x--;
                        k = 0;
                        count++;
                    }
                }
                else
            {
                count++;
                x--;
            }                                   // end of else for isalpha check if-1
        }

     printf("ciphertext: %s\n", s);
   }
   else
   {
     return 1;
   }
}