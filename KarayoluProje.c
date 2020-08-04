#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	double A, S;

		/// Bilinenleri isteyelim.
	/* A; Cad ortamında hesaplanan en-kesit alanları (NetCAD, GeoCAD, EGHAS, KartoCAD, PratiCAD, UniCAD, AutoCAD, Microstation/InRoads)
	S; En kesitler arası mesafe */
	printf("A (en-kesit alanları) değerini giriniz: ");
	scanf("%lf", &A);
	printf("S (en kesitler arası mesafe) değerini giriniz: ");
	scanf("%lf", &S);

		/// Bilinmeyenlerin hesaplanması.
	printf("\n\t=== Hesap sonuçları! === \n");
	/* Yarma alanlarından kübajın hesaplanması; (Vyarma)
	Vyarma1 = ((Ayarma1 + Ayarma2) / 2) * S1
	…… */

	/* Dolgu alanlarından kübajın hesaplanması; (Vdolgu)
	Vdolgu1; ((Adolgu1 + Adolgu2) / 2) * S1
	……… */

	/* Kümülatif yarma ve dolgu kübajlarının hesaplanması; [Vyarma], [Vdolgu]
	[Vyarma] = Vyarma1 + Vyarma2 + ……………………………………
	[Vdolgu] = Vdolgu1 + Vdolgu2 + ……………………………. */

	/* Brükner değerlerinin hesaplanması; BRÜKNER
	BRÜKNER1 = Vyarma1 - Vdolgu1;
	BRÜKNER2 = Vyarma2 - Vdolgu2;
	…………………………………………………. */
	

	return 0;
}
