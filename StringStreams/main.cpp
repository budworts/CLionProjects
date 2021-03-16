#include <iostream>
#include <sstream>
#include <limits>

void example1();
void validateInput();

int main() {
    example1();
    validateInput();
    return 0;
}

void example1() {
    int num{};
    double total{};
    std::string name{};
    std::string info{"Dave   999   10.5" };

    std::istringstream iss{info};
    iss >> name >> num >> total;

    std::cout << iss.str() << std::endl;
    std::cout << "[" << name << "][" << num << "][" << total << "]\n";

    std::ostringstream oss{};
    oss << name << " " << num << " " << total;
    std::cout << oss.str() << std::endl;
}

void validateInput() {
    int value{};
    std::string input{};

    bool done{false};

    do {
        std::cout << "Enter a number : ";
        std::cin >> input;

        std::stringstream ss{input};

        if ( ss >> value ) {
            std::cout << "interger entered...\n";
            done = true;
        } else {
            std::cout << "interger was not entered...\n";

            // clear input stream
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    } while (!done);
}