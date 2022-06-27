#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{

    int a[]={-1,2,-3,5,6,7,0};
    int k=3, size=7, i=0, j=0;
    queue<int> q; vector<int> ans;
    while(j<size)
    {
        if(j-i+1 < k)
        {
            cout<<"j :"<<j<<endl;
            if(a[j]<0)
            {
                q.push(a[j]);
            }
            j++;
        }
        else if(j-i+1 == k)
        {
            cout<<"j :"<<j<<endl;
            if(a[j]<0)
                q.push(a[j]);

           if(q.size()!=0)
           {
            ans.push_back(q.front());
            if(q.front() == a[j-k+1])
                q.pop();
           }
           else
           {
            ans.push_back(0);
           }
           i++; j++;
        }
    }

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<", ";
    }
    cout<<endl;
    return 0;
}