#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
int main()
{
	for(int Exit = 0 ; Exit !=1 ;)
	{
	int i,p;
	float sum=0,CL=0,AC=0,ELE=0;
	int n=0,Dis=0;
	int Coupon = 0,Ontop  = 0,Seasonal  = 0;
	int TShirt = 350,Hat=250,Shoes=700,Watch=700,Bag=640,Lamp=230;
	char Text[100]="",TTShirt[12] = "T-Shirt ",THat[6] = "Hat ",TShoes[8]= "Shoes ";
	char TWatch[7]="Watch " , TBag[5] = "Bag ", TLamp[6] ="Lamp ";
	int Amount = 0,Every = 0,Discount = 0,Category = 0;
	float Percentage = 0,keepsum=0,Point = 0,state= 1;
    char inputString[100];
	printf("1.T-Shirt: 350 THB 2.Hat: 250 THB 3.Shoes: 700 THB\n");
	printf("4.Watch:   700 THB 5.Bag: 640 THB 6.Lamp:  230 THB\n");
	printf("Please input 1-6 or 0 to Next\n");
	for(int count =1; count != 0 ; n++  )	
	{
		while (true) {
        fgets(inputString, sizeof(inputString), stdin);
        if (sscanf(inputString, "%d", &i) == 1) {
            if (i >= 0 && i <= 6) {
                break; 
            		}	
        	}
        printf("Please input Only 1-6 or press 0 for next\n");
    	}
	if(i==0)
		{
		count = 0;
		}
	if(i==1)
		{
		sum=TShirt+sum;
		strcat( Text, TTShirt);
		CL ++;
		}
	if(i==2)
		{
		sum=Hat+sum;
		strcat( Text, THat);
		}
	if(i==3)
		{
		sum=Shoes+sum;
		strcat( Text, TShoes);
		}
	if(i==4)
		{
		sum=Watch+sum;
		strcat( Text, TWatch);
	AC++;
		}
	if(i==5)
		{
		sum=Bag+sum;
		strcat( Text, TBag);
	}
		if(i==6)
		{
		sum=Lamp+sum;
		strcat( Text, TLamp);
		ELE++;
		}
	}
	printf("Item in cart: %s\n",Text);
	printf("Price = %.0f THB\n",sum);
	printf("-----------Campaings------------\n");
	if(state == 1)
	{
    printf("Coupon: 1.Fixed amount 2.Percentage discount or press 0 for next\n");
    printf("Coupon: ");
	while (true) {
		if(sum == 0)
		{
			printf("Total Price have 0.\n");
			break;
			}
        fgets(inputString, sizeof(inputString), stdin);
        if (sscanf(inputString, "%d", &p) == 1) {
            if (p >= 0 && p <= 2) {
                break; 
            		}	
        	}
        printf("Please input Only 1-2 or press 0 for next\n");
    	}
		if(p==1&&Coupon==0)
		{	printf("Amount of Discount : ");
		
		while (true) {
        fgets(inputString, sizeof(inputString), stdin);
        if (sscanf(inputString, "%d", &Amount) == 1) 
		{
            if (Amount >= 1) {
                break; 
            		}	
        	}

        printf("Please try again.\n");
    	}
		sum=sum-Amount;
		printf("Discount %d THB\n",Amount);
		Coupon++;
		}
		if(p==2&&Coupon==0)
		{	
		printf("Percentage of Discount : ");
				while (true) {
        fgets(inputString, sizeof(inputString), stdin);

      
        if (sscanf(inputString, "%f", &Percentage) == 1) {
  
            if (Percentage >= 1 && Percentage <= 100) {
                break; 
            		}	
        	}
        printf("Please input Percentage 1-100  \n");
    	}
		keepsum = sum*(Percentage/100);
		sum=sum-(sum*(Percentage/100));
		printf("Discount %.0f Percentage  \n",Percentage);
		printf("Total of Discount %.0f THB  \n",keepsum);
		Coupon++;
		}
	if(sum>=0)
	{
	printf("Price = %.0f THB\n",sum);
	}
		if(sum<0)
	{
	printf("Price = 0 THB\n");
	}
		if(p==0&&Coupon==0)
		{	
		Coupon++;
		}
		
		if(Coupon >= 1)
		{
			printf("--------------------------------\n");
			state = 2;
		}
	}
	if(state == 2)	
	{
	printf("On Top: 1.Percentage discount of Category 2.Discount by point or press 0 for next\n");
	printf("On Top: ");
	while (true) {
		if(sum == 0)
		{
			printf("Total Price have 0.\n");
			Ontop++;
			break;
			}
        fgets(inputString, sizeof(inputString), stdin);
        if (sscanf(inputString, "%d", &p) == 1) {
            if (p >= 0 && p <= 2) {
                break; 
            		}	
        	}
        printf("Please input Only 1-2 or 0 to Next\n");
    	}
	if(p==1&&Ontop==0)
	{	
		int CC = 0,AA = 0,EE = 0;
		int KeepCT=0,KeepCT1=0,KeepCT2=0,KeepCT3=0;
		printf("Category: 1.Clothing(T-Shirt) 2.Accessories(Watch) 3.Electronic(Lamp)\n");
		printf("or press 0 for next\n");
		for(int count =1; count != 0 ;)
		{
		while (true) {
		printf("Category : ");
        fgets(inputString, sizeof(inputString), stdin);
        if (sscanf(inputString, "%d", &Category) == 1) {
        	if (Category == 0 ) {
            	count=0;
                break;
            		}
            if (Category == 1 && CL>=1 && CC==0) {
            	CC =1;
             printf("Category your discount is Clothing\n");
                break;
            		}
			if (Category == 2 && AC>=1 && AA==0) {
            	AA = 1;
            printf("Category your discount is Accessories\n");
                break;
            		}
			if (Category == 3 &&ELE>=1 && EE ==0) {
            	EE = 1;
            printf("Category your discount is Electronic\n");
                break;
            		}	
        	}
            if (Category == 1 && CC==1) {
            printf("You choose this choice!\n");
            		}
			if (Category == 2 && AA==1) {
            printf("You choose this choice!\n");
            		}
			if (Category == 3 && EE==1) {
            printf("You choose this choice!\n");
            		}
           	
            if (Category == 1 && CL<1) {
            	
            printf("Your cart don't have Clothing\n");
            		}
			if (Category == 2 && AC<1) {
            printf("Your cart don't have Accessories\n");
               
            		}
			if (Category == 3 &&ELE<1) {
            printf("Your cart don't have Electronic\n");
            		}
       		 printf("Please try again \n");
    	}
		if(Category==0)
		{
			
		}
		if(Category==1)
		{
			KeepCT1=350*CL;
		}
		if(Category==2)
		{
			KeepCT2=700*AC;
		}
		if(Category==3)
		{
			KeepCT3=230*ELE;
		}
    }
    KeepCT = KeepCT1+KeepCT2+KeepCT3;
    	if(KeepCT>0)
    	{
		printf("Percentage of Discount : ");
		while (true) {
        fgets(inputString, sizeof(inputString), stdin);
        if (sscanf(inputString, "%f", &Percentage) == 1) {
            if (Percentage >= 1 && Percentage <= 100) {
                break; 
            		}	
        	}
        printf("Please input Percentage 1-100  \n");
    	}

		keepsum = KeepCT*(Percentage/100);
		sum=sum-(KeepCT*(Percentage/100));
		printf("Discount %.0f Percentage  \n",Percentage);
		printf("Total of Discount %.0f THB  \n",keepsum);
	}
	else{
		printf("Can't to use this campaign.\n");
	}
		Ontop++;
	}
	if(p==2&&Ontop==0)
	{	
		printf("Point : ");
		while (true) {
        if(sum == 0)
		{
			printf("Total Price have 0.\n");
			break;
			}
		fgets(inputString, sizeof(inputString), stdin);
        if (sscanf(inputString, "%f", &Point) == 1) {
			if((Point/sum)*100 <= 20 &&Point >=0)
		{
			sum = sum - Point;
			printf("Discount %.0f THB\n",Point);
			break;
		}
		if(sum == 0)
		{
			break;
			}	
        	}
        if((Point/sum)*100 > 20)
        printf("Point more than 20 Percentage of the product.\n");
        if(Point < 0)
        printf("Please try again\n");
    	}
		Ontop++;
	}
	if(sum>=0)
	{
	printf("Price = %.0f THB\n",sum);
	}
		if(sum<0)
	{
	printf("Price = 0 THB\n");
	}
	
			if(p==0&&Ontop==0)
	{	
		Ontop++;
	}
		if(Ontop >= 1)
		{
			printf("--------------------------------\n");
			state = 3;
		}
	}
		if(state == 3)	
	{
	printf("Seasonal: 1.Special campaigns or press 0 for next\n");
	printf("Seasonal: ");
	while (true) {
		if(sum == 0)
		{
			printf("Total Price have 0.\n");
			Seasonal++;
			break;
			}
        fgets(inputString, sizeof(inputString), stdin);
        if (sscanf(inputString, "%d", &p) == 1) {
            if (p >= 0 && p <= 1) {
                break; 
            		}	
        	}
        printf("Please input Only 1 or 0 to Next\n");
    	}
	if(p==1&&Seasonal==0)
	{   
		printf("Every : ");
		while (true) {
        fgets(inputString, sizeof(inputString), stdin);
        if (sscanf(inputString, "%d", &Every) == 1) {
            if (Every > 0 ) {
                break; 
            		}	
        	}
        printf("Please try again\n");
    	}
		printf("Discount : ");
		while (true) {
        fgets(inputString, sizeof(inputString), stdin);
        if (sscanf(inputString, "%d", &Discount) == 1) {
            if (Discount > 0 ) {
                break; 
            		}	
        	}
        printf("Please try again\n");
    	}
		if(sum >= Every)
		{	
			Dis = sum/Every;
			Dis = Dis * Discount;
		}
		sum = sum-Dis;
		printf("Discount %d THB\n",Dis);
		Seasonal++;
	}
	if(p==0)
	{	
		Seasonal++;
	}
		if(sum>=0)
	{
	printf("Price = %.0f THB\n",sum);
	}
		if(sum<0)
	{
	printf("Price = 0 THB\n");
	}
			if(Seasonal >= 1)
		{
			printf("--------------------------------\n");
			state = 4;
		}
}
	if(sum>=0)
	{
	printf("Total Price = %.0f THB\n",sum);
	}
		if(sum<0)
	{
	printf("Total Price = 0 THB\n");
	}
	printf("--------------------------------");
	printf("---------Restart Program--------");
	printf("--------------------------------\n");
	printf("---------Restart Program--------");
	printf("--------------------------------");
	printf("---------Restart Program--------\n");
	printf("--------------------------------");
	printf("---------Restart Program--------");
	printf("--------------------------------\n");
}
	return 0;
}
