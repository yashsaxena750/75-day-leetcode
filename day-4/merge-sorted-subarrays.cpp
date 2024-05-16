#include <bits/stdc++.h>
using namespace std;


void merge(vector<int> &arr, int endIndex) {

    std::vector<int>C(arr.size());
    int i = 0;
    int idx = 0;
    int j = endIndex + 1;

    while(i<=endIndex || j<arr.size())
    {
        if(i>endIndex)
		{
			C[idx] = arr[j];
			idx++;//
			j++;//
		}

        else if(j>=arr.size())
		{
			C[idx] = arr[i];
			idx++;
			i++;
		}

        else if(arr[j]<arr[i])
        {
            C[idx]=arr[j];//0
            j++;//7
            idx++;//1
        }
        else if(arr[j]>arr[i]){
            C[idx]=arr[i];//1
            i++;//1
            idx++;//2
        }
        else if(arr[i]==arr[j])
		{
			C[idx] = arr[i];
			idx++;
			C[idx] = arr[j];
			idx++;
			i++;
			j++;
		}

        
    }

    for(int i=0; i<arr.size();i++)
    {
        arr[i] = C[i];
    }

    
    
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

    int eid = 0;
    std::cin>>eid;

    merge(arr,eid);


    return 0;
}