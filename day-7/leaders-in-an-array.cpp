#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> leaders(int a[], int n){

        // std::vector<int>res;
        // int flag = 0 ;
        
        // for(int i=0; i<n; i++)
        // {
        //     flag = 0;
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(a[i]<a[j])
        //         {
        //             flag = 1;
        //             break;
        //         }
                
        //     }
            
        //     if(flag==0)
        //         res.push_back(a[i]);
        // }
        
        // //res.push_back(a[n-1]);

        // return res;

        std::vector<int>res;
        int fp = n-1;//4
        int sp = n-2;//3

        while(fp>=0 || sp>=0)
        {
            if(a[sp]>a[fp])
            {
                res.push_back(a[fp]);
                fp = sp;//0
                sp--;//-1
                
            }
            else if(a[sp]<a[fp])
            {
                sp--;
            }
        }

        return res;
        
    }
};


int main()
{   
    Solution s;
    
    int n = 0;
    std::vector<int>res;
    std::cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        {
            std::cin>>a[i];
        }

    res = s.leaders(a,n);
    std::reverse(res.begin(), res.end());
    for( int el: res)
    {
        std::cout<<el<<" ";
    }

    return 0;
}