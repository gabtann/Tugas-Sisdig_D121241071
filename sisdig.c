#include <stdio.h>

// Fungsi untuk menampilkan status segmen berdasarkan angka
void display7Segment(int x, int y, int z) {
    // Hitung angka desimal dari biner
    int number = (x << 2) | (y << 1) | z;

    // Array segmen 7-segment untuk angka 0-7
    // Format: {A, B, C, D, E, F, G}
    int segments[8][7] = {
        {1, 1, 1, 1, 1, 1, 0}, // 0
        {0, 1, 1, 0, 0, 0, 0}, // 1
        {1, 1, 0, 1, 1, 0, 1}, // 2
        {1, 1, 1, 1, 0, 0, 1}, // 3
        {0, 1, 1, 0, 0, 1, 1}, // 4
        {1, 0, 1, 1, 0, 1, 1}, // 5
        {1, 0, 1, 1, 1, 1, 1}, // 6
        {1, 1, 1, 0, 0, 0, 0}  // 7
    };

    // Tampilkan hasil
    printf("Input: X=%d, Y=%d, Z=%d -> Number: %d\n", x, y, z, number);
    printf("7-Segment Output:\n");
    printf("A: %d\n", segments[number][0]);
    printf("B: %d\n", segments[number][1]);
    printf("C: %d\n", segments[number][2]);
    printf("D: %d\n", segments[number][3]);
    printf("E: %d\n", segments[number][4]);
    printf("F: %d\n", segments[number][5]);
    printf("G: %d\n", segments[number][6]);
}

int main() {
    int x, y, z;

    // Input biner (X, Y, Z)
    printf("Masukkan nilai X (0/1): ");
    scanf("%d", &x);
    printf("Masukkan nilai Y (0/1): ");
    scanf("%d", &y);
    printf("Masukkan nilai Z (0/1): ");
    scanf("%d", &z);

    // Validasi input
    if ((x < 0 || x > 1) || (y < 0 || y > 1) || (z < 0 || z > 1)) {
        printf("Input harus berupa bilangan biner (0 atau 1)!\n");
        return 1;
    }

    // Tampilkan 7-segment display
    display7Segment(x, y, z);

    return 0;
}
