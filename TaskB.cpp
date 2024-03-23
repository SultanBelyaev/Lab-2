#include <iostream>
#include <vector>
#include <string>
#include <map>

int main() {
    std::map<int, std::vector<std::string>> students;

    int classNum;
    std::string surname;

    while (std::cin >> classNum >> surname) {
        students[classNum].push_back(surname);
    }

    for (int i = 9; i <= 11; ++i) {
        for (const std::string& s : students[i]) {
            std::cout << i << " " << s << "\n";
        }
    }

    return 0;
}