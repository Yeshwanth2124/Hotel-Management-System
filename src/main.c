#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int menu,sno=0,rate=0,qty,totamt=0,r=0;
	char cont;
	clrscr();
	gotoxy(20,1);
	printf("**********************************************");
	gotoxy(20,2);
	printf("*************** Hotel Taj ********************");
	gotoxy(20,3);
	printf("**********************************************");
	gotoxy(20,4);
	printf("///************** Menu ********************///");
	gotoxy(20,5);
	printf("1. Panner Briyani      - 250");
	gotoxy(20,6);
	printf("2. veg Briyani         - 100");
	gotoxy(20,7);
	printf("3. kaju Briyani        - 200");
	gotoxy(20,8);
	printf("4. Mushroom Briyani    - 300");


	gotoxy(20,13);
	printf("--------------------------------------------");
	gotoxy(20,14);
	printf("Sno  Item             Rate     Qty    Amount");
	gotoxy(20,15);
	printf("--------------------------------------------");
	r = wherey();

	do
	{
		gotoxy(20,9);
		printf("Select your item:  ");
		scanf("%d",&menu);
		gotoxy(20,10);
		r++;
		sno++;
		gotoxy(21,r);
		printf("%d",sno);
		gotoxy(25,r);
		switch(menu)
		{
			case 1:
				rate = 250;
				printf("Panner briyani");
				gotoxy(43,r);
				printf("%d",rate);
				gotoxy(52,r);
				scanf("%d",&qty);
				gotoxy(61,r);
				printf("%d",qty*rate);
				totamt = (totamt) + qty*rate;
				break;

			case 2:
				rate = 100;
				printf("veg briyani");
				gotoxy(43,r);
				printf("%d",rate);
				gotoxy(52,r);
				scanf("%d",&qty);
				gotoxy(61,r);
				printf("%d",qty*rate);
				totamt = (totamt) + qty*rate;
				break;

			case 3:
				rate = 200;
				printf("kaju briyani");
				gotoxy(43,r);
				printf("%d",rate);
				gotoxy(52,r);
				scanf("%d",&qty);
				gotoxy(61,r);
				printf("%d",qty*rate);
				totamt = (totamt) + qty*rate;
				break;

			case 4:
				rate = 300;
				printf("Mushroom briyani");
				gotoxy(43,r);
				printf("%d",rate);
				gotoxy(52,r);
				scanf("%d",&qty);
				gotoxy(61,r);
				printf("%d",qty*rate);
				totamt = (totamt) + qty*rate;
				break;

			default:
				gotoxy(20,12);
				printf("You have selected none");

		  }
		  r = wherey();
		  gotoxy(20,24);
		  printf("do you want to order another item ? (y/n): ");
		  fflush(stdin);
		  scanf("%c",&cont);
		  gotoxy(38,9);
		  printf("    ");

		} while(cont == 'y' || cont == 'Y');
		gotoxy(20,r+1);
		printf("==============================================");
		r = wherey();
		r++;
		gotoxy(48,r);
		printf("Total Amount");
		gotoxy(62,r);
		printf("%d",totamt);

		r = wherey();
		r++;
		gotoxy(20,r);
		printf("==============================================");

	   /*	gotoxy(20,r+1);
		printf("Thank You! Visit again!");
							You can add this if
		gotoxy(20,r+2);                               you want
		printf("Press any key to exit...");
		getch();  */

}

