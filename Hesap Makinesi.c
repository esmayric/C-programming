#include <stdio.h>

float toplama_islemi (float s1, float s2) {
	float sonuc;
	sonuc=s1+s2;
	return sonuc;
}
float cikarma_islemi (float s1, float s2) {
	float sonuc;
	sonuc=s1-s2;
	return sonuc;
}
float carpma_islemi (float s1, float s2) {
	float sonuc;
	sonuc=s1*s2;
	return sonuc;
}
float bolme_islemi (float s1, float s2) {
	float sonuc;
	sonuc=s1/s2;
	return sonuc;
}

int main () {
	float s1,s2;
	char islem;
	float sonucu;
	int sayac;
	sayac=0;
	
	while(sayac!=1) {
		printf ("****************HESAP MAKINESI*****************\n");
	    printf("A: Toplama\n");
	    printf("S: Cikarma\n");
	    printf("M: Carpma\n");
	    printf("D: Bolme\n");
	    printf("E: Programi Sonlandir\n");
        printf("*************************************************\n");
	    printf("Yapmak istediginiz islemi seciniz: ");
	    scanf("%c" ,&islem);
	    getchar();
	    
	switch (islem) {
		case 'A' :
			printf("iki adet sayi giriniz: ");
	        scanf("%f %f" ,&s1,&s2);
	        getchar();
			sonucu=toplama_islemi(s1,s2);
			printf("ilk sayi: %.2f\n ikinci sayi: %.2f\n sonuc: %.2f\n" ,s1,s2,sonucu);
			break;
			
			case 'S' :
				printf("iki adet sayi giriniz: ");
	            scanf("%f %f" ,&s1,&s2);
	            getchar();
				sonucu=cikarma_islemi(s1,s2);
				printf("ilk sayi: %.2f\n ikinci sayi: %.2f\n sonuc: %.2f\n" ,s1,s2,sonucu);
				break;
				
				case 'M' :
					printf("iki adet sayi giriniz: ");
	                scanf("%f %f" ,&s1,&s2);
	                getchar();
					sonucu=carpma_islemi(s1,s2);
					printf("ilk sayi: %.2f\n ikinci sayi: %.2f\n sonuc: %.2f\n" ,s1,s2,sonucu);
					break;
					case 'D' :
						printf("iki adet sayi giriniz: ");
	                    scanf("%f %f" ,&s1,&s2);
	                    getchar();
						sonucu= bolme_islemi(s1,s2);
						printf("ilk sayi: %.2f\n ikinci sayi: %.2f\n sonuc: %.2f\n" ,s1,s2,sonucu);
						break;
						
						case 'E' :
							printf("program sonlanmistir\n");
							sayac=1;
							break;
							
							default :
								printf("hatali secim lutfen tekrar deneyin!! \n");
								break;			
	}
	
	}
	
	return 0;
}
