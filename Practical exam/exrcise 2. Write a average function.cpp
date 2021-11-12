#include <stdio.h>

float average (int arr[], int number){
    int sum = 0, count=0;
    float average = 0;
    for(int i = 0; i < number; i++){
        sum += arr[i];
        count++;
    }
    average =(float) sum / count;
    return  average;
}

int main(int argc, const char * argv[]) {
    int size;
    printf("input size of array: ");
    scanf("%d", &size);    
    int arr[size];
    
    for(int i = 0; i < size; i++) {
        printf("input element of array %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Average: %.5f\n", average(arr, size));
    return 0;
}

