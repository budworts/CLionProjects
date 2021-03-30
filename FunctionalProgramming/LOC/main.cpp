#include <iostream>
#include <vector>
#include <fstream>

void displayCounts( const std::vector<int> &counts );
std::vector<int> impCountLinesInFile1( const std::vector<std::string> &files );
std::vector<int> impCountLinesInFile2( const std::vector<std::string> &files );
std::vector<int> impCountLinesInFile3( const std::vector<std::string> &files );
int countLines( const std::string &filename );

int main() {

    std::vector<std::string> files{ "../main.cpp", "../CMakeLists.txt" };
    std::vector<int> res;

    res = impCountLinesInFile1( files );
    displayCounts( res );
    res.clear();

    res = impCountLinesInFile2( files );
    displayCounts( res );
    res.clear();

    res = impCountLinesInFile3( files );
    displayCounts( res );
    res.clear();

    return 0;
}

void displayCounts( const std::vector<int> &counts ) {

    for (const auto &cnt: counts) {
        std::cout << "Count " << cnt << std::endl;
    }
}

// Imperative
std::vector<int> impCountLinesInFile1( const std::vector<std::string> &files ) {

    std::cout << __FUNCTION__ << std::endl;

    std::vector<int> res;
    char c{0};

    for ( const auto &file: files ) {

        int lineCnt{0};

        std::ifstream in( file );

        while ( in.get(c) ) {

            if ( c == '\n' ) {
                lineCnt ++;
            }
        }

        res.push_back(lineCnt);
    }

    return res;
}

int countLines( const std::string &filename ) {
    std::ifstream in( filename );
    return std::count( std::istreambuf_iterator<char>(in),
            std::istreambuf_iterator<char>(), '\n' );
}

std::vector<int> impCountLinesInFile2( const std::vector<std::string> &files ) {

    std::cout << __FUNCTION__ << std::endl;

    std::vector<int> res;

    for ( const auto &file: files ) {
        res.push_back( countLines( file ));
    }

    return res;
}

std::vector<int> impCountLinesInFile3( const std::vector<std::string> &files ) {

    std::cout << __FUNCTION__ << std::endl;

    std::vector<int> res( files.size() );

    std::transform( files.cbegin(), files.cend(), res.begin(), countLines );

    return res;
}



