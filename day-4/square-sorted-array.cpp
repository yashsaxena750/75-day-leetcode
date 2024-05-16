#include <bits/stdc++.h>
using namespace std;

vector<int> getSquareSortedArray(vector<int> &arr) {
    

    for(int i=0; i<arr.size(); i++)
    {
        arr[i] = arr[i] * arr[i];
    }

    std::sort(arr.begin(),arr.end());
    return arr;


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

    getSquareSortedArray(arr);


    return 0;
}