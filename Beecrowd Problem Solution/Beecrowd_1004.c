HOME URI/BEE PROBLEM SOLUTION URI / BEE CROWD 1071 - SUM OF CONSECUTIVE ODD NUMBERS I SOLUTION IN C,C++,PYTHON
URI / BEE CROWD 1071 - Sum of Consecutive Odd Numbers I Solution in C,C++,Python

URI / BEE CROWD 1071 - Sum of Consecutive Odd Numbers I Solution in C,C++,Python | URI Online Judge Solution 1071 - Sum of Consecutive Odd Numbers I
Read two integer values X and Y. Print the sum of all odd values between them.

Input
The input file contain two integer values.

Output
The program must print an integer number. This number is the sum off all odd values between both input values that must fit in an integer number.

Sample Input	Sample Output
6
-5

5

15
12

13

12
12

0

URI / BEE CROWD 1071 - Sum of Consecutive Odd Numbers I Solution in C,C++,Python | URI Online Judge Solution 1071 - Sum of Consecutive Odd Numbers I
                                        Demonstration:
Any integer that cannot be divided exactly by 2 is an odd number.
Here we apply a range-based while loop which will run between two numbers and checking the condition for Sum of Consecutive Odd Numbers I are applied and printing the total sum of odd numbers.
N.B: Don't copy paste the code as same. Just try to understand it and try yourself.
  URI Problem 1071 Solution in C :
  URI Online Judge 1071 Solve  in C :
#include <stdio.h>

int main()
{
 int x, y, sum = 0, i;
 int min, max;

 scanf("%d%d", &x,&y);

 if(x < y){
  min = x;
  max = y;
 }else{
  max = x;
  min = y;
 }

 for(i = (min + 1); i < max; ++i)
 {
  if(i % 2 != 0){
   sum += i;
  }
 }

 printf("%d\n", sum);

 return 0;
}
