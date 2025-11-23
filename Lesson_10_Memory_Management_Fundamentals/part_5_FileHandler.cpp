#include <fstream>
class FileHandler {
private:
    std::fstream file;
public:
    FileHandler(const std::string& filename) {
        file.open(filename, std::ios::in | std::ios::out | std::ios::app);
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close(); // Ensuring the file is closed properly
        }
    }
};
