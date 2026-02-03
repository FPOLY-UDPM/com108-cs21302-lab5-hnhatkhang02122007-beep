#include <stdio.h>

// Hàm tìm số lớn nhất trong 3 số
int timSoMax(int so1, int so2, int so3) {
    int timMax;

    if (so1 >= so2 && so1 >= so3) {
        timMax = so1;
    } 
    else if (so2 >= so1 && so2 >= so3) {
        timMax = so2;
    } 
    else {
        timMax = so3;
    }

    return timMax;
}

int main() {
    int s1, s2, s3;
    
    printf("Nhap 3 so nguyen: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    
    int max = timSoMax(s1, s2, s3);
    printf("So lon nhat la: %d\n", max);
    
    return 0;
}