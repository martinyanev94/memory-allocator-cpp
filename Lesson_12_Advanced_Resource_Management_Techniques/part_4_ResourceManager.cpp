#include <fstream>
#include <string>
#include <vector>

class ResourceManager {
private:
    std::vector<std::ifstream> files;

public:
    void addFile(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            files.push_back(std::move(file)); // Move the ifstream
        }
    }

    void readAll() {
        for (auto& file : files) {
            std::string line;
            while (std::getline(file, line)) {
                std::cout << line << '\n';
            }
        }
    }
};
