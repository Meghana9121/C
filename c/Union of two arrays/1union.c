#include <stdio.h>

int countarray(int a[], int n, int b[], int m) {
    int array[n + m];
    int arraySize = 0;

    // Create a hash table to track the presence of elements
    int index[100000] = {0};  // Assuming the maximum element value is less than 100000

    // Traverse array a[] and insert elements into array[] if they are not already present
    for (int i = 0; i < n; i++) {
        if (index[a[i]] == 0) {
            array[arraySize++] = a[i];
            index[a[i]] = 1;  // Mark the element as present
        }
    }

    // Traverse array b[] and insert elements into array[] if they are not already present
    for (int i = 0; i < m; i++) {
        if (index[b[i]] == 0) {
            array[arraySize++] = b[i];
            index[b[i]] = 1;  // Mark the element as present
        }
    }

    // Return the count of elements in the array
    return arraySize;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1,2,3};

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    int arrayCount = countarray(a, n, b, m);
    printf("Number of elements in the array: %d\n", arrayCount);

    return 0;
}

