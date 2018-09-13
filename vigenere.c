#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
#include<cs50.h>

int get_key( int x , string j);

int count, key, len, k = 0;
int key_count;
string s, skey;
int lol;
int main(int argc, string argv[])
{




    lol = argc;
    if ( argc == 2 )
    {

        for(int r=0; r<strlen(argv[1]) ; r++)
    {
        if( isalpha(argv[1][r])==0 )
        return 1;
    }



    skey = (argv[1]);
    s = get_string ("plaintext:  ");
    len = strlen ( s );
    int x = len;
    int skey_len = strlen (skey);

        while( x >= 0 )
        {
        if( isalpha( s[count] ) )           // if-1 for checking if s[count] is alphabet or not
            {
                    if( isupper ( s[count] ) )       // if-2 for checking if s[count] is UPPER case or not
                    {
                        key=get_key( key_count % skey_len , skey );
                        key_count++;
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
                        key=get_key( key_count % skey_len , skey );
                        key_count++;
                        k = ( ( ( (int)s[count] - 97 ) ) + key ) % 26;
                        s[count] =(char)( 97 + k);
                       // printf("%c",s[count]);
                        x--;
                        k = 0;
                        count++;
                    }
                }
                else
            {
                //key_count++;
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


int get_key( int x, string j)
{
    int k_key=0;
    //int len = strlen ( j );
    //char c = j[ len % x ];


    char c = j[ x ];

    if (isupper( c ))
    {
         k_key = (int)c - 65;
    }
    else
    {
         k_key = (int)c - 97;
    }

    return k_key;

}