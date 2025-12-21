#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Student{
string name;
string id;
};
struct Course{
string courseName;
string courseCode;
vector<Student> students;
};
int main(){
int n;
cout<<"Enter number of courses: ";
cin>>n;
vector<Course> c;
for(int i=0;i<n;i++){
Course temp;
cout<<"\nCourse "<<i+1<<":\n";
cout<<"Course Name: ";
cin>>temp.courseName;
cout<<"Course Code: ";
cin>>temp.courseCode;
int m;
cout<<"Number of enrolled students: ";
cin>>m;
temp.students.resize(m);
for(int j=0;j<m;j++){
cout<<"Student "<<j+1<<" Name: ";
cin>>temp.students[j].name;
cout<<"Student "<<j+1<<" ID: ";
cin>>temp.students[j].id;
}
c.push_back(temp);
}
cout<<"\nCourse Enrollment Details:\n";
for(int i=0;i<c.size();i++){
cout<<"\nCourse "<<i+1<<":\n";
cout<<"Course Name: "<<c[i].courseName<<endl;
cout<<"Course Code: "<<c[i].courseCode<<endl;
cout<<"Enrolled Students:\n";
for(int j=0;j<c[i].students.size();j++){
cout<<"Name: "<<c[i].students[j].name<<", ID: "<<c[i].students[j].id<<endl;
}
}
return 0;
}
