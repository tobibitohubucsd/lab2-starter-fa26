#include <stdio.h>

int contains(int item, int arr[], int size) {
   // Write your solution here!
   // Return 1 if "item" exists in "arr" (which has length "size"), otherwise 0
<<<<<<< HEAD
	for(int i = 0; i < size; i++) {
		if(arr[i] == item) {
=======
	for (int i = 0; i < size; i++){
		if (arr[i] == item){
>>>>>>> 792593e5a15ca1c170cce72b14a8961eda9b19ef
			return 1;
		}
	}
	return 0;
}

int main() {
   int arr[] = {2, 9, 2, 0, 2, 5};
<<<<<<< HEAD

   // Call "contains" with an item of your choice, "arr", and the length of "arr".
   // Replace "0" in the following line with your function call
   printf("Result: %d\n", contains(2, arr, 6));
   printf("Result: %d\n", contains(0, arr, 6));
   printf("Result: %d\n", contains(5, arr, 6));
   printf("Result: %d\n", contains(3, arr, 6));

=======
   int size = sizeof(arr) / sizeof(arr[0]);
   // Call "contains" with an item of your choice, "arr", and the length of "arr".
   // Replace "0" in the following line with your function call
   printf("Result: %d\n", contains(0, arr, size));
   printf("Result: %d\n", contains(1, arr, size));
   printf("Result: %d\n", contains(2, arr, size));
   printf("Result: %d\n", contains(5, arr, size));
>>>>>>> 792593e5a15ca1c170cce72b14a8961eda9b19ef
}

