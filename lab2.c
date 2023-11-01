// 1. Write a C program to display the first n odd natural numbers and their sum using for, while and
// do-while loop.

// for loop
// #include <stdio.h>
// int main()
// {
//     int n,sum=0;
    
//     printf("enter n: ");
//     scanf("%d", &n);
//     for (int a = 1; a <= n; a++)
//     {
//         if (a % 2 != 0)
//         {
//             sum+=a;
//             printf("%d \n", a);
//         }
//     }
//     printf("sum: ");
//     printf("%d",sum);
// }

// while loop
// #include <stdio.h>
// int main()
// {
//     int n, i, sum=0;
//     printf("ENTER N:");
//     scanf("%d", &n);
//     i = 1;
//     while (i < n+1)
//     {
//         sum+=i;
//         printf("%d\n", i);
//         i += 2;
        
//     }
//     printf("sum: ");
//     printf("%d",sum);
// }

// do while loop
// #include <stdio.h>
// int main()
// {
//     int n, i = 1,sum=0;
//     printf("ENTER N:");
//     scanf("%d", &n);
//     do
//     {
//         sum+=i;
//         printf("%d\n", i);
//         i += 2;
//     } while (i <= n);
//     printf("sum: ");
//     printf("%d",sum);
// }

// 2. Write a C program to make the following pattern as a pyramid with an asterisk.
// *
// * *
// * * *
// * * * *

// #include <stdio.h>
// int main() {
//     int n;
//     printf("enter any num:");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++) {
//             for (int j=1;j<=n-i;j++) {
//                     printf(" ");

//             }
//             for (int k=1;k<=i;k++) {
//                 printf("* ");

//             }
//             printf("\n");
//     }
//     return 0;
// }

// 3. Write a C program to compare two strings without using string library functions.

// #include <stdio.h>

// int main() {
//     char str1[100], str2[100];
//     int isEqual = 1; // Assume the strings are equal by default
//     int i = 0;

//     printf("Enter the first string: ");
//     scanf("%s", str1);

//     printf("Enter the second string: ");
//     scanf("%s", str2);

//     while (str1[i] != '\0' || str2[i] != '\0') {
//         if (str1[i] != str2[i]) {
//             isEqual = 0; // The strings are not equal
//             break;
//         }
//         i++;
//     }

//     if (isEqual) {
//         printf("The strings are equal.\n");
//     } else {
//         printf("The strings are not equal.\n");
//     }

//     return 0;
// }

// 4. Write a C program to read a sentence and replace lowercase characters with uppercase and vice
// versa.

// #include <stdio.h>
// int main(){
//     char str[100];
//     printf("enter a string: ");
//     scanf("%[^\n]s",&str);
//     for (int i=0;str[i]!=0;i++){
//         if (str[i]>='a' && str[i]<='z'){
//             str[i]=str[i]-32;
//         }
//         else if(str[i]>='A'&&str[i]<='Z'){
//             str[i]=str[i]+32;
//         }
//     }
//     printf("modified sentence: %s",str);
// }

// 5. Write a C program to print all unique elements in an array.

// #include <stdio.h>

// int main() {
//     int arr[] = {1, 2, 3, 3, 4, 5, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Unique elements: ");
//     for (int i = 0; i < n; i++) {
//         int isUnique = 1;

//         for (int j = 0; j < n; j++) {
//             if (i != j && arr[i] == arr[j]) {
//                 isUnique = 0;
//                 break;
//             }
//         }

//         if (isUnique) {
//             printf("%d ", arr[i]);
//         }
//     }

//     printf("\n");

//     return 0;
// }

// 6. Write a C program to add two distances in inch-feet system using structures.

// #include <stdio.h>

// // Define a structure to represent distances
// struct Distance {
//     int feet;
//     int inches;
// };

// int main() {
//     struct Distance distance1, distance2, totalDistance;

//     // Input the first distance
//     printf("Enter the first distance (feet inches): ");
//     scanf("%d %d", &distance1.feet, &distance1.inches);

//     // Input the second distance
//     printf("Enter the second distance (feet inches): ");
//     scanf("%d %d", &distance2.feet, &distance2.inches);

//     // Add the inches
//     totalDistance.inches = distance1.inches + distance2.inches;

//     // Carry over extra inches to the feet
//     totalDistance.feet = distance1.feet + distance2.feet + (totalDistance.inches / 12);
//     totalDistance.inches %= 12; // Ensure inches are less than 12

//     // Output the total distance
//     printf("Total distance: %d feet %d inches\n", totalDistance.feet, totalDistance.inches);

//     return 0;
// }

