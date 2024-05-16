#include <bits/stdc++.h>
using namespace std;


std::vector<int> getCumulativeSum(vector<int> &arr) {

    std::vector<int>result;
    int sum = 0;
    for(int el:arr)
    {
        sum += el;
        result.push_back(sum);
    }
	
    return result;
	
}


int main()
{
    int n = 0;
    std::cin>>n;
    std::vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        std::cin>>arr[i];
    }

    arr = getCumulativeSum(arr);

    for(int el: arr)
    {
        std::cout<<el<<" ";
    }


    return 0;
}