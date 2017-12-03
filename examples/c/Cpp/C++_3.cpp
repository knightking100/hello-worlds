#include <iostream>
using namespace std;
 
int main() {
 
	//Makes time taken by cin and cout as fast as scanf and printf. 
	//This helps avoid TLE in certain types of Competetive Coding question.
	ios_base::sync_with_stdio(false);
	//Remove this line if work must be done online and requires flushing.
	cin.tie(0);
 
	cout << "Hello World!\n";
 
	return 0;
}
