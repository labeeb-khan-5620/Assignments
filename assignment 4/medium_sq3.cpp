#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++)cin>>v[i];
bool dup=false;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(v[i]==v[j]){dup=true;break;}
}
if(dup)break;
}
if(dup)cout<<"The vector contains duplicates."<<endl;
else cout<<"No duplicates found."<<endl;
return 0;
}
