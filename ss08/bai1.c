#include <stdio.h>

int main() {
    // Khai báo và gán giá trị cho một mảng bất kỳ
    int arr[] = {5, 10, 15, 20, 25};
    int n = 5; // Số phần tử của mảng

    // In các phần tử từ cuối về đầu
    printf("Cac phan tu cua mang tu cuoi ve dau:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
