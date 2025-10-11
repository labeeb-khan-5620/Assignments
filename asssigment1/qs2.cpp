#include<iostream>
//iostream library, necessary for input/output operations.
#include<iomanip>
// iomanip library, used to controll the formatting of data.
using namespace std;
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    // declared integer type variables for storing marks .
    cout<<"Enter marks of subject 1:";
    cin>>sub1;
    cout<<"Enter marks of subject 2:";
    cin>>sub2;
    cout<<"Enter marks of subject 3:";
    cin>>sub3;
    cout<<"Enter marks of subject 4:";
    cin>>sub4;
    cout<<"Enter marks of subject 5:";
    cin>>sub5;
    //taking input of marks from the user and storing it in the respected variables.
    if(sub1>100 || sub2>100||sub3>100||sub4>100||sub5>100)
    cout<<"invalid inputs";
    //this will check weather user enter right marks or not
    else
    {
  
    float percentage,sum;

    //declared two variables to store sum of the marks and to store the percentage of the student.
    sum=sub1+sub2+sub3+sub4+sub5;
    percentage=sum/5;
    // added all the marks and stored it into the sum then we stored the percentage in the respective variable by formula of calculating percentage.
    string grade;
    //this variable is declared  to store grade of the student;
    if(percentage>=90)
    grade="A+";
else if (percentage >=80)
grade="A";
else if (percentage>=70)
grade="B";
else if (percentage>=60)
grade="C";
else if (percentage>=50)
grade="D";
else
grade="F";
// stored the grade in the variable according to the percentage .


cout <<left<<setw(15)<<"\nsubject 1"<<left<<setw(15)<<"subject 2"<<left<<setw(15)<<"subject 3"<<left<<setw(15)<<"subject 4"<<left<<setw(15)<<"subject 5"<<endl;

cout <<left<<setw(15)<<sub1<<left<<setw(15)<<sub2<<left<<setw(15)<<sub3<<left<<setw(15)<<sub4<<left<<setw(15)<<sub5<<endl;
cout<<left<<setw(20)<<"Obtained marks"<<left<<setw(20)<<"Total marks"<<left<<setw(15)<<"Percentage"<<left<<setw(15)<<"Grade"<<endl;
cout<<left<<setw(20)<<sum<<left<<setw(20)<<"500"<<left<<setw(15)<<percentage<<left<<setw(15)<<grade<<endl;
//table is created which shows the marks of subjects and rest of the things which are necessary to show in result card.

  string status = (percentage >= 50) ? "Pass" : "Fail";
  cout <<status<<endl;

// ternary operator is used to print pass/fail.



}
}
