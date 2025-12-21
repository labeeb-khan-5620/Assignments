#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter size: ";
cin>>n;
int mat[10][10];
cout<<"Enter elements:"<<endl;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
cin>>mat[i][j];
}
}

cout<<"Snake pattern: ";
for(int i=0;i<n;i++){
if(i%2==0){
for(int j=0;j<n;j++)
cout<<mat[i][j]<<" ";
}else{
for(int j=n-1;j>=0;j--)
cout<<mat[i][j]<<" ";
}
}
cout<<endl;
return 0;
}
