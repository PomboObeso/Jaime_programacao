#include <stdio.h>
#include <math.h>

int main()
{
	int n,i,x,c,ergebnis=0;
	printf("Geben Sie die Größe des Polynoms ein\n");
	scanf("%d", &n);
	int koe[n];
	for(i = n; i > 0; i--){
		printf("Geben Sie den Koeffizienten ein\n");
		scanf("%d", &koe[i]);
	}
	printf("Geben Sie den Koeffizienten ein\n");
	scanf("%d", &c);
	printf("Geben Sie den Wert von ein X\n");
	scanf("%d", &x);
	for(i = n ; i > 0; i--){
		ergebnis += pow(x,i)*koe[i];
		if(i == 0)
		{
			ergebnis+= x * koe[i];
		}
	}
	ergebnis+=c;
	printf("Antwort: %d\n", ergebnis);

	return 0;
}