#include <iostream>

using namespace std;

int main()
{
    int t,i;
    cin>>t;
        int n[100],c=0,s=0;
        for(i=1;i<=t;i++)
        {
            cin>>n[i];
            if(n[i]%2==0)
                c++;
                else
                    s++;
        }
        if(c>s)
        cout<<"READY FOR BATTLE"<<endl;
        else
            cout<<"NOT READY"<<endl;




    return 0;
}
