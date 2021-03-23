#include <iostream>

int main() {

    std::cout << "c++ version: " << __cplusplus << std::endl;

    int arr[5];

    for (auto i=0;i<5;i++) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}
