#include <stdio.h>
/*#include <string.h>
int main()
{
    int T,N,i;
     str[50],maxi;
    printf("Enter T ");
    scanf("%d",&T);
    while(T)
    {
        gets((char*)str);
        maxi=str[0];
        N=(strlen((char*)str))-1;
        for(i=0;i<N;i++)
        {
            if(str[i]!=N)
            {
                if(str[i+1]>=str[i])
                    maxi=str[i+1];
            }
        }
        printf("maximum is %lu\n",maxi);
        T--;
    }
    return 0;
}*/
int main()
{
int size, i;
scanf("%d", size);
int arr[size];
for(i=1; i<=size; i++)
{
scanf("%d", arr[i]);
printf("%d", arr[i]);
}
return 0;
}
