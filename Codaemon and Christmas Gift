#include <bits/stdc++.h>
using namespace std;
long long t,n,a[300000],i,k,s,j;
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(i=1;i<=n;i++) 
        cin>>a[i];
        sort(a+1,a+n+1);
        s=0;j=2;
        for(i=1;i<=n;i++){
            while(a[j]-a[i]<=2 && j<=n)
            {
         j++;
    }
            j--;
            if (j-i>=2) s+=(j-i)*(j-i-1)/2;
        }
        cout<<s<<"\n";
    }
}
