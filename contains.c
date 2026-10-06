#include <stdio.h>

int contains(int item, int arr[], int size) {
   // Write your solution here!
   // Return 1 if "item" exists in "arr" (which has length "size"), otherwise 0
	if (size < 1) {
		return 0;
	}
	for (int i = 0; i < size; i++) {

		if (arr[i] == item) {
			return 1;
		}
	}
	return 0;
}

int main() {
   int arr[] = {2, 9, 2, 0, 2, 5};

   // Call "contains" with an item of your choice, "arr", and the length of "arr".
   // Replace "0" in the following line with your function call
   int res1 = contains(2, arr, 6);
   printf("Result: %d\n", res1);
   int res2 = contains(9, arr, 6);
   printf("Result: %d\n", res2);
   int res3 = contains(10, arr, 6);
   printf("Result: %d\n", res3);
}

