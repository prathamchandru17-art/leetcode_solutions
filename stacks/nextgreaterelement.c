#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next greater elements: ");

    for (int i = 0; i < n; i++) {
        int found = -1;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                found = arr[j];
                break;
            }
        }

        printf("%d ", found);
    }

    return 0;
}