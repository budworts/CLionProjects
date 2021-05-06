#import <iostream>

void A1();
void A2();
void A3();
void A4();
void A5();
void A6();

int main() {

    std::cout << "version: " << __cplusplus << std::endl;

    A1();
    A2();
    A3();
    A4();
//    A5();
    A6();
    return 0;
}

void A1() {

    int A[2][3] = {{2,4,6},{3,5,7}};

    for ( auto i:A) {
        for ( auto j = 0; j < 3; j++ ) {
            std::cout << i[j];
        }

    }

    std::cout << std::endl;
}

void A2() {

    int A[2][3] = {2,4,6,3,5,7};

    for ( auto i = 0; i < 2; i++ ) {
        for ( auto j = 0; j < 3; j++ ) {
            std::cout << A[i][j];
        }
    }

    std::cout << std::endl;
}

void A3() {

    int A[2][3] = {2,4,6,7};

    for ( auto i = 0; i < 2; i++ ) {
        for ( auto j = 0; j < 3; j++ ) {
            std::cout << A[i][j];
        }
    }

    std::cout << std::endl;
}

void A4() {

    int A[2][3] = {2,4,6,3,5,7};

    for ( auto &i:A ) {
        for ( auto &j:i ) {
            std::cout << j;
        }
    }

    std::cout << std::endl;
}

void A5() {

    int A[2][3];

    for ( auto &i:A ) {
        for ( auto &j:i ) {
            std::cout << "Enter : ";
            std::cin >> j;
        }
    }

    for ( auto &i:A ) {
        for ( auto &j:i ) {
            std::cout << j;
        }
    }

    std::cout << std::endl;
}

void A6() {

    int A[2][3] = {2,4,6,3,5,7};
    int B[2][3] = {1,2,3,4,5,6};
    int C[2][3];



    for ( auto i = 0; i < 2; i++ ) {
        for ( auto j = 0; j < 3; j++ ) {
            C[i][j] = A[i][j] + B[i][j];
            std::cout << C[i][j] << " ";
        }
    }

    std::cout << std::endl;
}
