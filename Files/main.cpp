#include <iostream>
#include <fstream>
#include <iomanip>

void ruler();
void printHeader();
void printFooter(double average);
void printStudent(std::string &student, int score);
int processResults(const std::string &studentAnswers, const std::string &correctAnswers);
void challenge2();
void challenge3();
bool find_substring(const std::string &word_to_find, const std::string &target);

int main() {

    std::cout << "C++ version: " << __cplusplus << std::endl;

    std::ifstream inFile;
    inFile.open("../test1.txt");

    if (!inFile) {
        std::cerr << "Error opening file...\n";
        return -1;
    }

    std::string line{};
    int num{};
    double total{};

    inFile >> line >> num >> total;
    std::cout << line << std::endl;
    std::cout << num << std::endl;
    std::cout << total << std::endl;

    inFile.close();

    inFile.open("../test2.txt");

    if (!inFile) {
        std::cerr << "Error opening test1.yxy...\n";
        return -1;
    }

    std::cout << std::endl;

    while (!inFile.eof()) {
        inFile >> line >> num >> total;
        std::cout << std::setw(10) << line
                  << std::setw(10) << num
                  << std::setw(10) << total << std::endl;
    }

    inFile.close();

    inFile.open("../test2.txt");

    if (!inFile) {
        std::cerr << "Error opening test2.txt...\n";
        return -1;
    }

    std::cout << std::endl;

    while (inFile >> line >> num >> total) {
        std::cout << std::setw(10) << line
                  << std::setw(10) << num
                  << std::setw(10) << total << std::endl;
    }

    inFile.close();

    inFile.open("../Poem.txt");

    if (!inFile) {
        std::cerr << "Error opening Poem.txt ...\n";
        return -1;
    }

    std::cout << std::endl;

    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }

    inFile.close();

    inFile.open("../Poem.txt");

    if (!inFile) {
        std::cerr << "Error opening Poem.txt ...\n";
        return -1;
    }

    char c{};

    std::cout << std::endl;

    while (inFile.get(c)) {
        std::cout << c;
    }

    std::cout << std::endl;
    inFile.close();

    challenge2();
    challenge3();

    return 0;
}

void challenge3() {

    std::ifstream inFile;
    int numberOfWordsRead{0};
    int numberOfWordsFound{0};
    int numberOfWordsFound2{0};
    std::string findWord{};

    inFile.open("../romeoandjuliet.txt");

    if (!inFile) {
        std::cerr << "Error opening romeoandjuliet.txt ...\n";
        return;
    }

    std::cout << "\nEnter the substring to search for: ";
    std::cin >> findWord;

    std::string word{};

    while (inFile >> word ) {
        numberOfWordsRead++;

        if (find_substring(findWord, word)) {
            numberOfWordsFound++;
        }

        int nPos = word.find(findWord, 0);

        while (nPos != std::string::npos)
        {
            numberOfWordsFound2++;
            std::cout << word << " ";
            nPos = word.find(findWord, nPos + findWord.size());
        }
    }

    inFile.close();

    std::cout << std::endl << std::endl;
    std::cout << "number of words read    :" << numberOfWordsRead << std::endl;
    std::cout << "number of words found 1 :" << numberOfWordsFound << std::endl;
    std::cout << "number of words found 2 :" << numberOfWordsFound2 << std::endl;
}

void challenge2() {

    std::ifstream inFile;

    inFile.open("../responses.txt");

    if (!inFile) {
        std::cerr << "Error opening responses.txt ...\n";
        return;
    }

    std::string correctAnswers;
    std::string studentName;
    std::string studentAnswers;
    int totalStudents{0};
    int totalScore{0};

    printHeader();

    inFile >> correctAnswers;

    while (inFile >> studentName >> studentAnswers) {
        totalStudents++;
        int score = processResults(studentAnswers, correctAnswers );
        totalScore += score;
        printStudent(studentName,score);
    }

    inFile.close();

    ruler();

    double averageScore{0.0};

    if (totalStudents) {
        averageScore = static_cast<double>(totalScore) / totalStudents;
    }

    printFooter(averageScore);
}

bool find_substring(const std::string &word_to_find, const std::string &target) {
    std::size_t found = target.find(word_to_find);
    if (found == std::string::npos)
        return false;
    else
        return true;
}

void ruler() {
    std::cout << std::left << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
}

void printHeader() {
    std::cout << "\n\n";
    std::cout << std::left << std::setw(15) << "Student" << std::setw(5) << "Score" << std::endl;
    ruler();
}

void printStudent(std::string &student, int score) {
    std::cout << std::left << std::setw(15) << student
              << std::setw(5) << std::right << score
              << std::endl;
}

void printFooter(double average) {
    std::cout << std::left << std::setw(15) << "Average Score"
              << std::setw(5) << std::right << average;
}

int processResults(const std::string &studentAnswers, const std::string &correctAnswers) {
    int score{0};

    for (auto c{0}; c < correctAnswers.size(); c++) {
        if (studentAnswers[c] == correctAnswers[c]) {
            score++;
        }
    }

    return score;
}
