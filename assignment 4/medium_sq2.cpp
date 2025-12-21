#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> a(n),b(n-1);
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n-1;i++)cin>>b[i];
int sum1=0,sum2=0;
for(int i=0;i<n;i++)sum1+=a[i];
for(int i=0;i<n-1;i++)sum2+=b[i];
cout<<sum1-sum2<<endl;
return 0;
}
