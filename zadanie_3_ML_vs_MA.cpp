/* Konkurs STL - Zadanie 3
   Marisz Lisowski's (ML) vs Mateusz Adamski's (MA) solution
*/
#include <algorithm>
#include <cassert>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>

auto removeRedundantLFsAndSpacesML(const std::string& input) {
    std::string result(input);
    result.erase(std::unique(begin(result), end(result),
                             [](const auto& prev, const auto& curr) {
                                 return (prev == ' ' && curr == ' ') ||
                                        (prev == '\n' && curr == '\n');
                             }),
                 result.end());

    return result;
}

auto removeRedundantLFsAndSpacesMA(const std::string& input) {
    std::string result;
    std::unique_copy(input.begin(), input.end(), std::back_inserter(result),
                     [](char prev, char curr) {
                         return std::isspace(prev) && std::isspace(curr) ||                     // no braces
                                prev == '\n' && curr == '\n';                                   // redundant
                      // return (std::isspace(prev) && std::isspace(curr));                     // as same result
                     });

    return result;
}

int main() {
    /* input file content:
    std::string original_input("Ala ma kota a kot\n\nnie ma   \n\n\nali   "
                               "\n\n\n!!!\n\n\nI co     teraz   ?? \n\nHmmm??\n\n\n\n\n?");
    std::string original_output("Ala ma kota a kot\nnie ma \nali \n!!!\nI co teraz ?? \nHmmm??\n?");
    std::string MA_output("Ala ma kota a kot\nnie ma ali !!!\nI co teraz ?? Hmmm??\n?"); */

    std::string original_input("Ala ma kota a kot \n\n nie ma \nali\n\n\n\n !!! \n\n ");        // MA original input
    std::string original_output("Ala ma kota a kot \n nie ma \nali\n !!! \n ");                 // MA original output
    std::string MA_output("Ala ma kota a kot nie ma ali\n!!! ");
   
    auto my_result = removeRedundantLFsAndSpacesML(original_input);
    std::cout << my_result << std::endl;
    assert(my_result == original_output);
    
    auto MA_result = removeRedundantLFsAndSpacesMA(original_input);
    std::cout << MA_result << std::endl;
    assert(MA_result == MA_output);                                                             // passes here but
    assert(MA_result == original_output);                                                       // fails on original

    return 0;
}
