//
// Created by golith3r00t on 04-05-2024.
//

#include "greatest_common_divisor_of_strings.h"

std::string greatest_common_divisor_of_strings::gcdOfStrings(std::string str1, std::string str2) {

    if (str1 + str2 != str2 + str1) return "";
    int n = std::__detail::__gcd(str1.size(), str2.size());
    return str1.substr(0, n);


}

int main() {
    std::string word1;
    std::string word2;
    std::cin>>word1>>word2;
    std::cout<<greatest_common_divisor_of_strings::gcdOfStrings(word1,word2);

}
