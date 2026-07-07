//ques 49 Write a program to Input and display array. 
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n]; // Declare the array of size n
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The elements of the array are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

//ques 50 Write a program to Find sum and average of array
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Accumulate sum during input
    }

    // Explicitly cast sum to float for precise decimal division
    average = (float)sum / n; 

    printf("Sum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", average);

    return 0;
}



//ques 51 Write a program to Find largest and smallest element. 
#include <stdio.h>

int main() {
    int n, i;
    
    // Accept the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Accept array elements from the user
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Assume the first element is both the largest and smallest
    int largest = arr[0];
    int smallest = arr[0];
    
    // Traverse the array to find actual largest and smallest elements
    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    // Print the results
    printf("\nLargest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
    
    return 0;
}



//ques 52 Write a program to Find largest and smallest element. 
#include <stdio.h>

int main() {
    int n, i;
    int even_count = 0;
    int odd_count = 0;
    
    // Accept the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Accept array elements from the user
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Loop through the array and check each element
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even_count++; // Increment even counter if divisible by 2
        } else {
            odd_count++;  // Increment odd counter if not divisible by 2
        }
    }
    
    // Print the total counts
    printf("\nTotal Even elements = %d\n", even_count);
    printf("Total Odd elements = %d\n", odd_count);
    
    return 0;
}

