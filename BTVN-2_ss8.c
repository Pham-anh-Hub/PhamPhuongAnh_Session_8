#include <stdio.h>

int main() {

    int num[8] = {41,37,18,13,4,20,13,6,82,87};
    
    int number, found = 0;

    
    printf("Nhap vao so nguyen  ");
    scanf("%d", &number);


    for (int i = 0; i < 8; i++) {
        if (num[i] == number) {
            printf("\nVi tri phan tu trong mang la: %d", i);
            found = 1;
            break;
        }
    }

    if (found!=1) {
        printf("\nPhan tu khong co trong mang");
    }

    return 0;
}
