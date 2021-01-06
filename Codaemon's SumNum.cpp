#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        
    string s;
    cin>>s;
        long long i,sum=0;
        for(i=0;i<s.size();i++)
            sum+=s[i]-48;
        cout<<sum<<endl;
    }
            
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
