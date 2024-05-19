#include <bits/stdc++.h>
using namespace std;

int kDiffPairs(vector<int> &A, int k) {
	// add your logic here
    for(int i)
}


int main()
{
    
    int t = 0;
    std::cin>>t;

    while(t--)
    {
        int n = 0;
        int key = 0;
        std::cin>>n>>key;
        std::vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            std::cin>>arr[i];
        }

        int ind = kDiffPairs(arr,key);
        std::cout<<ind;

    }


    return 0;
}