#include <iostream>
#include <string>
using namespace std;
void proc() {
	int buf;
	std::cout << "Enter first number: ";
	std::cin >> buf;
	std::cout << std::endl;
	string buf2;
	std::cout << "Enter operator: ";
	std::cin >> buf2;
	std::cout << std::endl;
	if (buf2 == "+" || buf2 == "-" || buf2 == "*" || buf2 == "/") {

	}
	else {
		std::cout << "Invalid operator!";
		return;
	}
	int buf3;
	std::cout << "Enter second number: ";
	std::cin >> buf3;
	std::cout << std::endl;
	if (buf2 == "+") {
		std::cout << "Result: " << to_string(buf + buf3) << std::endl;
		std::cout << "Again? (y/n)";
		string b;
		std::cin >> b;
		std::cout << std::endl;
		if (b == "y") {
			proc();
		}
		else {
			return;
		}
	}
	else if (buf2 == "-") {
		std::cout << "Result: " << to_string(buf - buf3) << std::endl;
		std::cout << "Again? (y/n)";
		string b;
		std::cin >> b;
		std::cout << std::endl;
		if (b == "y") {
			proc();
		}
		else {
			return;
		}
	}
	else if (buf2 == "*") {
		std::cout << "Result: " << to_string(buf * buf3) << std::endl;
		std::cout << "Again? (y/n)";
		string b;
		std::cin >> b;
		std::cout << std::endl;
		if (b == "y") {
			proc();
		}
		else {
			return;
		}
	}
	else if (buf2 == "/") {
		if (buf == 0) {
			std::cout << "Division by zero!";
			return;
		}
		std::cout << "Result: " << to_string(buf / buf3) << std::endl;
		std::cout << "Again? (y/n)";
		string b;
		std::cin >> b;
		std::cout << std::endl;
		if (b == "y") {
			proc();
		}
		else {
			return;
		}
	}
}
int main() {
	proc();
}