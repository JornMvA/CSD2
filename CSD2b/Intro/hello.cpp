#include <iostream>  //dit haalt de iostream library binnen
#include <string> //dit haalt de string library binnen

int main() { //int main is zodat er iets is ofzo
    std::cout << "Hello world" << std::endl;
    std::cout << "What is your name?" << std::endl; 
    std::string yourName;
    std::cin >> yourName;
    std::cout << "Hi " << yourName << std::endl;
    return 0;
}