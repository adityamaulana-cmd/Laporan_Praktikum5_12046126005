/*
 * Program  : Praktikum 5 - Kasus 3 (Tukar Nilai Dua Variabel)
 * Nama     : Aditya Maulana
 * NIM      : 12046126005
 * Kelas    : SI
 * Tanggal  : 25 November 2026
 * Deskripsi: Fungsi tukar() dengan pass by reference (pointer) untuk menukar dua variabel integer.
 */

#include <stdio.h>

// Prototipe fungsi dengan parameter pointer (pass by reference)
void tukar(int *a, int *b);

int main() {
    int angka_a, angka_b;

    printf("=== PROGRAM TUKAR NILAI ===\n");
    printf("Masukkan angka A : ");
    scanf("%d", &angka_a);
    printf("Masukkan angka B : ");
    scanf("%d", &angka_b);

    printf("\nSebelum tukar: A = %d, B = %d\n", angka_a, angka_b);

    // Pass by reference - kirim ALAMAT variabel, bukan nilainya
    tukar(&angka_a, &angka_b);

    printf("Setelah tukar : A = %d, B = %d\n", angka_a, angka_b);
    return 0;
}

// Fungsi tukar: menukar nilai dua variabel lewat alamat (pointer)
void tukar(int *a, int *b) {
    int temp;
    temp = *a;   // simpan nilai di alamat a ke temp
    *a = *b;     // isi alamat a dengan nilai di alamat b
    *b = temp;   // isi alamat b dengan nilai temp
}
