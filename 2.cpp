#include <stdio.h>

int main() {
	int kode, harga;
	char jenis;
	float diskon, harga_diskon;
	
	printf("Masukkan kode barang: ");
	scanf("%d", &kode);
	
	printf("Masukkan jenis barang (A, B, atau C): ");
	scanf(" %c", &jenis);
	
	printf("Masukkan harga barang: ");
	scanf("%d", &harga);
	
	switch (jenis) {
		case 'A':
			diskon = 0.1;
			break;
		case 'B':
			diskon = 0.15;
			break;
		case 'C':
			diskon = 0.2;
			break;
		default:
			printf("Jenis barang tidak valid.\n");
			return 1;
	}
	
	harga_diskon = harga - (harga * diskon);
	
	printf("Jenis barang %c mendapat diskon %.0f%%, Harga setelah didiskon = %.0f\n", jenis, diskon * 100, harga_diskon);
	
	return 0;
}