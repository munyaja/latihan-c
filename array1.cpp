#include<stdio.h>
int main(){
	// membuat array kosong
	int nilai[5];
	//mengisi array
	nilai[0]=32;
	nilai[1]=42;
	nilai[2]=76;
	nilai[3]=31;
	nilai[4]=57;
	/*mencetak isi array
	printf("Nilai ke-1: %d\n", nilai[0]);
	printf("Nilai ke-2: %d\n", nilai[1]);
	printf("Nilai ke-3: %d\n", nilai[2]);
	printf("Nilai ke-4: %d\n", nilai[3]);
	printf("Nilai ke-5: %d\n", nilai[4]);
	*/
	/*dapat menggunakan loop for
	for(int i=0;i<5;i++){
		printf("Nilai ke-1: %d\n", nilai[i]);
	}*/
	//int size=sizeof(*nilai);
		int length=sizeof(nilai)/sizeof(*nilai);	
		for(int i=0;i<length;i++){
			printf ("Nilai ke- %d :", i);
			printf("%d \n",nilai[i]);
	}
	//printf("%s",size);
	return 0;
}
