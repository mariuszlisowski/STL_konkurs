
#include <fstream>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>

std::size_t countWords(const std::string& text){
    std::istringstream ss(text);
    return  std::distance(std::istream_iterator<std::string>(ss),
                          std::istream_iterator<std::string>());
}

std::size_t countLines(const std::string& text) {
    std::istringstream ss(text);
    return std::count(std::istreambuf_iterator<char>(ss),
                      std::istreambuf_iterator<char>(), '\n');
}

int main(int argc, char **argv) {

    /*if (argc < 2) {
        std::cerr << "Usage: ZADANIE_4 <infile>\n";
        return EXIT_FAILURE;
    }*/
    std::ifstream t("../Sumfing2.txt");
    std::string text((std::istreambuf_iterator<char>(t)),
                    std::istreambuf_iterator<char>());
    std::cout <<countWords(text) << std::endl;
    std::cout <<countLines(text) << std::endl;
    return 0;
}