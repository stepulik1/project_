#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void readLinesFromFile(const std::string& filename, std::vector<std::string>& lines) {
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Ошибка: Не удалось открыть файл " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line); 
    }

    file.close();
    std::cout << "Чтение из файла завершено (" << lines.size() << " строк)" << std::endl;
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