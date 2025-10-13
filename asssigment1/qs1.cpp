#include <iostream>
////iostream library, necessary for input/output operations.
#include <iomanip>
// iomanip library, used to controll the formatting of data.
using namespace std;
int main()
{
    float num1,num2;
    //declared two floating variables.
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    //storing values in variables by taking input from the user. 
    float sum,diff,prod,quot;
    //declared variables to store the sum,difference,product and quotient.
    sum=num1+num2;
    diff=num1-num2;
    prod=num1*num2;
    quot=num1/num2;
    //we stored the sum,difference,product and quotient of the input numbers in variables.

    cout<<fixed<<setprecision(3);
    // we format the output to exactly 3 decimal places.
    cout<<"sum:"<<sum<<"\n";
    cout<<"difference:"<<diff<<"\n";
    cout<<"product:"<<prod<<"\n";
    cout<<"quotient:"<<quot<<"\n";
    //we printed the outputs with exactly three numbers after the decimal .
    int num1_int= (int)num1,num2_int=(int)num2, sum2,prod2,diff2,quot2;
     
    // we have declared integer type values to store the answers as integer.
    
    sum2=num1_int+num2_int;
    diff2=num1_int-num2_int;
    prod2=num1_int*num2_int;
    quot2=num1_int/num2_int;
    //we stored the values of floating variables into integer data type variables so the decimal will be automatically removed and the output will be a integers.
    cout<<"\n sum without decimals:"<<sum2<<"\n";
    cout<<"difference without decimals:"<<diff2<<"\n";
    cout<<"product without decimals:"<<prod2<<"\n";
    cout<<"quotient without decimals:"<<quot2<<"\n";
    // we printed the sum,product ,difference and quotient with integer data type

    return 0;





}

