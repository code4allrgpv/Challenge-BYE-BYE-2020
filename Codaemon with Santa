#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n ,t,flg=-1;
    cin>>n;
    int a[n]={0};
    int b[n]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   cin>>t;
            if(t==1)
            {
                a[i]=1;
                if(a[j]!=1)
                     b[j]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0 && b[i]==n-1)
        {
            flg=i;
            break;
        }
    }
    cout<<flg;
    return 0;
}
