#include "File.h"
#include "FileConstants.h"
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

File::File() {

}

void File::meta() {
    std::string fullFileName = this->filePath + systemPathSeparator + this->fileName;

    try {
        this->fileSize = std::filesystem::file_size(fullFileName);
    } catch(fs::filesystem_error& ex) {
        std::cerr <<"Error: " <<ex.what();
    }
}

File::File(const std::string path, const std::string name) {
    this->fileName=name;
    this->filePath = path;

    this->meta();
}

void File::setName(const std::string name) {
    this->fileName = name;
}

void File::setPath(const std::string path) {
    this->filePath = path;
}

void File::setSize(const int size) {
    this->fileSize = size;
}

std::string File::getName() {
    return this->fileName;
}

std::string File::getPath() {
    return this->filePath;
}

int File::getSize() {
    return this->fileSize;
}