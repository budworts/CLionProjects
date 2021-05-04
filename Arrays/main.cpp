#include <iostream>

void Sum();
void Max();
void Min();
void Count();
void Search();
void Square();
void LowTriangle();
void UpperTriangle();
void RevLowTriangle();
void RevUpperTriangle();

int main() {

    std::cout << "c++ version: " << __cplusplus << std::endl;
    std::cout << "func: " << __func__ << std::endl;

    int ai1[10] = {5,10,15,20,25};  // Array 5,10,15,20,25,0,0,0,0,0

    for (auto i=0;i<10;i++) {
        std::cout << ai1[i] << " ";
    }

    std::cout << std::endl;

    int ai2[] = {5,10,15,20,25};

    for (auto i=0;i<5;i++) {
        std::cout << ai2[i] << " ";
    }

    std::cout << std::endl;

    int ai3[50];  // Junk

    for (auto i=0;i<50;i++) {
        std::cout << ai3[i] << " ";
    }

    std::cout << std::endl;

    int ai4[50] = {0};

    for (auto i=0;i<50;i++) {
        std::cout << ai4[i] << " ";
    }

    std::cout << std::endl;

    // ***********************
    int ai5[] = {0,1,2,3,4,5,6};

    for (auto i:ai5) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    int ai6[10] = {3,4,5,6};

    for (auto i:ai6) {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    // ***********************

    char ac1[] = {'A', 66, 'C', 68};

    for (auto i:ac1) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    for (int i:ac1) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    for (auto &i:ai6) {
        std::cout << i << " ";
        i++; // Changes array ai6 values
    }

    std::cout << std::endl;

    for (auto i:ai6) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    Sum();
    Max();
    Min();
    Count();
    // Search();
    Square();
    LowTriangle();
    UpperTriangle();
    RevLowTriangle();
    RevUpperTriangle();
    return 0;
}

void Square() {

    using namespace std;
    int cnt = 0;

    for ( auto i = 0; i < 4; i ++ ) {
        for ( auto j = 0; j < 4; j ++ ) {
            cnt ++;
            cout << cnt << " ";
        }

        cout << endl;
    }
}

void LowTriangle() {

    using namespace std;
    cout << endl;

    for ( auto i = 0; i < 4; i ++ ) {
        for ( auto j = 0; j < 4; j ++ ) {
            if ( i >= j ) {
                cout << "*";
            }
        }

        cout << endl;
    }
}
void RevLowTriangle() {

    using namespace std;
    cout << endl;

    for ( auto i = 0; i < 4; i ++ ) {
        for ( auto j = 0; j < 4; j ++ ) {
            if ( (j + i ) >= 3 ) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }
}

void UpperTriangle() {
    using namespace std;
    cout << endl;

    for ( auto i = 0; i < 4; i ++ ) {
        for ( auto j = 0; j < 4; j ++ ) {
            if ( i > j ) {
                cout << " ";
            } else {
                cout << "*";
            }
        }

        cout << endl;
    }
}

void RevUpperTriangle() {
    using namespace std;
    cout << endl;

    for ( auto i = 0; i < 4; i ++ ) {
        for ( auto j = 0; j < 4; j ++ ) {
            if ( i <= j ) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }
}

void Sum()
{
    int A[]={2,4,11,8,10,15,13},n=7;
    int sum=0;

    //add all elements from Array A to sum
    for ( auto i:A ) {
        sum += i;
    }

    //print sum
    std::cout << sum << std::endl;
}

void Max()
{
    int A[]={4,6,27,15,31,22,30,29,8,16};
    int max=A[0];

    //write a loop to find max
    for ( auto i:A ) {
        if ( i > max ) {
            max = i;
        }
    }

    std::cout << max << std::endl;
}

void Min()
{
    int A[]={8,4,12,37,36,25,-2,10,15,25};
    int min=A[0];

    //write a loop to find minimum number
    for ( auto i:A ) {
        if ( i < min ) {
            min = i;
        }
    }

    std::cout << min << std::endl;
}

void Count()
{
    int A[]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
    int pcount=0;
    int ncount=0;

    // write a loop to count positive and negative numbers
    for ( auto n:A ) {
        if ( n > 0 ) {
            pcount ++;
        } else if ( n < 0 ) {
            ncount ++;
        }
    }

    std::cout << pcount << " " << ncount << std::endl;
}

void Search() {
    int A[12]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
    int key;

    std::cout << "Enter key: ";
    std::cin >> key;

    for ( int i = 0; i < 12; i++) {
        if ( key == A[i]) {
            std::cout << "Found at " << i << std::endl;
            return;
        }
    }

    std::cout << "Not found" << std::endl;
    return;
}
