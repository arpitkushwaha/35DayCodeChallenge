#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;
int main()
{
    int j=0,i=0,k=3,size=0;
    int a[] =  {1,2,1,3,1};
    map<int, int> hash;
    size = sizeof(a)/sizeof(a[0]);

    while(j<size)
    {
        hash[a[j]]++;
        if(hash[a[j]]>1)
            {
                cout<<"true"<<endl;
                return 0;
            }
        if(j-i+1 == k)
        {
            //slide window logic
            if(hash[a[i]]>0)
                hash[a[i]]--;
            i++;
        }
        j++;
    }

    cout<<"false"<<endl;
    return 0;
}