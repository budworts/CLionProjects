#include <iostream>

using namespace std;

class DivideByZeroException {

};

class NegativeValueException {

};

double calculateMPG( int miles, int gallons );

int main() {

    cout << "C++ version: " << __cplusplus << endl;

    int miles{};
    int gallons{};

    cout << "Enter miles: ";
    cin >> miles;
    cout << "Enter gallons: ";
    cin >> gallons;

    try {
        cout << calculateMPG(miles, gallons) << " miles per gallon\n";
    }
    catch (const DivideByZeroException &ex) {
        cerr << "error: divide by zero error...\n";
    }
    catch ( const NegativeValueException &ex ) {
        cerr << "error: negative value error...\n";
    }
    catch (...) {
        cerr << "error: unknown error...\n";
    }

    return 0;
}

double calculateMPG( int miles, int gallons ) {

    if ( gallons == 0 ) {
        throw DivideByZeroException();
    }

    if ( gallons < 0 || miles < 0 ) {
        throw NegativeValueException();
    }

    return static_cast<double>(miles) /  gallons;
}