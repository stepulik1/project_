#include <iostream>
#include <vector>
#include <string>
#include <fstream>

void readLinesFromFile(const std::string& filename, std::vector<std::string>& lines) {
}

void printLinesToScreen(const std::vector<std::string>& lines) {
    std::cout << "\nВывод данных на экран: " << std::endl;
    
    for (const auto& str : lines) {
        std::cout << str << std::endl;
    }
}

void writeLinesToFile(const std::string& filename, const std::vector<std::string>& lines) {
    std::ofstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Ошибка: Не удалось создать файл " << filename << std::endl;
        return;
    }

    for (const auto& str : lines) {
        file << str << std::endl;
    }

    file.close();
    std::cout << "\nДанные успешно записаны в файл " << filename << std::endl;
}

int main() {
    std::vector<std::string> myLines;
    readLinesFromFile("input.txt", myLines);
    printLinesToScreen(myLines);
    writeLinesToFile("output.txt", myLines);

    return 0;
}