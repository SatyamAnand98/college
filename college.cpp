#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct college
    {
        string name;
        int cse=0, ise=0,points=0;
    };

int main()
{
    int n,iseh,cseh;
    string nameh;
    cout<<"enter number of colleges: "<<endl;
    cin>>n;
    college s[n];
    college s2;
    for(int i=0;i<n;i++)
    {
        cin.ignore();
        cout<<"Enter college name: ";
        getline(cin,s[i].name);
        cout<<"Enter cse rank: ";
        cin>>s[i].cse;
        cout<<"enter ise rank: ";
        cin>>s[i].ise;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+i;j++)
        {
            if(s[i].cse<s[j].cse)
                s[i].points+=2;
            else
                s[j].points+=2;
            if(s[i].ise<s[j].ise)
                s[i].points+=1;
            else
                s[j].points+=1;
        }
    }
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<n-1;i++)
            {
                if(s[i].points>s[i+1].points)
                {
                    s2=s[i+1];
                    s[i+1]=s[i];
                    s[i]=s2;
                }
            }
        }
        cout<<"------------------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t  College List (Overall)"<<endl;
        cout<<"------------------------------------------------------------------------------"<<endl;
        cout<<"College name \t\t CSE \t\t ISE \t\t Points"<<endl;
        cout<<"------------------------------------------------------------------------------"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<s[i].name<<"\t\t\t"<<s[i].cse<<"\t\t"<<s[i].ise<<"\t\t"<<s[i].points<<endl;
        }
        cout<<"------------------------------------------------------------------------------"<<endl;

                for(int j=0;j<n;j++)
        {
            for(int i=0;i<n-1;i++)
            {
                if(s[i].cse>s[i+1].cse)
                {
                    s2=s[i+1];
                    s[i+1]=s[i];
                    s[i]=s2;
                }
            }
        }
        cout<<endl<<endl;
        cout<<"------------------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t  College List(CSE)"<<endl;
        cout<<"------------------------------------------------------------------------------"<<endl;
        cout<<"College name \t\t CSE \t\t ISE \t\t Points"<<endl;
        cout<<"------------------------------------------------------------------------------"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<s[i].name<<"\t\t\t"<<s[i].cse<<"\t\t"<<s[i].ise<<"\t\t"<<s[i].points<<endl;
        }
        cout<<"------------------------------------------------------------------------------"<<endl;
        cout<<endl<<endl;

                for(int j=0;j<n;j++)
        {
            for(int i=0;i<n-1;i++)
            {
                if(s[i].ise>s[i+1].ise)
                {
                    s2=s[i+1];
                    s[i+1]=s[i];
                    s[i]=s2;
                }
            }
        }
        cout<<"------------------------------------------------------------------------------"<<endl;
        cout<<"\t\t\t\t  College List(ISE)"<<endl;
        cout<<"------------------------------------------------------------------------------"<<endl;
        cout<<"College name \t\t CSE \t\t ISE \t\t Points"<<endl;
        cout<<"------------------------------------------------------------------------------"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<s[i].name<<"\t\t\t"<<s[i].cse<<"\t\t"<<s[i].ise<<"\t\t"<<s[i].points<<endl;
        }
        cout<<"------------------------------------------------------------------------------"<<endl;
    return 0;
}
