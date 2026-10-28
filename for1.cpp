#include <iostream>
using namespace std;
int main()
{float vi,vf,a,s;
cout<<"enter a initail velocity";
cin>>vi;
cout<<"enter a final velocity";
cin>>vf;
cout<<"enter a acceleration";
cin>>a;
s=(vf*vf-vi*vi)/(2*a);
cout<<s;
return 0;
}
