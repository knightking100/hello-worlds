#include <bits/stdc++.h>

using namespace std;

//Using classes to print "Hello World"
class printing
{
public:
    void print();       //public function
};

void printing::print() {
    cout<<"Hello World!"<<endl;
}

int main(){
    printing p;         //class variable
    p.print();          //invoking print function using class variable 'p'
    return 0;
}
