#include <stdio.h>

// Hàm kiểm định sản lượng (đơn vị: Wh)
int kiemDinhSanLuong() {
    int wh;
    do {
        printf("Nhap san luong (Wh): ");
        scanf("%d", &wh);
        if (wh <= 0) {
            printf("Loi: San luong phai lon hon 0. Vui long nhap lai.\n");
        }
    } while (wh <= 0);
    return wh;
}

int main() {
    // Gọi hàm kiểm định sản lượng
    int sanLuongHople = kiemDinhSanLuong();
    printf("San luong hop le duoc ghi nhan: %d Wh\n", sanLuongHople);
    return 0;
}
