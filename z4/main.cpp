
#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <map>
#include <sstream>
#include <string>
#include <vector>

std::string readFile(const std::string& file){
    std::ifstream fs(file);
    if(!fs){
        std::cerr << "File not found\n";
        return "";
    }
    std::string text((std::istreambuf_iterator<char>(fs)),
                     std::istreambuf_iterator<char>());
    fs.close();
    return text;
}
std::vector<std::string> text2vector(std::string text){
    std::istringstream ss(text);
    std::vector<std::string> text_vector;
    std::for_each(std::istream_iterator<std::string>(ss),
                  std::istream_iterator<std::string>(),
                  [&text_vector](const std::string& word){text_vector.push_back(word);});
    return text_vector;
}

std::size_t countCharacters(const std::string& text) {
    std::istringstream ss(text);
    return std::distance(std::istreambuf_iterator<char>(ss),
                            std::istreambuf_iterator<char>());
}

std::size_t countWords(const std::string& text) {
    std::istringstream ss(text);
    return std::distance(std::istream_iterator<std::string>(ss),
                         std::istream_iterator<std::string>());
}

std::size_t countLines(const std::string& text) {
    std::istringstream ss(text);
    return std::count(std::istreambuf_iterator<char>(ss),
                      std::istreambuf_iterator<char>(), 
                      '\n');
}

void findLongestWord(const std::vector<std::string>& text) {
    
    auto itLongestWord = std::max_element(text.begin(), 
                                text.end(), 
                                [](const std::string& s1, const std::string& s2) {
                                    return s1.size() < s2.size();
                                });
    std::cout << (*itLongestWord)
              << '\t' <<itLongestWord->size() << '\n';
}


int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: text_analyser <file_name>\n";
        return EXIT_FAILURE; 
    }

    std::string text = readFile(argv[1]);
    std::cout << "Number of characters:" << "\t" << countCharacters(text) << std::endl;
    std::cout << "Number of words:" << "\t" << countWords(text) << std::endl;
    std::cout << "Number of lines:" << "\t" << countLines(text) << std::endl;
    std::vector<std::string> text_vector = text2vector(text);
    findLongestWord(text_vector);
    
    return 0;
}