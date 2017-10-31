/*
 * A small C code to print "Hello world" out of a array with a for loop.
*/

#include <stdio.h>

int main(){
    char hw[] = {'H','e','l','l','o',' ','w','o','r','l','d'};
    int i = 0;
    for(i < sizeof(hw); i++;)
    {
        printf("%c",hw[i]);
    }
    return 0;
}