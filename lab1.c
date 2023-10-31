//  #include <stdio.h>
// int main() {
// printf("Hello World!");
// return 0;
// }


// 1. Write a C program that accepts an employee's ID, total worked hours in a month and
// the amount received per hour. Print the ID and salary (with two decimal places) of the
// employee for a particular month.

// #include <stdio.h>
// int main(){
// int employee_id;
// float worked_hours, hourly_rate, salary;
// printf("enter employee's id:");
// scanf("%d",&employee_id);
// printf("enter total worked hours:");
// scanf("%f",&worked_hours);
// printf("enter amount recieved per hour:");
// scanf("%f",&hourly_rate);
// salary=worked_hours*hourly_rate;
// printf("employee ID: %d\n",employee_id );
// printf("salary: %.2f", salary);
// return 0;
// }

// 2. Write a C program that takes the height and width of a rectangle as an input from user
// and compute the perimeter and area of a rectangle.

// #include <stdio.h>
// int main(){
//     float height, width, perimeter;
//     printf("enter height:");
//     scanf("%f",&height);
//     printf("enter width:");
//     scanf("%f",&width);
//     perimeter=2*(height+width);
//     printf("perimeter of rectangle: %f ",perimeter);
// }

// 3. Write a C program to accept the height of a person in centimeters and categorize the
// person according to his height. (Height < 150cm – Dwarf, Height=150cm – Average,
// Height>=165cm – Tall).

// #include <stdio.h>
// int main(){
//     float height;
//     printf("enter height in centimeters:");
//     scanf("%f",&height);
//     if (height<150){
//         printf("height %f\n",height);
//         printf("dwarf");
//     }
//     else if (height==150){
//         printf("height %f\n",height);
//         printf("average");
//     }
//     else {
//         printf("height %f\n",height);
//         printf("tall");
//     }
// }

// 4. Write a program in C to convert a decimal number to a binary number using functions.

// #include <stdio.h>
// void decimaltobinary(int n){
//     if (n==0){
//         return;
//     }
//     else{
//         decimaltobinary(n/2);
//         printf("%d",n%2);
//     }
// }

// int main(){
// int decimal;
// printf("enter a decimal no:");
// scanf("%d",&decimal);
// printf("decimal no: %d\n",decimal);
// if (decimal==0){
//     printf("binary equivalent: 0\n");
// }
// else{
// printf("binary equivalent: ");
// decimaltobinary(decimal);
// }
// }

// 5. Write a function to calculate the nth Fibonacci number and call it recursively to print
// the Fibonacci series.

// #include <stdio.h>
// int fibonacci(int n){
//     if (n<=1){
//         return n;
//     }
//     else{
//         return fibonacci(n-1)+fibonacci(n-2);
//     }
// }

// void printfibonacciseries(int n){
//     for (int i=0;i<n;i++){
//         printf("%d\n",fibonacci(i));
//     }
// }

// int main(){
//     int n;
//     printf("enter value of n: ");
//     scanf("%d",&n);
//     printf("fibonacci series: \n",n);
//     printfibonacciseries(n);
//     printf("\n");
// }