#include <iostream>
#include <string>

void hello(std::string name){
	std::cout <<"Hello, " << name << "!" << std::endl;
}

int main(){
	std::string name;
	std::cin>>name;
	hello(name);
	return 0;
}