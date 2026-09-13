//Q69: Find the second largest element in an array.

  #include <stdio.h>

int main() {
    int n, i, largest, second;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    second = arr[1];

    if(second > largest) {
        int temp = largest;
        largest = second;
        second = temp;
    }

    for(i = 2; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("%d", second);

    return 0;
}