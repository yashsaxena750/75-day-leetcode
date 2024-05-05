//
// Created by golith3r00t on 04-05-2024.
//

#include "kids_with_the_greatest_number_of_candies.h"


std::vector<bool> kids_with_the_greatest_number_of_candies::kidsWithCandies(std::vector<int> &candies, int extraCandies) {
    auto maxElementIterator = std::max_element(candies.begin(), candies.end());
    int current_max = *maxElementIterator;
    std::vector<bool> result;
    for (auto value : candies) {
        if(value<INT_MAX && extraCandies<INT_MAX)
        {
            // deepcode ignore IntegerOverflow: check is in place using INT_MAX
            if(value+extraCandies>=current_max)
                result.push_back(true);
            else 
             
                result.push_back(false);
        }
    }

    return result;

}

int main() {
    int n = 0;
    int extra_candies = 0 ;
    std::cin>>n>>extra_candies;
    std::vector<int> candies(n);

    for(int i=0;i<n;i++) {
        std::cin>>candies[i];
    }
    std::vector<bool> result = kids_with_the_greatest_number_of_candies::kidsWithCandies(candies,extra_candies);
    for (bool value : result) {
        std::cout << (value ? "true" : "false") << " ";
    }

    return 0;

}
