#include <iostream>
#include <fstream>

void example1();
void example2();
void example3();
void example4();
void challenge();

int main() {

    std::cout << "C++ version: " << __cplusplus << std::endl;

//    example1();
//    example2();
//    example3();
//    example4();
    challenge();
    return 0;
}

void challenge() {

    std::string infilename{"../romeoandjuliet.txt"};
    std::string outfilename{"../romeoandjuliet-ln.txt"};

    std::ifstream infile(infilename);

    if ( !infile) {
        std::cerr << "error opening file : " << infilename << std::endl;
        return;
    }

    std::ofstream outfile(outfilename);

    if ( !outfile) {
        std::cerr << "error opening file : " << outfilename << std::endl;
        return;
    }

    int lineNumber{0};
    std::string line{};

    while (std::getline(infile,line) ) {

        if ( line.empty()) {
            outfile << line << std::endl;
        } else {
            lineNumber++;
            outfile << std::setw(7) << std::left << lineNumber << line << std::endl;
        }
    }

    infile.close();
    outfile.close();

    std::cout << infilename << " copied ok...\n";
}

void example4() {
    std::string outfilename{"../testfile4.dat"};

    std::ofstream outfile(outfilename, std::ios::app);

    if ( !outfile) {
        std::cerr << "error opening file : " << outfilename << std::endl;
        return;
    }

    std::string line;
    std::cout << "Enter some text: ";
    std::getline(std::cin, line);
    outfile << line << std::endl;
    outfile.close();
}

void example3() {

    std::string infilename{"../testfile2.dat"};
    std::string outfilename{"../testfile3.dat"};

    std::ifstream infile(infilename);
    std::ofstream outfile(outfilename);

    if ( !infile) {
        std::cerr << "error opening file : " << infilename << std::endl;
        return;
    }

    if ( !outfile) {
        std::cerr << "error opening file : " << outfilename << std::endl;
        return;
    }

    char c;

    while ( infile.get(c)) {
        outfile.put(c);
    }

    infile.close();
    outfile.close();
}

void example2() {

    std::string infilename{"../testfile1.dat"};
    std::string outfilename{"../testfile2.dat"};

    std::ifstream infile(infilename);
    std::ofstream outfile(outfilename);

    if ( !infile) {
        std::cerr << "error opening file : " << infilename << std::endl;
        return;
    }

    if ( !outfile) {
        std::cerr << "error opening file : " << outfilename << std::endl;
        return;
    }

    std::string line{};

    while (std::getline(infile,line) ) {
        outfile << line << std::endl;
    }

    infile.close();
    outfile.close();

    std::cout << "file copied ok...\n";
}

void example1() {

    std::ofstream outfile;
    std::string fileName{"../testfile1.dat"};

    outfile.open(fileName);

    if ( !outfile.is_open()) {
        std::cerr << "error opening file : " << fileName << std::endl;
        return;
    }

    int num{100};
    double db{99.99};
    std::string str{"Dave"};

    outfile << num << db << str << std::endl;
    outfile << 20 << 2.762 << "Steve" << std::endl;
    outfile << 1000 << 0.00 << "Fred" << std::endl;

    outfile.close();
}