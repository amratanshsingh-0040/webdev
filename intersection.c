#include <stdio.h>

// Function to check if an element is already present in the array
int isPresent(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1;
        }
    }
    return 0;
}

// Function to find the intersection of two arrays
void findIntersection(int A[], int sizeA, int B[], int sizeB, int intersectionArr[], int *intersectionSize) {
    int index = 0;

    for (int i = 0; i < sizeA; i++) {
        if (isPresent(B, sizeB, A[i]) && !isPresent(intersectionArr, index, A[i])) {
            intersectionArr[index++] = A[i];
        }
    }

    *intersectionSize = index;
}

int main() {
    int sizeA, sizeB;

    printf("Enter the size of array A: ");
    scanf("%d", &sizeA);
    int A[sizeA];
    printf("Enter the elements of array A:\n");
    for (int i = 0; i < sizeA; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the size of array B: ");
    scanf("%d", &sizeB);
    int B[sizeB];
    printf("Enter the elements of array B:\n");
    for (int i = 0; i < sizeB; i++) {
        scanf("%d", &B[i]);
    }

    int intersectionArr[sizeA < sizeB ? sizeA : sizeB];
    int intersectionSize = 0;

    findIntersection(A, sizeA, B, sizeB, intersectionArr, &intersectionSize);

    printf("Intersection of A and B: ");
    for (int i = 0; i < intersectionSize; i++) {
        printf("%d ", intersectionArr[i]);
    }

    return 0;
}
