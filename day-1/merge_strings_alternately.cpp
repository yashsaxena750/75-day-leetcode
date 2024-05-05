//
// Created by golith3r00t on 04-05-2024.
//

#include "merge_strings_alternately.h"


std::string merge_strings_alternately::mergeAlternately(std::string word1, std::string word2) {

    int mlen = std::max(word1.length(),word2.length());
    int itr = 0;
    std::string mstring;
    while (itr<mlen) {

        if(itr<word1.length())
            mstring += word1[itr];
        if(itr<word2.length())
            mstring += word2[itr];
        itr++;
    }

    return mstring;
}


int main() {
    std::string word1;
    std::string word2;

    std::cin>>word1>>word2;
    std::cout<<merge_strings_alternately::mergeAlternately(word1,word2);

    return 0;
}