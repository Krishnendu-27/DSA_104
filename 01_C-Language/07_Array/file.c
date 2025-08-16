#include <stdio.h>
// because C arrays are 0-indexed.that why 
void arrayTraversalReverse(int numbers[], int size) {
    // Code here
    for(int i = size-1; i >= 0 ; i--){
        printf("%d " , numbers[i]);
    }
}

int main() {
  // array is a collection of same type of data 
  // its helps to store n number of data of same type
  // we use array when we know their no limit of data
  /*
  Importance of Arrays in Programming
Why do we need arrays when we already have primitive data types like int, long, double, and even non-primitive data types like structures?

The need for arrays arises in situations where you have a collection of data elements that share the same type and you don’t want to manage them using individual variables.

Example:

You are building a social network where a user's number of friends can vary. Creating individual variables like friend1, friend2, friend3, etc., for each user would be inefficient. The same issue arises in a grading system where the number of students isn’t fixed, and using variables like mark1, mark2, mark3 would quickly become unmanageable. In these situatioins we use arrays.

Even if you create these variables, modifying them, adding new ones, or deleting them would be tedious. You would have to manually update the code whenever the number of students or friends changes, making the program harder to maintain and less flexible.

Use Cases for Arrays
Arrays provide a solution to these challenges. They allow you to store a collection of items whether it’s the marks of students, prices of items on an e-commerce site, or the friends of a user without needing to create individual variables for each item. You declare an array that can store as many items as necessary and the array size can be adjusted based on the program's requirements. With arrays, you can easily store and access a collection of student marks, prices, friends, or any other data that comes in a group. Whether you’re dealing with primitive data types like integers and floats, or user-defined types like structures.
  */
 // metoed of array store
 // 1. give size and vale
 int arr[5] = {1,2,3,4,5};
 //2.only give value size define by it self
 int arr2[]= {1,2,3,4,5} ;
//  3. only give the space
    int arr3[5];
    // internal its store 0 each 5 location 
// 4. using data type value as array but its need to be constant
const int a = 5;
// int arr4[a] = {1, 2, 4, 5};

/*
Array Size is Less to Number of Element in an Array
The size of an array can be greater than the number of elements in an array but this does not happen with smaller sizes and if the number of elements is greater, the compiler gives you an error.

Example:

int arr[2] = {10, 20, 30};

This line causes a compiler error because it is not valid according to C standards.
*/
    int arr5[9] = {10, 20, 20, 20 , 90 , 7 , 5 , 55 , 10}; // its size will be 6
    // that how we can find the size of the array
   int length = sizeof(arr5) / sizeof(arr5[0]);
//    printf("%d", length);
// printf("%d\n", arr5[-1]);
    int count = 0;
    for(int i = 0; i<length; i++){
      int new_num =1;
      for (int j = 0; j < i; j++)
      {
        if(arr5[i] == arr5[j]){
            new_num = 0;
            break;
        }
        
      }
      if(new_num) count++;
    }
    printf("%d\n", count);
    int arr7[] = {-12, 8, -7, 6, 12, -9, 14};
    int lenghth2 = sizeof(arr7) / sizeof(arr7[0]);
    printf("%d\n", lenghth2);

    int sum = 0; 
    int temp_size = lenghth2;
    for(int i = 0; i < lenghth2; i++){
        if(arr7[i] < 0) {
            temp_size--;
        }
        else {
            sum += arr7[i];
        }
    }
    int avg = sum / temp_size;
    printf("%d\n" , avg);
  return 0;
}