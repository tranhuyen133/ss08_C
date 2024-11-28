#include <stdio.h>

int main() {
    int n = 4;  
    int matrix[4][4] = {
        {5, 2, 8, 3},
        {4, 9, 1, 6},
        {7, 3, 5, 4},
        {2, 6, 8, 10}
    };

    int sum = 0; 
    printf("Cac phan tu tren duong chieu chinh cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]); 
        sum += matrix[i][i]; 
    }

    printf("\nTong cac phan tu tren duong chieu chinh: %d\n", sum);

    return 0;
}

