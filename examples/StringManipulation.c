#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char *s1,*s2,*s3,*temp;
    int len1,len2,i=0,j=0,k,c=0;
    gets(s1);
    gets(s2);
    len1=strlen(s1);
    len2=strlen(s2);
    s3=s1;
    temp=s1;
    for(i=0;i<len1;((c==1)?i:i++))
    {
       c=0;
       for(j=0;j<len2;j++)
       {
          if(temp[i]==s2[j])
          {
            k=i;
            c=1;
            while(s1[k])
            {
               temp[k]=temp[k+1];
               k++;
            }
         }
       }
    }
    printf("%s",s3);
    getch();
}
