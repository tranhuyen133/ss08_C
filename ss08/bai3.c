#include <stdio.h>

int main() {
    int n;

    printf("Nhap so nguyen n (kich thuoc ma tran): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Kich thuoc ma tran phai lon hon 0.\n");
        return 1;
    }

    int matrix[n][n];
    printf("Nhap cac phan tu cua ma tran (%d x %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("\nMa tran vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}

