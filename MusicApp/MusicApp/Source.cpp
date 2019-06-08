#include <string>
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

int main() {

	std::cout << "Starting application...";

	std::string path = "c:\\";
	for (const auto & entry : fs::recursive_directory_iterator(path)) {
		std::cout << entry.path() << std::endl;
	}

	std::cin.get();
}