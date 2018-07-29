#include <iostream>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <string>
#include <sstream>

using namespace std;
struct college
    {
        string name;
        int cse=0, ise=0;
    };
int main()
{
    int i=0,cs=0,it=0,j=0;
    ifstream coll;
    coll.open("C:/Users/silveruserDell/Desktop/College.txt");
    string nm,str,nm2;
    college s[100];
    college s2;
    while (getline(coll, nm))
    {
        int l=nm.length();
        for(i=0;i<l;i++)
        {
            if (isdigit(nm[i]))
            {
                str=nm.substr(0,i);
                s[j].name=str;
                nm2=nm.substr(i,l);
                stringstream num(nm2);
                while(num>>cs>>it)
                {
                    s[j].cse=cs;
                    s[j].ise=it;
                }
                break;
            }
        }
        j++;
    }

    int n=j;
    ofstream colle;
    colle.open("C:/Users/silveruserDell/Desktop/outputdirectory.txt");

     for(int j=0;j<n;j++)
        {
            for(int k=0;k<n-1;k++)
            {
                if(s[k].cse>s[k+1].cse)
                {
                    s2=s[k+1];
                    s[k+1]=s[k];
                    s[k]=s2;
                }
            }
        }
        colle<<"----------------------------------------------------------------------------------------------------------"<<endl;
        colle<<"\t\t\t\t\t\t  College List(CSE)"<<endl;
        colle<<"----------------------------------------------------------------------------------------------------------"<<endl;
        colle<<"College name \t\t\t\t\t\t\t CSE \t\t\t\t ISE"<<endl;
        colle<<"----------------------------------------------------------------------------------------------------------"<<endl;
        for(int k=0;k<n;k++)
        {
            colle<<s[k].name<<"\t"<<s[k].cse<<"\t\t\t\t"<<s[k].ise<<endl<<endl;
        }
        colle<<"----------------------------------------------------------------------------------------------------------"<<endl<<endl<<endl;
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
        colle<<"----------------------------------------------------------------------------------------------------------"<<endl;
        colle<<"\t\t\t\t\t\t  College List(ISE)"<<endl;
        colle<<"----------------------------------------------------------------------------------------------------------"<<endl;
        colle<<"College name \t\t\t\t\t\t\t CSE \t\t\t\t ISE"<<endl;
        colle<<"----------------------------------------------------------------------------------------------------------"<<endl;
        for(int i=0;i<n;i++)
        {
            colle<<s[i].name<<"\t"<<s[i].cse<<"\t\t\t\t"<<s[i].ise<<endl<<endl;
        }
        colle<<"----------------------------------------------------------------------------------------------------------"<<endl;
    return 0;
}
