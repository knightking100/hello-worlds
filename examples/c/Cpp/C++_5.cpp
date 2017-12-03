#include <bits/stdc++.h>
 
using namespace std;
int main () 
{
  //this is for fast input and output
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 
 //Making use of C++ STL(Standard Template Library) to print "Hello World"
  vector<char> vec;
  vec.push_back('H');
  vec.push_back('E');
  vec.push_back('L');
  vec.push_back('L');
  vec.push_back('O');
  vec.push_back(' ');
  vec.push_back('W');
  vec.push_back('O');
  vec.push_back('R');
  vec.push_back('L');
  vec.push_back('D');

  for(vector<char>::iterator itr = vec.begin(); itr != vec.end();itr++){
    cout<<*itr;
  }
  
  return 0;

}
