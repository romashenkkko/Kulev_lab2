#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minVar = i; //introducem un loop care va schimba valoarea variabilei minime pentru comparare

        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minVar]) //are loc compararea elementului j din lista nesortata cu elementul stocat in minVar
            {
                minVar = j;
            }
        }

        // schimba cu locul elementul arr[j] cu arr[j + 1] in cazul in care e arr[j] e mai mare

        int temp = arr[i];
        arr[i] = arr[minVar];
        arr[minVar] = temp;
    }
}

int main() {
    int arr[] = {3, 8, 5, 4, 1, 6, 2, 7, 9, 11, 20, 47, 98};
    int n = sizeof(arr) / sizeof(arr[0]); //calculam lungimea array-ului dat, prin aceea ca impartim dimensiunea la tot array-ul la dimensiunea unui singur element din el => aflam nm de elemente
    //PS elementele din array fiind de un singur type

    printf("Array-ul initial: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, n);

    printf("Array-ul sortat: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
