//ques 57
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Two-pointer approach for in-place reversal
    int start = 0;
    int end = n - 1;
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

// ques 58
#include <stdio.h>

// Helper function to reverse a specific portion of the array
void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, i, k;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number of positions to rotate left: ");
    scanf("%d", &k);
    
    // Handle cases where k is greater than the array size
    k = k % n; 
    
    // Optimization: Block Reversal Algorithm
    reverse(arr, 0, k - 1); // Reverse first k elements
    reverse(arr, k, n - 1); // Reverse remaining elements
    reverse(arr, 0, n - 1); // Reverse entire array
    
    printf("Left rotated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}


// ques 59
#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, i, k;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &k);
    
    k = k % n;
    
    // Right rotation block reversal logic
    reverse(arr, n - k, n - 1); // Reverse last k elements
    reverse(arr, 0, n - k - 1); // Reverse first n-k elements
    reverse(arr, 0, n - 1);     // Reverse entire array
    
    printf("Right rotated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

// ques 60
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count = 0; // Index pointer for non-zero elements
    
    // Traverse the array. If element is non-zero, swap it with the count index.
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;
        }
    }
    
    printf("Array after moving zeroes to the end:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
