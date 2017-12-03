#include <bits/stdc++.h>

using namespace std;

int main()
{
    //for fast input and output
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //using MAP in C++ STL(Standard Template Library) to print "HELLO WORLD" taking key-value pairs
    map<int, char> m;
    m[1] = 'H'; m[2] = 'E';
    m[3] = 'L'; m[4] = 'L';
    m[5] = 'O'; m[6] = ' ';
    m[7] = 'W'; m[8] = 'O';
    m[9] = 'R'; m[10] = 'L';
    m[11] = 'D';

    for(map<int,char>::iterator itr = m.begin();itr != m.end();itr++)
        cout<<itr->second;

    return 0;
}
