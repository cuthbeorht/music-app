// #define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "../lib/file/File.h"

TEST_CASE("Files", "[File]") {
    
    File f = File("C:/Users/David/src/music-app/MusicApp/MusicApp/test", "test_file.txt");
    
    REQUIRE(f.getSize() == 0);
}
