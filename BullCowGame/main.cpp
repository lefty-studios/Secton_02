#include <iostream>
#include <string>
int main() {
	constexpr int WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows" << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH << " letter iosgram I'm think of" << std::endl << std::endl;
	std::cout << "Enter you guess ";
	std::string Guess = "";
	std::cin >> Guess;
	std::cout << std::endl;
	std::cout << "Your guess was: " << Guess;
	std::cout << std::endl;
	return 0;
}