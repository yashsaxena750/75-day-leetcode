#include <bits/stdc++.h>
using namespace std;

int getInsertPosition(vector<int> &arr, int key) {

    int low = 0;
	int indx = -1;
    int high = arr.size()-1;//4

    while (low <= high) 
    {
        int mid = (high + low) / 2;//1

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
		{
			indx = mid;
            low = mid + 1;
			
		}

        else
            high = mid - 1;
    }

  return indx+1;
    
    

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

        int ind = getInsertPosition(arr,key);
        std::cout<<ind;

    }


    return 0;
}