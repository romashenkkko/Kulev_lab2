#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, temp, j;
    for (i = 1; i < n; i++) 
    {
        temp = arr[i];
        j = i - 1;

        
        while (j >= 0 && arr[j] > temp) //schimbarea cu locului a elementului din array cu acel temporar
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main() {
    int arr[] = {3, 8, 5, 4, 1, 6, 2, 7, 9, 20, 45, 78};
    int n = sizeof(arr) / sizeof(arr[0]); //calculam lungimea array-ului dat, prin aceea ca impartim dimensiunea la tot array-ul la dimensiunea unui singur element din el => aflam nm de elemente
    //PS elementele din array fiind de un singur type

    printf("Array-ul initial: ");
    for (int i = 0; i < n; i++)
     {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, n);

    printf("Array-ul sortat: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

