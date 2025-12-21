#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Employee{
string name;
int age;
vector<string> skills;
};
int main(){
int n;
cout<<"Enter number of employees: ";
cin>>n;
cin.ignore();
vector<Employee> emp;
for(int i=0;i<n;i++){
Employee e;
cout<<"\nEnter details for employee "<<i+1<<":\n";
cout<<"Name: ";
getline(cin,e.name);
cout<<"Age: ";
cin>>e.age;
cin.ignore();
int s;
cout<<"Number of skills: ";
cin>>s;
cin.ignore();
e.skills.resize(s);
for(int j=0;j<s;j++){
cout<<"Enter skill "<<j+1<<": ";
getline(cin,e.skills[j]);
}
emp.push_back(e);
}
cout<<"\nEmployee Details:\n";
for(int i=0;i<emp.size();i++){
cout<<"\nEmployee "<<i+1<<":\n";
cout<<"Name: "<<emp[i].name<<endl;
cout<<"Age: "<<emp[i].age<<endl;
cout<<"Skills: ";
for(int j=0;j<emp[i].skills.size();j++){
cout<<emp[i].skills[j];
if(j!=emp[i].skills.size()-1)cout<<", ";
}
cout<<endl;
}
return 0;
}
