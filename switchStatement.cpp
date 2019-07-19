/*Adrian Glabik I semestr niestacjonarne 2016*/
#include <iostream>
#include <stdio.h> /* funkcje printf, scanf */
int punkty;
int metoda;
int main() 
{
printf("Podaj liczbe punktow w zakresie 0-10: ");
scanf("%d",&punkty);

// Metoda IF

if(punkty<0||punkty>10)
{
printf("Podales liczbe z poza zakresu\n");
}
else
{
if(punkty>=0&&punkty<=1) printf("Ocena mierna\n");
if(punkty>=2&&punkty<=3) printf("Ocena niedostateczna\n");
if(punkty>=4&&punkty<=5) printf("Ocena dostateczna\n");
if(punkty>=6&&punkty<=7) printf("Ocena dobra\n");
if(punkty>=8&&punkty<=9) printf("Ocena bardzo dobra\n");
if(punkty==10) printf("Ocena celujaca\n");
}


// Metoda SWITCH
switch (punkty)	
{
	case 0: printf("Ocena mierna.");break;
	case 1: printf("Ocena mierna.");break;
	case 2: printf("Ocena niedostateczna.");break;
	case 3: printf("Ocena niedostateczna.");break;
	case 4: printf("Ocena dostateczna.");break;
	case 5: printf("Ocena dostateczna.");break;
	case 6: printf("Ocena dobra.");break;
	case 7: printf("Ocena dobra.");break;
	case 8: printf("Ocena bardzo dobra.");break;
	case 9: printf("Ocena bardzo dobra.");break;
	case 10: printf("Ocena celujaca.");break;
	default: printf("Podales liczbe z poza zakresu");

}
	return 0;
}
