#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number to print its multiplication table: ";
    std::cin >> number;

    for (int i = 1; i <= 10; ++i) {
       std::cout<<number<<" * "<<i<<" = "<<(number*i)<<std::endl;
    }

    return 0;
}

