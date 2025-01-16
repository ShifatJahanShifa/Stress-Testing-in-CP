#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;cin>>n;
    bool ok=true;
    int pete=2;
    int billy=n-2;
    if(pete>0 and (pete&1)==0 and billy>0 and  (billy&1)==0) ok=false;
    ok ? cout<<"NO\n":cout<<"YES\n";    
}