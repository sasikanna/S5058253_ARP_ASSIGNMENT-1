# S5058253_ARP_ASSIGNMENT-1

**AIM**
Design and code a strange arithmetic integer this calculator able to exdcute the 4 basic operations, as well as a compbined arithmetic expression.
The structure of the calculator may seem bombastic, nevertheless is a simplified skeleton of real complex calculators.

**INSTRUCTION**
To accecs our code of design and arthematic integer caluculator
1.https://html5-editor.net/
we have to paste our code which is present in design.html.
when we excute the code we can see the design of the calculator.

**CODE**
Here, we will create a simple calculator program in C which will perform basic arithmetic operations like addition, subtraction, multiplication, division, and remainder depending on the input from the user.
Users will have the choice to choose the operation. If the user chooses the wrong operation then he/she will get an error message.
Prerequisites for writing a simple calculator program in C:- Switch case in C programming, Programs on switch case in C

calculator program in c using functions
Simple Calculator program in C
 include<stdio.h>
 int main()
 {
     char ch;
     int num1,num2;

     printf("Choose the operator(P,T,M,D,): ");
     scanf("%c",&ch);

     printf("Enter two numbers: ");
     scanf("%d %d",&num1,&num2);

     switch(ch)
     {
       case 'P':
         printf("%d P %d =\t%d\n",num1,num2,num1+num2); 
         break;
       case 'T':
         printf("%d T %d =\t%d\n",num1,num2,num1-num2);
         break;
       case 'M':
         printf("%d M %d =\t%d\n",num1,num2,num1*num2);
         break;
       case 'D':
         printf("%d D %d =\t%d\n",num1,num2,num1/num2);
         break;
       default:
         printf("Error! Invalid Operator.");
     }

     return 0;
 }

The switch-case statement is used to write a simple calculator program in C language. The remainder operator % is normally used with data values. To print the remainder operator %% is used in the first printf() function.

The variable ch store the operator, similarly the variables num1, and num2 stores the two numbers. The switch has condition “ch” so the entered operator is matched with which case label those case label statements are executed, and display result to the screen.

If the entered operator is not matched with the case labels then the default statement will be executed and it will display the message “Error! Invalid Operator.” to the screen.


**RESULTS**
This program takes an aritthmatic operator +,-,*,/ (P,M,T,D)and two operands from the user. 
Then it performs the calculations on the two operands depending upon the operator entered by the user.
O1 X Y  -->F executes a process that carries out the operation XO1Y (e.g., 3 * 7, written 3 T 7)) and returns the result and writes it in the shell window

O1 X Y TO O2 Z K -->F executes a process that carries out the operation O1 then executes a second process that carries out the operation O2 whose input is the result of the first operation O1, and returns the result and writes in the shell window

O1 X Y TO O2 Z K TO O3 H K... as the previous one, cascading the operations O1, O2, O3.....

Enter an operator (P,M,T,D,): T
Enter two operands:3T7=21
1.5 T 4.5 = 6.8
