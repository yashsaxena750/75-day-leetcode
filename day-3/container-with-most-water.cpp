#include "iostream"
#include "vector"

using namespace std;

class Solution {
public:
    static int maxArea(vector<int>& height) {

        int lh = 0;
        int rh = height.size()-1;
        int water_cont = 0;

        while(lh<rh)
        {
            water_cont = max(water_cont,(rh-lh)*std::min(height.at(lh),height.at(rh)));
            if(height.at(lh)<height.at(rh))
            {
                lh++;
            }
            else
            {
                rh--;
            }

            
        }

        return water_cont;
        
    }
};


int main()
{
    int n = 0;
    std::cin>>n;
    std::vector<int>tank(n);

    for(int i=0; i<n; i++)
    {
        std::cin>>tank[i];
    }

    std::cout<<Solution::maxArea(tank);


    return 0;
}