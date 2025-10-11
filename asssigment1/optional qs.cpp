#include <iostream>
//iostream library, necessary for input/output operations.
using namespace std;
int main()

{
int a,b;
//declared two variables to store numbers.
a=4;
b=5;
//stored values in variables.
a=a+b;
//we first added the numbers and stored it into first variable.
b=a-b;
// subtracted the second number from the the first variable and stored it into second variable.

a=a-b;
//subtraced the value stored in second variable from the first variable and stored it into first variable.

cout << "value of first variable:"<<a<<endl;
cout<<"value of second variable:"<<b;
  //for printing the swapped values of variable.


}
