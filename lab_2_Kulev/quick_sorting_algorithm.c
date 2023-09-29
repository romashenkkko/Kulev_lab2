#include <stdio.h>


void change(int* a, int* b) //utilizam pointers in schimbarea valoarea variabilelor
{
    int t = *a;
    *a = *b;
    *b = t;
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high]; //alegem tochka oporî pentru a ne orienta in compararea elementelor
    int i = (low - 1);  //ca in continuare sa putem diviza array in doua subarrays 

    for (int j = low; j < high; j++) //comparam elementul arr[j] cu pivot 
    //=> pentru a-l atribui in continuare in unul dintre subarrays
    {
        if (arr[j] <= pivot) {
            i++;
            change(&arr[i], &arr[j]);
        }
    }

    change(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) 
{
    if (low < high) 
    {
        int pi = partition(arr, low, high); //formarea a inca doua subarrays cu elem mai mici decat pivot si mai mari

        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {3, 8, 5, 4, 1, 6, 2, 7, 9, 13, 45, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array initial: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quickSort(arr, 0, n - 1);

    printf("Array sortat: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
