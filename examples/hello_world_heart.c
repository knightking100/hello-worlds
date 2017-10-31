/**
 * C program to print heart star pattern with center name
 */
 
#include <stdio.h>
#include <string.h>
 
int main()
{
    int i, j, n;
    char name[50];
    int len;
    strcpy(name, "Hello World!"); 
    n = 15;
    len = strlen(name);

    // Print upper part of the heart shape
    for(i=n/2; i<=n; i+=2)
    {
        for(j=1; j<n-i; j+=2)
        {
            printf(" ");
        }
 
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
 
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
 
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
 
        printf("\n");
    }
 
    // Prints lower triangular part of the pattern
    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
        
        // Print the name
        if(i == n) 
        {
            for(j=1; j<=(n * 2-len)/2; j++)
            {
                printf("*");
            }   

            printf("%s", name);

            for(j=1; j<(n*2-len)/2; j++)
            {
                printf("*");
            }
        }
        else 
        {
            for(j=1; j<=(i*2)-1; j++)
            {
                printf("*");
            }
        }
 
        printf("\n");
    }
 
    return 0;
}

