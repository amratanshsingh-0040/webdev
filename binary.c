#include <stdio.h>

int main() {

printf ("Name: Amratansh Singh\nRoll no.: 2300320130040");

printf ("\n------ -");

int arr[100]={0};

int n = sizeof(arr) / sizeof(arr[0]), x;

printf ("\nEnter the size of array: ");

scanf ("%d", &n);

printf ("Enter the elements: ");

for (int i=0; i<n; i++) {

scanf ("%d", &arr[i]);

}

printf ("Enter element to search: ");

scanf ("%d", &x);

int search(int arr[]) {

// Going through array sequentially-

for (int i=0; i<n; i++) {

if (arr[i] == x)

return i;

}

return -1;

}

int result = search(arr);

if (result == -1) {

printf ("Element not found");

}

else {

printf ("Element found at index: %d", result);

}

return 0;

}