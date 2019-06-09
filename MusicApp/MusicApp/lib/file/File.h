#include <string>

#ifndef FILE_H
#define FILE_H

class File {
    private:
        std::string filePath;
        std::string fileName;
        int fileSize;

        void meta();
    
    public:
        File();
        File(const std::string path, const std::string name);
        File(const std::string path, const std::string name, const int size) {
            this->filePath=path;
            this->fileName=name;
            this->fileSize=size;
        }

        void setSize(const int size);
        void setName(const std::string name);
        void setPath(const std::string path);

        std::string getName();
        std::string getPath();
        int getSize();
};

#endif