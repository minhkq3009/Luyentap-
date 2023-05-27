#include <stdio.h>

#define MAX_CATEGORIES 5

int main() {
    int expenses[MAX_CATEGORIES] = {2000, 1500, 3000, 2500, 4000}; // Mang chi phi
    int totalExpenses = 0;
    int budget;
    int highestExpense = expenses[0];

    // Tinh tong chi phi hang thang
    for (int i = 0; i < MAX_CATEGORIES; i++) {
        totalExpenses += expenses[i];
        
        // Tìm khoan chi phí cao nhat
        if (expenses[i] > highestExpense) {
            highestExpense = expenses[i];
        }
    }

    // Nhap gia tri ngân sách
    printf("Nhap gia tri ngan sach: ");
    scanf("%d", &budget);

    // Kiem tra xem tung chi phí có nam trong ngân sách không
    if (totalExpenses <= budget) {
        printf("Chi phi nam trong ngan sach.\n");
    } else {
        printf("Chi phí vuot qua ngan sach.\n");
    }

    // Hien thi chi phí cao nhat
    printf("Chi phi cao nhat: %d\n", highestExpense);

    return 0;
}

