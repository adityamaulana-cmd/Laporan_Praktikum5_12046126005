/*
 * Program  : Praktikum 5 - Kasus 4 (Sistem Penilaian Mahasiswa)
 * Nama     : Aditya Maulana
 * NIM      : 12046126005
 * Kelas    : SI
 * Tanggal  : 25 November 2026
 * Deskripsi: Gabungan konsep fungsi void (pointer), fungsi float, dan fungsi char untuk nilai akhir dan grade.
 */

#include <stdio.h>

// Prototipe fungsi
void inputNilai(float *uas, float *uts, float *tugas);
float hitungNilaiAkhir(float uas, float uts, float tugas);
char tentukanGrade(float nilai_akhir);

int main() {
    float uas, uts, tugas;
    float nilai_akhir;
    char grade;

    printf("=== SISTEM PENILAIAN MAHASISWA SI ===\n");

    // Fungsi void: input lewat pointer (pass by reference)
    inputNilai(&uas, &uts, &tugas);

    // Fungsi non-void: hitung nilai akhir (pass by value)
    nilai_akhir = hitungNilaiAkhir(uas, uts, tugas);

    // Fungsi yang mengembalikan char: tentukan grade
    grade = tentukanGrade(nilai_akhir);

    // Tampilkan hasil
    printf("\n=== HASIL PENILAIAN ===\n");
    printf("Nilai UAS  : %.2f\n", uas);
    printf("Nilai UTS  : %.2f\n", uts);
    printf("Nilai Tugas: %.2f\n", tugas);
    printf("Nilai Akhir: %.2f\n", nilai_akhir);
    printf("Grade      : %c\n", grade);
    if (grade == 'A' || grade == 'B' || grade == 'C') {
        printf("Status     : LULUS\n");
    } else {
        printf("Status     : TIDAK LULUS\n");
    }
    return 0;
}

// Fungsi inputNilai: membaca nilai UAS, UTS, dan Tugas lewat pointer
void inputNilai(float *uas, float *uts, float *tugas) {
    printf("Masukkan nilai UAS   : ");
    scanf("%f", uas);     // tidak perlu & lagi, uas sudah alamat
    printf("Masukkan nilai UTS   : ");
    scanf("%f", uts);
    printf("Masukkan nilai Tugas: ");
    scanf("%f", tugas);
}

// Fungsi hitungNilaiAkhir: UAS 40% + UTS 30% + Tugas 30%
float hitungNilaiAkhir(float uas, float uts, float tugas) {
    return (uas * 0.4) + (uts * 0.3) + (tugas * 0.3);
}

// Fungsi tentukanGrade: mengembalikan huruf mutu A/B/C/D/E dari nilai akhir
char tentukanGrade(float nilai_akhir) {
    if (nilai_akhir >= 85) return 'A';
    else if (nilai_akhir >= 70) return 'B';
    else if (nilai_akhir >= 55) return 'C';
    else if (nilai_akhir >= 40) return 'D';
    else return 'E';
}
