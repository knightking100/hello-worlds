#include <bits/stdc++.h>

using namespace std;

int main(){

  //Using an array of integers to store the ASCII values of the characters "HELLO WORLD" in reverse order
  int number[] = {68,76,82,79,87,32,79,76,76,69,72};
  for(int i=11-1;i>=0;i--){
    cout<<char(number[i]);
  }

  return 0;
}
