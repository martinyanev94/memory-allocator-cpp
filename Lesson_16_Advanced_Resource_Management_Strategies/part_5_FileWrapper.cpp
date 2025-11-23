#include <fstream>

class FileWrapper {
private:
    std::fstream fileStream;

public:
    FileWrapper(const std::string& fileName) {
        fileStream.open(fileName, std::ios::in | std::ios::out);
    }

    ~FileWrapper() {
        if (fileStream.is_open()) {
            fileStream.close();
        }
    }
};
