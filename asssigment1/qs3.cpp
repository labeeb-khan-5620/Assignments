#include<iostream>
// iostream library, necessary for input/output opertations.
using namespace std;
int main()
{
    int num1,num2,num3;
    //declared three variables to store numbers.

    cout<< "Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    cout<<"Enter third number:";
    cin>>num3;
    //taking input from the user and storing it in to the variable.
    if(num1>num2 && num1>num3)
    cout << "The largest number is :"<<num1<<endl;
else if (num2>num1 && num2>num3)
cout<<"The largest number is :"<<num2<<endl;
else if(num3>num1 && num3>num2)
cout << "The largest number is :"<<num3<<endl;
else
cout<<"none of them is larger "<<endl;
// used condition to print the largest number among the inputs,but if two numbers are equal then none of them will be conidered as largest.

 if(num1<num2 && num1<num3)
    cout << "The smallest number is :"<<num1<<endl;
else if (num2<num1 && num2<num3)
cout<<"The smallest number is :"<<num2<<endl;
else if(num3<num1 && num3<num2)
cout << "The smallest number is :"<<num3<<endl;
else
cout<<"none of them is smaller. "<<endl;
//used condition to print the smallest number but if two numbers are equal then none of them will be conidered as smallest.

 if(num1==num2 && num1==num3)
 cout << "The numbers are equal."<<endl;
else
cout<<"the numbers are not equal."<<endl;
//condition which can check that weather all numbers are equal or not .

    


}