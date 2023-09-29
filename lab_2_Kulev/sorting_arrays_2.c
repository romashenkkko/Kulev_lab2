#include <stdio.h>

int main() {
    int n; 
    printf("Introduce numarul de elemente: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Numarul de elemente trebuie sa fie pozitiv.\n");
        return 1;
    }

    double arr[n]; 


    printf("Introduce elementele array-lui:\n");
    for (int i = 0; i < n; i++)
     {
        scanf("%lf", &arr[i]); 
    }

    double MaxNeg = 0.0; 
    int pos_max[n]; 
    int count_pos_max = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) 
        { 
            if (arr[i] < MaxNeg) 
            {
                
                MaxNeg = arr[i];
                count_pos_max = 1; 
                pos_max[0] = i;
            } else if (arr[i] == MaxNeg) 
            {
                pos_max[count_pos_max] = i; 
                count_pos_max++; 
                }
        }
    }

    if (count_pos_max == 0) {
        printf("Nu exista elemente negative in array.\n");
    } else {
        printf("Valoarea maxima negativa este: %lf\n", MaxNeg);
        printf("Aceasta apare la pozitiile: ");
        for (int i = 0; i < count_pos_max; i++) {
            printf("%d ", pos_max[i]);
        }
        printf("\n");
    }

    return 0;
}
