#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;
int main()
{
    int i=0,j=0, count = 0, k=3, anaCount = 0;
    string a = "gvdzvbswujtwzpvqbogzjsrfqcuuxmpczmprhmuamfuqchosbqdujaxvxpujruczfdqqzzuavomjqohpvqpaufsmcsbmruxmgbhcexuxqwhxhfttvjhyzdevfoxujd";
    string keyStr = "cujauhfsopxmcmjzumoaqzqvhrmfrbuppqusgvdqzbxc";
    map<char, int> cm;
    
    for(int i=0; i<keyStr.size(); i++)
    {
        if(cm.find(a[i]) == cm.end())
        {
            cm[a[i]] = 0;
        }
        cm[a[i]]++;
    }
    count = cm.size();
    i = 0;

    while(j<a.size())
    {
        cm[a[j]]--;
        if(cm.find(a[j])!=cm.end() && cm[a[j]] == 0)
            count--;

        if(j-i+1 == k)
        {
            if(count == 0)
            {
                anaCount++;
            }

            //slide window logic
            if(cm.find(a[i])!=cm.end())
            {
                if(cm[a[i]]>=0) 
                {
                    cm[a[i]]++;
                    count++;
                }
            }
            i++;
        }

        j++;
    }

    cout<<anaCount<<endl;

    return 0;
}