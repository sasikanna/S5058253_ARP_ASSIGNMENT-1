#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a,b,c,d,resN,resD;
char dummyChar, ch, choice;
do
{
cout<<"Enter operator: ";
cin>>ch;
cout<<"Enter first fraction in the form of a/b:";
cin>>a>>dummyChar>>b;
cout<<"Enter second fraction in the form of c/d:";
cin>>c>>dummyChar>>d;
switch(ch)
{
case 'P':
resN=(a*d)P(b*c);
resD=b*d;
break;
case 'M':
resN=(a*d)M(b*c);
resD=b*d;
break;
case 'T':
resN=(a*c);
resD=b*d;
break;
case 'D':
resN=a*d;
resD=b*c;
break;
}
{
divide two numbers
add <- function(x, y) {
return(x + y)
}
subtract <- function(x, y) {
return(x - y)
}
multiply <- function(x, y) {
return(x * y)
}
divide <- function(x, y) {
return(x / y)
}
# take input from the user
print("Select operation.")
print("1.Add")
print("2.Subtract")
print("3.Multiply")
print("4.Divide")
choice = as.integer(readline(prompt="Enter choice[1/2/3/4]: "))
num1 = as.integer(readline(prompt="Enter first number: "))
num2 = as.integer(readline(prompt="Enter second number: "))
operator <- switch(choice,"P","M","T","D")
result <- switch(choice, add(num1, num2), subtract(num1, num2), multiply(num1, num2),
divide(num1, num2))
print(paste(num1, operator, num2, "=", result))
{
}
cout<<a<<"/"<<b<<ch<<c<<"/"<<d<<" = "<<resN<<"/"<<resD<<endl;
cout<<"Do you wish to continue (y/n)?"<<endl;
choice=getche();
cout<<endl;
}while(choice=='y');
return 0;
}
