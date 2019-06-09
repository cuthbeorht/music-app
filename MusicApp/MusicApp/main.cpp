#include <string>
#include <iostream>
#include <filesystem>
#include "lib/file/File.h"

int main() {

	std::cout << "Starting application...";

	File f = File("C:/Users/David/src/music-app/MusicApp/MusicApp/test", "test_file.txt");

	std::cout << "File size: " << f.getSize();

	std::cin.get();
}