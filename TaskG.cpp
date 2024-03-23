#include <iostream>
#include <set>
#include <string>

int main() {
    std::set<std::string> dataSet;

    std::string operation, word;

    while (std::cin >> operation) {
        if (operation == "#") {
            break;
        }

        std::cin >> word;

        if (operation == "+") {
            dataSet.insert(word);
        }
        else if (operation == "-") {
            dataSet.erase(word);
        }
        else if (operation == "?") {
            if (dataSet.find(word) != dataSet.end()) {
                std::cout << "YES" << std::endl;
            }
            else {
                std::cout << "NO" << std::endl;
            }
        }
    }

    return 0;
}