//
// Created by golith3r00t on 04-05-2024.
//

#include "reverse_vowels_of_a_string.h"

std::string reverse_vowels_of_a_string::reverseVowels(std::string s) {

    std::vector<int>loc;
    for(int i=0;i<s.length();i++) {
        if( s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'||
            s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U') {
            loc.push_back(i);
        }
    }

    for(int i=0;i<loc.size()/2;i++) {
        std::swap(s[loc.at(i)],s[  loc.at(abs(i-loc.size())-1) ]);
    }

    return s;
    }


int main() {
    std::string str ;
    std::cin>>str;
    std::cout<<reverse_vowels_of_a_string::reverseVowels(str);

    return 0;
}
