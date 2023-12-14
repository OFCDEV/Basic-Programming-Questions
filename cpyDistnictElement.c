#include <stdio.h>

// A function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// A function to sort an array using bubble sort
void sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// A function to copy the distinct elements from one array to another
void copy_distinct(int src[], int dst[], int n, int *m) {
    int i, j;
    j = 0; // index of the destination array
    for (i = 0; i < n; i++) {
        // if the current element is different from the previous one
        if (i == 0 || src[i] != src[i - 1]) {
            // copy it to the destination array
            dst[j] = src[i];
            // increment the index of the destination array
            j++;
        }
    }
    // update the size of the destination array
    *m = j;
}

// A function to print an array
void print_array(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int src[] = {4, 5, 6, 7, 6, 5, 4}; // source array
    int n = sizeof(src) / sizeof(src[0]); // size of the source array
    int dst[n]; // destination array
    int m; // size of the destination array

    // sort the source array
    sort(src, n);

    // copy the distinct elements from the source array to the destination array
    copy_distinct(src, dst, n, &m);

    // print the source array
    printf("Source array: ");
    print_array(src, n);

    // print the destination array
    printf("Destination array: ");
    print_array(dst, m);

    return 0;
}
