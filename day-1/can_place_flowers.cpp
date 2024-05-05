//
// Created by golith3r00t on 04-05-2024.
//

#include "can_place_flowers.h"


bool can_place_flowers::canPlaceFlowers(std::vector<int> &flowerbed, int n) {
    int i = 0;
    int fp = 0;
    int nc = n;

    if(flowerbed.size()>1 && n>=1) {
        while (i<flowerbed.size()) {

            if(flowerbed.at(i)==1) {
                i += 2;
            }
            else {

                if(i==0) {
                    if(flowerbed.at(0)==0 && flowerbed.at(1)!=1 ) {
                        fp++;
                        flowerbed.at(0) = 1;
                        n--;
                    }
                }

                else if(i>0 && i<flowerbed.size()-1) {

                    if(flowerbed.at(i-1)!=1 && flowerbed.at(i+1)!=1 && flowerbed.at(i)==0) {
                        flowerbed.at(i) = 1;
                        n--;
                        fp++;
                    }
                }

                else if(i==flowerbed.size()-1) {
                    if(flowerbed.at(i-1)!=1 && i==flowerbed.size()-1 ) {
                        n--;
                        fp++;
                    }
                }

                if(flowerbed.at(i)==0)
                    i++;
                else
                    i+=2;

            }
        }

        if(fp>=nc)  {
            return true;
        }
        else
            return false;
    }
    else {
        if(flowerbed.at(0)==0 || n==0)
            return true;
        else
            return false;
    }
}

int main() {
    int vsize = 0;
    int n = 0;
    std::cin>>vsize>>n;
    std::vector<int>bed(vsize);
    for(int i=0;i<vsize;i++) {
        std::cin>>bed[i];
    }

    std::cout<<can_place_flowers::canPlaceFlowers(bed,n);
    return 0;
}
