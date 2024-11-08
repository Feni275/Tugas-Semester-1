#include <stdio.h>

int main() {
	int jam_masuk, jam_keluar, lama_bekerja;
	
	printf("Masukkan jam masuk (1-12): ");
	scanf("%d", &jam_masuk);
	
	printf("Masukkan jam keluar (1-12): ");
	scanf("%d", &jam_keluar);
	
	if (jam_keluar > jam_masuk) {
		lama_bekerja = jam_keluar - jam_masuk;
	} else {
		lama_bekerja = (12 - jam_masuk) + jam_keluar;
	} 
	
	printf("Lama bekerja: %d jam\n", lama_bekerja);
	
	return 0;
}