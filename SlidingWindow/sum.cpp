#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    int a[]={-1,2,-3,5,6,7,0};
    int k=2, size=7, i=0, j=0, largestSum = 0, curSum=a[0];
    
    while(j<size)
    {
        if(j-i+1 < k)
        {
            curSum+=a[++j];
        }
        else if(j-i+1 == k)
        {
            if(largestSum<curSum)
            {
                largestSum = curSum;
            }
            curSum = curSum-a[i++]+a[++j];
        }
    }

    cout<<largestSum<<endl;

    return 0;
}