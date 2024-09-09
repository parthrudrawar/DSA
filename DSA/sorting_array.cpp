#include<stdio.h>
#include<stdbool.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter the value of %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Inputted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    } 
    printf("\n");

    for(int i = 0; i < n - 1; i++) {
        bool flag = true; 
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                flag = false;
            }
        }
        if(flag == true) break;
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
