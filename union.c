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

// Function to find the union of two arrays
void findUnion(int A[], int sizeA, int B[], int sizeB, int unionArr[], int *unionSize) {
    int index = 0;

    // Insert all elements of A into unionArr
    for (int i = 0; i < sizeA; i++) {
        if (!isPresent(unionArr, index, A[i])) {
            unionArr[index++] = A[i];
        }
    }

    // Insert elements of B into unionArr if they are not already present
    for (int j = 0; j < sizeB; j++) {
        if (!isPresent(unionArr, index, B[j])) {
            unionArr[index++] = B[j];
        }
    }

    *unionSize = index;
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

    int unionArr[sizeA + sizeB];
    int unionSize = 0;

    findUnion(A, sizeA, B, sizeB, unionArr, &unionSize);

    printf("Union of A and B: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}
