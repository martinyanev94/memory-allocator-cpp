#include <iostream>
#include <fstream>
#include <stdexcept>

class FileHandler {
public:
    FileHandler(const std::string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Could not open file: " + filename);
        }
        std::cout << "File " << filename << " opened." << std::endl;
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            std::cout << "File closed." << std::endl;
        }
    }

    void write(const std::string& data) {
        if (!file.is_open()) {
            throw std::runtime_error("File not open for writing.");
        }
        file << data;
    }

private:
    std::fstream file;
};

int main() {
    try {
        FileHandler myFile("example.txt");
        myFile.write("Hello, world!");
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
