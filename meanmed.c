#include <stdio.h>

// Function to calculate the mean
float calculateMean(int numbers[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return (float)sum / size;
}

// Function to calculate the median
float calculateMedian(int numbers[], int size) {
    // Sorting the array
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    // For five numbers, the median is the middle element in the sorted array
    return (float)numbers[size / 2];
}

int main() {
    int numbers[5];

    printf("Enter five numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    float mean = calculateMean(numbers, 5);
    float median = calculateMedian(numbers, 5);

    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);

    return 0;
}
