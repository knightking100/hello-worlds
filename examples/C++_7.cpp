#include <iostream>
#include <sstream>

int main(){
	std::stringstream ss;
	ss << "Hello";
	ss << " ";
	ss << "World!";

	std::cout<<ss.str()<<std::endl;
	return 0;
}