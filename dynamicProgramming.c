#include<bits/stdc++.h>

using namespace std;

int Rod(int n, int a, int b, int c) {
    
 int OPT[n];
 for(int i=1;i<=n;i++)
 OPT[i]=-1;

OPT[0]=0;

 for (int i=1; i<=n; i++) {
 if (i>=a && OPT[i-a]!=-1)
 OPT[i]=max(OPT[i-a]+1,OPT[i]);
 if (i>=b && OPT[i-b]!=-1)
 OPT[i]=max(OPT[i-b]+1,OPT[i]);
 if (i>=c && OPT[i-c]!=-1)
 OPT[i]=max(OPT[i-c]+1,OPT[i]);
 }
 return OPT[n];
}

int main() {
 int n,a,b,c;
 cin>>n>>a>>b>>c;
 if (n<1 || n>4000 || a<1 || a>4000 || b<1 || b>4000 || c<1 || c>4000)
 cout<<("the length of the rod pieces are out of range");
 cout<< Rod(n, a, b, c)<< endl;
 return 0;
}
