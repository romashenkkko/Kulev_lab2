#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp; //variabila temporara
    int change; //pentru verificare daca am facut o schimbare sau inca nu
    
    for (int i = 0; i < n - 1; i++) {
        change = 0; 

        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // schimba cu locul elementul arr[j] cu arr[j + 1] in cazul in care e arr[j] e mai mare
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                change = 1; 
            }
        }

        if (change == 0)
            break;
    }
}

int main() {
    int arr[] = {3, 8, 5, 4, 1, 6, 2, 7, 9, 10, 80, 45, 74};
    int n = sizeof(arr) / sizeof(arr[0]); //calculam lungimea array-ului dat, prin aceea ca impartim dimensiunea la tot array-ul la dimensiunea unui singur element din el => aflam nm de elemente
    //PS elementele din array fiind de un singur type

    printf("Array-ul initial: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);

    printf("Array-ul sortat: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
