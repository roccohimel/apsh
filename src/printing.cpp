#include <iostream>
#include <string>
#include "printing.h"

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN "\033[1;36m"
#define CRESET "\033[0m"

int printr(std::string TXT) {
	std::cout << RED << TXT << "\n" << CRESET;
	return 0;
}

int printg(std::string TXT) {
        std::cout << GREEN << TXT << "\n" << CRESET;
        return 0;
}

int printy(std::string TXT) {
        std::cout << YELLOW << TXT << "\n" << CRESET;
        return 0;
}

int printb(std::string TXT) {
        std::cout << BLUE << TXT << "\n" << CRESET;
        return 0;
}

int printm(std::string TXT) {
        std::cout << MAGENTA << TXT << "\n" << CRESET;
        return 0;
}

int printc(std::string TXT) {
        std::cout << CYAN << TXT << "\n" << CRESET;
        return 0;
}

int print(std::string TXT) {
        std::cout << TXT << "\n" << CRESET;
        return 0;
}

