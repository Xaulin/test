#include <iostream>

class A{
public:
	~A(){
		std::cout << "A";
		std::cin.get();
	}
};

class B : public A{
public:
	~B(){
		std::cout << "B";
	}
};

int main(){
	B();
}