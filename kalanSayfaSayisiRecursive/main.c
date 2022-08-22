#include <stdio.h>
#include <stdlib.h>

int sayfa_sayisi(int kalinan_sayfa , int hedef_sayfa){

	if(kalinan_sayfa - hedef_sayfa == 0  )
	{
		printf("Hedeflenen okuma sayfasina ulasilmistir.\n");
		return 0;
	}

	else;{
		if(kalinan_sayfa < hedef_sayfa)
		{
			printf("Hedeflenen okuma sayfasi tamamlanamamistir. Lutfen okumaya devam edin!\n");
			printf("Okunmasi gereken sayfa sayisi: %d",hedef_sayfa-kalinan_sayfa );

		}
		return hedef_sayfa - kalinan_sayfa;
	}

}

int sayfa_sayisi(int kalinan_sayfa , int hedef_sayfa);


int main(){
	int kalinan_sayfa, hedef_sayfa;
	printf("Hedeflenen okuma sayfasini girin:");
	scanf("%d", &hedef_sayfa);

	printf("Kaldiginiz sayfayi girin: ");
	scanf("%d", &kalinan_sayfa);

    sayfa_sayisi(kalinan_sayfa, hedef_sayfa);

}




