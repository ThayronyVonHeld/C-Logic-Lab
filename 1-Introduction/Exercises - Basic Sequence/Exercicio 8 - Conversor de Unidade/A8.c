#include <stdio.h>

float D, Km, Hm, Dam, Dm, Cm, Mm;

int main() {
	printf("Digite uma distancia em Metros: ");
		scanf("%f", &D);
	
	Km = D / 1000;
     Hm = D / 100;
     Dam = D / 10;
     Dm = D * 10;
     Cm = D * 100;
     Mm = D * 1000;

	printf("%.1f metro(s), em Km e %.f\n", D, Km);
	printf("%.1f metro(s), em Hm e %.f\n", D, Hm);
	printf("%.1f metro(s), em Dam e %.f\n", D, Dam);
	printf("%.1f metro(s), em Dm e %.0f\n", D, Dm);
	printf("%.1f metro(s), em Cm e %.0f\n", D, Cm);
	printf("%.1f metro(s), em Mm e %.0f", D, Mm);
	
	return 0;
	}
