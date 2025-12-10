#include <iostream>
#include <vector>
#include <string>

void readLinesFromFile(const std::string& filename, std::vector<std::string>& lines) {
}

void printLinesToScreen(const std::vector<std::string>& lines) {
}

void writeLinesToFile(const std::string& filename, const std::vector<std::string>& lines) {
}

int main() {
    std::vector<std::string> myLines;
    readLinesFromFile("input.txt", myLines);
    printLinesToScreen(myLines);
    writeLinesToFile("output.txt", myLines);

    return 0;
}