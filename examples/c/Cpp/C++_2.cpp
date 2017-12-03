#include <iostream>
#include <string>
#include <stdio.h>                             

using namespace std;

int main() 
{

  /*using files for storing hello world in hello.txt using fprintf() and copying it in str1 and str2 using fscanf() */

  FILE *fp;
  char str1[10], str2[10];
  
  fp=fopen("hello.txt","w+");
  
  fprintf(fp,"%s %s","Hello","World!");
  rewind(fp);
  fscanf(fp,"%s",str1);
  fscanf(fp,"%s",str2);
  
  fclose(fp);
  
  cout<<endl<<str1<<" "<<str2<<endl;

/*use stdio.h header here too for using files*/

   return 0;
}
