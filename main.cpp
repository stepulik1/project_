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
    readLinesFromFile("C:\\Users\\home\\Desktop\\func2_3\\input.txt", myLines);
    printLinesToScreen(myLines);
    writeLinesToFile("C:\\Users\\home\\Desktop\\func2_3\\output.txt", myLines);

    return 0;
}