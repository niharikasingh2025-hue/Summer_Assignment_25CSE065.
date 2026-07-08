//ques 53 
#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    // Linear search logic
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break; // Stop searching once found
        }
    }
    
    if(!found) {
        printf("Element not found in the array.\n");
    }
    
    return 0;
}

 
//ques 54
#include <stdio.h>

int main() {
    int n, i, target, count = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to find its frequency: ");
    scanf("%d", &target);
    
    // Count occurrences
    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            count++;
        }
    }
    
    printf("Frequency of %d = %d\n", target, count);
    
    return 0;
}


//ques 55
#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    if(n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 0;
    }
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    
    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } 
        // If arr[i] is between largest and second_largest
        else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    
    if(second_largest == INT_MIN) {
        printf("There is no second largest distinct element.\n");
    } else {
        printf("Second largest element = %d\n", second_largest);
    }
    
    return 0;
}


//ques 56
#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    int visited[n]; // Array to keep track of printed duplicates
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize tracking array to 0
    }
    
    printf("\nDuplicate elements in the array: \n");
    int duplicate_found = 0;
    
    for(i = 0; i < n; i++) {
        if(visited[i] == 1) {
            continue; // Skip if already identified as a duplicate
        }
        
        int is_duplicate = 0;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                is_duplicate = 1;
                visited[j] = 1; // Mark the repeating element as visited
            }
        }
        
        if(is_duplicate) {
            printf("%d ", arr[i]);
            duplicate_found = 1;
        }
    }
    
    if(!duplicate_found) {
        printf("No duplicate elements found.");
    }
    printf("\n");
    
    return 0;
}


 