#include <bits/stdc++.h>
using namespace std;

int main() {
	

    int t = 0;
    std::cin>>t;
    while(t--)
    {
        int n = 0;
        std::cin>>n;
        std::vector<int>arr(n);
        int fp = 0;
        int sp = 1;

        for(int i=0; i<n; i++)
        {
            std::cin>>arr[i];
        }


        while(fp<arr.size()-1)
        {

            if(arr[fp]==arr[sp])
            {
                arr.erase(arr.begin()+sp);
            }
            else
            {
                fp++;
                sp++;
            }
        }
        
        std::cout<<arr.size()<<"\n";
        for(int el:arr)
        {
            std::cout<<el<<" ";
        }
        std::cout<<"\n";

    }

    return 0;

}
