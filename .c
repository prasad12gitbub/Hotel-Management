#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int choice,quantity,YesNo,duration,WaiterName;
char NoYes;

void lunch(void);
void veg(void);
void NonVeg(void);
void drink(void);
void SoftDrink(void);
void beer(void);
void quater(void);
void chakna(void);
void lodge(void);
void snack(void);
void mobile(void);
void panshop(void);
void pan(void);
void gutkha(void);
void delivery(void);
void waiter(int);



int main(){
	
	printf("*****Welcome to Hotel Royal Galaxy*****\n");
	
	
	do{
		printf("\nEnter 1 for LUNCH\n");
		printf("Enter 2 for DRINK\n");
		printf("Enter 3 for PANSHOP\n");
		printf("Enter 4 for MOBILE ACCESSORIES\n");
		printf("Enter 5 for SNACKS\n");
		printf("Enter 6 for LODDING\n");
		printf("Enter 7 for DELIVARY\n");
		printf("Enter 0 for ORDER NOTHING\n\n");
		
		printf("plz enter your choice\n");
		fflush(stdin);
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 0:printf("You have ordered nothing\n");
				   break;
			case 1:lunch();
				   break;
			case 2:drink();
				   break;
			case 3:panshop();
				   break;
			case 4:mobile();
				   break;
			case 5:snack();
				   break;
			case 6:lodge();
				   break;
			case 7:delivery();
				   break;
		    default:printf("Invalid input!!!\n");	
				   break;	   	   	   
		}
		printf("\nDo you want to reload the main menu\n");
		printf("Enter 1 for yes and 0 for no\n");
		scanf("%d",&YesNo);
	}while(YesNo!=0);
	return 0;
}

void lunch(void){
	
	printf("\nenter 1 for pure veg\n");
	printf("enter 2 for non veg\n\n");
	
	printf("plz enter your choice\n");
	fflush(stdin);
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:veg();
		       break;
		case 2:NonVeg();
		       break;
		default:printf("Invalid input!!!\n");	
				break;
	}
		
}

void veg(void){
	
	struct veg{
		char name[20];
		int price;
		int quantity;
		}i[5];
		
		strcpy(i[0].name,"Palak Panir");
		i[0].price=120;
		strcpy(i[1].name,"Shevbhaji");
		i[1].price=120;
		strcpy(i[2].name,"Kajucurry");
		i[2].price=130;
		strcpy(i[3].name,"Methi masala");
		i[3].price=130;
		strcpy(i[4].name,"Tava besan");
		i[4].price=140;

	do{
		printf("\nindex\tName\t\tprice\n");
		printf("(1)\tpalak panir\t120rs\n");
		printf("(2)\tshevbhaji\t120rs\n");
		printf("(3)\tkajucurry\t130rs\n");
		printf("(4)\tmethimasala\t130rs\n");
		printf("(5)\ttava besan\t140rs\n");
		printf("(0)\tOrder nothing\t-\n\n");
		
		printf("Plz enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 0:printf("You have ordered nothing\n\n");
				   break;
				   
			case 1:printf("Enter how many quantities you want of palak panir\n");
				   scanf("%d",&i[0].quantity);
				   printf("you have ordered %d Palak Panir\n",i[0].quantity);
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
			case 2:printf("Enter how many quantities you want of Shev bhaji\n");
				   scanf("%d",&i[1].quantity);
				   printf("you have ordered %d shev bhaji\n",i[1].quantity);
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
			case 3:printf("Enter how many quantities you want of Kajucurry\n");
				   scanf("%d",&i[2].quantity);
				   printf("you have ordered %d Kajucurry\n",i[2].quantity);
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
			case 4:printf("Enter how many quantities you want of Methimasala\n");
				   scanf("%d",&i[3].quantity);
			       printf("you have ordered %d Methimasala\n",i[3].quantity);
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
			case 5:printf("Enter how many quantities you want of Tavabesan\n");
				   scanf("%d",&i[4].quantity);
				   printf("you have ordered %d Tavabesan\n",i[4].quantity);
				   printf("your order has been successfully placed\n\n");
				   break;
				   
			default: printf("Invalid input!!!\n");	
				   break;	   	   
		}
		
		printf("Do you want to reload this menu\n");
		printf("Enter 1 for yes and 0 for no \n");
		fflush(stdin);
		scanf("%d",&YesNo);
	}while(YesNo!=0);
	
	WaiterName=abs(rand());
	WaiterName%=10;
	
	if(WaiterName>6){
		WaiterName-=3;
	}
	else if(WaiterName<1){
		WaiterName+=1;
	}
	
	waiter(WaiterName);
}

void NonVeg(void){
	
	struct NonVeg{
		char name[20];
		int price;
		int quantity;
		}i[5];
		
		strcpy(i[0].name,"Matan Masala");
		i[0].price=170;
		strcpy(i[1].name,"Chicken Handi");
		i[1].price=180;
		strcpy(i[2].name,"Machchhi fry");
		i[2].price=180;
		strcpy(i[3].name,"Anda curry");
		i[3].price=120;
		strcpy(i[4].name,"Fried Chiken");
		i[4].price=150;

	
	do{	
		printf("Index\tname\t\tprice\n");
		printf("(1)Matan Masala\t\t170rs\n");
		printf("(2)Chicken Handi\t180rs\n");
		printf("(3)Machchhi fry\t\t180rs\n");
		printf("(4)Anda curry\t\t120rs\n");
		printf("(5)Fried Chiken\t\t150rs\n");
		printf("(0)Order nothing\t-\n\n");
		
		printf("Plz enter your choice\n");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 0:printf("You hace ordered nothing\n\n");
				   break;
				   
			case 1:printf("Enter how may quantities you want of Matan Masala\n");
				   scanf("%d",&i[0].quantity);
				   printf("You have ordered %d Matan Masala\n",i[0].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			case 2:printf("Enter how may quantities you want of Matan Masala\n");
				   scanf("%d",&i[1].quantity);
				   printf("You have ordered %d Matan Masala\n",i[1].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   	
			case 3:printf("Enter how may quantities you want of Matan Masala\n");
				   scanf("%d",&i[2].quantity);
				   printf("You have ordered %d Matan Masala\n",i[2].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   	
			case 4:printf("Enter how may quantities you want of Matan Masala\n");
				   scanf("%d",&i[3].quantity);
				   printf("You have ordered %d Matan Masala\n",i[3].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   	
			case 5:printf("Enter how may quantities you want of Matan Masala\n");
				   scanf("%d",&i[4].quantity);
				   printf("You have ordered %d Matan Masala\n",i[4].quantity);
				   printf("Your order has been successfully placed\n\n");		   		   	
				   break;
				   
				   default: printf("Invalid input!!!\n");	
				   break;
			}
			
			printf("Do you want to reload this meny\n");
			printf("Enter 1 for yes and 0 for no\n");
			scanf("%d",&YesNo);
		}while(YesNo!=0);
}

void drink(void){
	
	printf("What do you want\n");
	printf("(1)Soft Drink\n");
	printf("(2)Beer\n");
	printf("(3)Quater\n");
	printf("(0)Nothing\n\n");
	
	printf("Plz enter your choice\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 0:printf("You have ordered nothing\n");
			   break;
		case 1:SoftDrink();
			   break;
		case 2:beer();
			   break;
		case 3:quater();
			   break;
		
	    default:printf("Invalid input!!!\n");	
			    break;
	}
}

void SoftDrink(void){
	
	struct SoftDrink{
		char name[20];
		int price;
		int quantity;
		}i[9];
		
		strcpy(i[0].name,"Coca Cola 220ml");
		i[0].price=20;
		strcpy(i[1].name,"Coca Cola 500ml");
		i[1].price=40;
		strcpy(i[2].name,"Coca Cola 1000ml");
		i[2].price=75;
		strcpy(i[3].name,"Sprite 150ml");
		i[3].price=15;
		strcpy(i[4].name,"Sprite 475ml");
		i[4].price=45;
		strcpy(i[5].name,"Sprite 990ml");
		i[5].price=85;
		strcpy(i[6].name,"Thumbsup 180ml");
		i[6].price=25;
		strcpy(i[7].name,"Thumbsup 550ml");
		i[7].price=50;
		strcpy(i[8].name,"Limka 260ml");
		i[8].price=35;

		
	

	do{	printf("Index\tList\t\tsize\tprice\n");
		printf("(1)\tCoca Cola\t220ml\t20rs\n");
		printf("(2)\tCoca Cola\t500ml\t40rs\n");
		printf("(3)\tCoca Cola\t1000ml\t75rs\n");
		printf("(4)\tSprite\t\t150ml\t15rs\n");
		printf("(5)\tSprite\t\t475ml\t45rs\n");
		printf("(6)\tSprite\t\t990ml\t85rs\n");
		printf("(7)\tThumbsup\t180ml\t25rs\n");
		printf("(8)\tThumbsup\t550ml\t50rs\n");
		printf("(9)\tLimka\t\t260ml\t35rs\n");	
		printf("(0)\tOrder Nothing\t-\t-\n\n");
		
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			
			case 0:printf("You have order nothing\n");
				   break;
				   
			case 1:printf("How many quantites you want Coca Cola(220ml)\n");
				   scanf("%d",&i[0].quantity);
				   printf("You have ordered %d Coca Cola(220ml)\n",i[0].quantity);
				   printf("Your order has been successfully placed\n");
				   break;
				   
			case 2:printf("How many quantites you want Coca Cola(500ml)\n");
				   scanf("%d",&i[1].quantity);
				   printf("You have ordered %d Coca Cola(220ml)\n",i[1].quantity);
				   printf("Your order has been successfully placed\n");
				   break;
				   
			case 3:printf("How many quantites you want Coca Cola(1000ml)\n");
				   scanf("%d",&i[2].quantity);
				   printf("You have ordered %d Coca Cola(220ml)\n",i[2].quantity);
				   printf("Your order has been successfully placed\n");
				   break;
			
			case 4:printf("How many quantites you want Sprite(150ml)\n");
				   scanf("%d",&i[3].quantity);
				   printf("You have ordered %d Coca Cola(220ml)\n",i[3].quantity);
				   printf("Your order has been successfully placed\n");
				   break;
				   
			case 5:printf("How many quantites you want Sprite(475ml)\n");
				   scanf("%d",&i[4].quantity);
				   printf("You have ordered %d Coca Cola(220ml)\n",i[4].quantity);
				   printf("Your order has been successfully placed\n");
				   break;
				   
			case 6:printf("How many quantites you want Sprite(990ml)\n");
				   scanf("%d",&i[5].quantity);
				   printf("You have ordered %d Coca Cola(220ml)\n",i[5].quantity);
				   printf("Your order has been successfully placed\n");
				   break;
			
			case 7:printf("How many quantites you want Thumbsup(180)\n");
				   scanf("%d",&i[6].quantity);
				   printf("You have ordered %d Coca Cola(220ml)\n",i[6].quantity);
				   printf("Your order has been successfully placed\n");
				   break;
				   
			case 8:printf("How many quantites you want Thumbsup(550ml)\n");
				   scanf("%d",&i[7].quantity);
				   printf("You have ordered %d Coca Cola(220ml)\n",i[7].quantity);
				   printf("Your order has been successfully placed\n");
				   break;
				   
			case 9:printf("How many quantites you want Limka(260ml)\n");
				   scanf("%d",&i[8].quantity);
				   printf("You have ordered %d Coca Cola(220ml)\n",i[8].quantity);
				   printf("Your order has been successfully placed\n");
				   break;
				   
			default:printf("Invalid input!!!\n");	
				   break;
		}
		
		printf("\nDo you want to reload this menu\n");
		printf("Enter 1 for yes and 0 for no\n");
		scanf("%d",&YesNo);
		
	}while(YesNo!=0);
}

void beer(void){
	
		struct beer{
		char name[25];
		int price;
		int quantity;
		}i[9];
		
		strcpy(i[0].name,"Tuborg 90");
		i[0].price=135;
		strcpy(i[1].name,"Tuborg 500ml");
		i[1].price=160;
		strcpy(i[2].name,"Tuborg 1beer");
		i[2].price=205;
		strcpy(i[3].name,"Budwiser(mild) 1 beer");
		i[3].price=230;
		strcpy(i[4].name,"Budwiser(strong) 1 beer");
		i[4].price=300;
		strcpy(i[5].name,"Breezer 1 beer");
		i[5].price=220;
		strcpy(i[6].name,"Kingfisher 90");
		i[6].price=145;
		strcpy(i[7].name,"Kingfisher 1 beer");
		i[7].price=250;
		strcpy(i[8].name,"Heineken 1 beer");
		i[8].price=220;
	
	do{
		printf("Index\tList\t\tsize\tprice\n");
		printf("(1)\tTuborg\t\t90\t135rs\n");
		printf("(2)\tTuborg(can)\t500ml\t160rs\n");
		printf("(3)\tTuborg\t\t1beer\t205rs\n");
		printf("(4)\tBudwiser(mild)\t1 beer\t230rs\n");
		printf("(5)\tBudwiser(strong)1 beer\t300rs\n");
		printf("(6)\tBreezer\t\t1 beer\t220rs\n");
		printf("(7)\tKingfisher\t90\t145rs\n");
		printf("(8)\tKingfisheer\t1 beer\t250rs\n");
		printf("(9)\tHeineken\t1 beer\t220rs\n");
		printf("(0)\tOrder Nothing\t-\t-\n\n");
		
		printf("Enter your choice\n");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 0:printf("You have ordered nothing \n\n");
				   break;
			case 1:printf("How may quantities of Tuborg(90) you want to order\n");
				   scanf("%d",&i[0].quantity);
				   printf("\nYou have ordered %d quantities of Tuborg(90)\n",i[0].quantity);
				   printf("Your order has been succcessfully placed\n\n");
				   break;
			case 2:printf("How may quantities of Tuborg(500ml) you want to order\n");
				   scanf("%d",&i[1].quantity);
				   printf("You have ordered %d quantities of Tuborg(500ml)\n",i[1].quantity);
				   printf("Your order has been succcessfully placed\n\n");
				   break;
			case 3:printf("How may quantities of Tuborg(1 beer) you want to order\n");
				   scanf("%d",&i[2].quantity);
				   printf("You have ordered %d quantities of Tuborg(1 beer)\n",i[2].quantity);
				   printf("Your order has been succcessfully placed\n\n");
				   break;
			case 4:printf("How may quantities of Budwiser(mild) you want to order\n");
				   scanf("%d",&i[3].quantity);
				   printf("You have ordered %d quantities of Budwiser(mild)\n",i[3].quantity);
				   printf("Your order has been succcessfully placed\n\n");
				   break;
			case 5:printf("How may quantities of Budwiser(strong) you want to order\n");
				   scanf("%d",&i[4].quantity);
				   printf("You have ordered %d quantities of Budwiser(strong)\n",i[4].quantity);
				   printf("Your order has been succcessfully placed\n\n");
				   break;
			case 6:printf("How may quantities of Brezzer(1 beer) you want to order\n");
				   scanf("%d",&i[5].quantity);
				   printf("You have ordered %d quantities of Breezer(1 beer)\n",i[5].quantity);
				   printf("Your order has been succcessfully placed\n\n");
				   break;
			case 7:printf("How may quantities of Kingfisher(90) you want to order\n");
				   scanf("%d",&i[6].quantity);
				   printf("You have ordered %d quantities of Kingfisher(90)\n",i[6].quantity);
				   printf("Your order has been succcessfully placed\n\n");
				   break;
			case 8:printf("How may quantities of Kingfisher(1 beer) you want to order\n");
				   scanf("%d",&i[7].quantity);
				   printf("You have ordered %d quantities of Kingfisher(1 beer)\n",i[7].quantity);
				   printf("Your order has been succcessfully placed\n\n");
				   break;
			case 9:printf("How may quantities of  Heineken(1 beer) you want to order\n");
				   scanf("%d",&i[8].quantity);
				   printf("You have ordered %d quantities of Heineken(1 beer)\n",i[8].quantity);
				   printf("Your order has been succcessfully placed\n\n");
				   break;
				   
			default:printf("Invalid input!!!\n");	
				   break;	
		}
		
		printf("Do you want to reload the menu\n");
		printf("Enter 1 for yes and 0 for no\n");
		scanf("%d",&YesNo);
	
		
	}while(YesNo!=0);
		
	printf("\nDo you want to order chakna\n");
	printf("Enter 'y' for yes and 'n' for no\n");
	fflush(stdin);
	scanf("%c",&NoYes);
	
	if(NoYes=='y' || NoYes=='Y'){
		chakna();
	}
}

void quater(void){
	
		struct quater{
		char name[25];
		int price;
		int quantity;
		}i[6];
		
		strcpy(i[0].name,"Imperier Blue 90");
		i[0].price=110;
		strcpy(i[1].name,"Imperier Blue 1quater");
		i[1].price=220;
		strcpy(i[2].name,"Royal Stag 90");
		i[2].price=120;
		strcpy(i[3].name,"Royal Stag 1quater");
		i[3].price=240;
		strcpy(i[4].name,"Royal Challange 90");
		i[4].price=90;
		strcpy(i[5].name,"Royal Challange 1quater");
		i[5].price=190;
		
	
	do{
		printf("Index\tName\t\tSize\tPrice\n");
		printf("(1)\tImperier Blue\t90\t110rs\n");
		printf("(2)\tImperier Blue\t1quater\t220rs\n");
		printf("(3)\tRoyal Stag\t90\t120rs\n");
		printf("(4)\tRoyal Stag\t1quater\t240rs\n");
		printf("(5)\tRoyal Challange\t90\t90rs\n");
		printf("(6)\tRoyal Challange\t1quater\t190rs\n");
		printf("(0)\tOrder nothing\t-\t-\n\n");
		
		printf("Enter your choice\n");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 0:printf("You have ordered nothing \n\n");
				   break;
				   
			case 1:printf("Enter the quantities of IB(90) you want\n");
				   scanf("%d",&i[0].quantity);
				   printf("You have ordered %d quantities of IB(90)\n",i[0].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			case 2:printf("Enter the quantities of IB(quater) you want\n");
				   scanf("%d",&i[1].quantity);
				   printf("You have ordered %d quantities of IB(quater)\n",i[1].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			case 3:printf("Enter the quantities of RS(90) you want\n");
				   scanf("%d",&i[2].quantity);
				   printf("You have ordered %d quantities of RS(90)\n",i[2].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			case 4:printf("Enter the quantities of RS(quater) you want\n");
				   scanf("%d",&i[3].quantity);
				   printf("You have ordered %d quantities of RS(quater)\n",i[3].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			case 5:printf("Enter the quantities of Rc(90) you want\n");
				   scanf("%d",&i[4].quantity);
				   printf("You have ordered %d quantities of RC(90)\n",i[4].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			case 6:printf("Enter the quantities of RC(quater) you want\n");
				   scanf("%d",&i[5].quantity);
				   printf("You have ordered %d quantities of RC(quater)\n",i[5].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			default:printf("Invalid input!!!\n");	
				   break;
		}
		
		printf("Do you want to reload this menu\n");
		printf("Enter 1 for yes and 0 for no\n");
		scanf("%d",&YesNo);
		
	}while(YesNo!=0);
	
	printf("\nDo you want chakna\n");
		printf("Enter 'y' for yes and 'n' for no\n");
		fflush(stdin);
		scanf("%c",&NoYes);
		
		if(NoYes!='y' || NoYes!='Y'){
			chakna();
		}
}

void chakna(void){
	
	struct chakna{
		char name[25];
		int price;
		int quantity;
		}i[9];
		
		strcpy(i[0].name,"Boil Shengdana");
		i[0].price=30;
		strcpy(i[1].name,"Tava Shengdana");
		i[1].price=30;
		strcpy(i[2].name,"Nachani Papad");
		i[2].price=20;
		strcpy(i[3].name,"Masala Papad");
		i[3].price=20;
		strcpy(i[4].name,"Karvadi");
		i[4].price=20;
		strcpy(i[5].name,"Matki fry");
		i[5].price=45;
		strcpy(i[6].name,"Soyabean roast");
		i[6].price=60;
		strcpy(i[7].name,"Futane");
		i[7].price=20;
		strcpy(i[8].name,"Moong dal");
		i[8].price=10;
	
	do{
		printf("Index\tList\t\tPrice\n");
		printf("(1)\tBoil Shengdana\t30rs\n");
		printf("(2)\tTava Shengdana\t30rs\n");
		printf("(3)\tNachani Papad\t20rs\n");
		printf("(4)\tMasala Papad\t20rs\n");
		printf("(5)\tKarvadi\t\t20rs\n");
		printf("(6)\tMatki fry\t45rs\n");
		printf("(7)\tSoyabean roast\t60rs\n");
		printf("(8)\tFutane\t\t20rs\n");
		printf("(9)\tMoong dal\t10rs\n");
		printf("(0)\tOrder nothing\t-\n\n");
		
		printf("Enter your choice\n");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 0:printf("You have ordered nothing\n\n");
				   break;
				   
			case 1:printf("How many quantities of Boil Shengdana you want to order\n");
				   scanf("%d",&i[0].quantity);
				   printf("You have ordered %d quantities of Boil Shengdana\n",i[0].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			case 2:printf("How many quantities of Tava Shengdana you want to order\n");
				   scanf("%d",&i[1].quantity);
				   printf("You have ordered %d quantities of Tava Shengdana\n",i[1].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			case 3:printf("How many quantities of Nachani Papad you want to order\n");
				   scanf("%d",&i[2].quantity);
				   printf("You have ordered %d quantities of Nachani Papad\n",i[2].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			case 4:printf("How many quantities of Masala Papad you want to order\n");
				   scanf("%d",&i[3].quantity);
				   printf("You have ordered %d quantities of Masala Papad\n",i[3].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			case 5:printf("How many quantities of Kharvadi you want to order\n");
				   scanf("%d",&i[4].quantity);
				   printf("You have ordered %d quantities of Kharvadi\n",i[4].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			case 6:printf("How many quantities of Matki fry you want to order\n");
				   scanf("%d",&i[5].quantity);
				   printf("You have ordered %d quantities of matki fry\n",i[5].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			case 7:printf("How many quantities of Soyabean Roast you want to order\n");
				   scanf("%d",&i[6].quantity);
				   printf("You have ordered %d quantities of Soyaean Roast\n",i[6].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			case 8:printf("How many quantities of Futane you want to order\n");
				   scanf("%d",&i[7].quantity);
				   printf("You have ordered %d quantities of Futane\n",i[7].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			case 9:printf("How many quantities of Moong dal you want to order\n");
				   scanf("%d",&i[8].quantity);
				   printf("You have ordered %d quantities of Moong dal\n",i[8].quantity);
				   printf("Your order has been successfully placed\n\n");
				   break;
				   
			default:printf("Invalid input!!!\n");	
				   break;	   
		}
		
			printf("Do you want to reload the menu\n");
			printf("Enter 1 for yes and 0 for no\n");
			scanf("%d",&YesNo); 	   	   	   	   	   	   	    
			
	}while(YesNo!=0);
	
}

void lodge(void){
	do{
		printf("Index\tList\t\t\t\tCharges\tDuration\n");
		printf("(1)\tAC Room\t\t\t\t1500rs\tPer nigth\n");
		printf("(2)\tNon AC Room\t\t\t800rs\tPer night\n");
		printf("(3)\tAC Single bed(common room)\t600rs\tPer night\n");
		printf("(4)\tNon AC Single bed(common room)\t350rs\tPer night\n");
		printf("(5)\tAC Room\t\t\t\t2200rs\tPer day\n");
		printf("(6)\tNon AC Room\t\t\t1300rs\tPer day\n");
		printf("(7)\tAC Single bed(common room)\t900rs\tPer day\n");
		printf("(8)\tNon AC Single bed(common room)\t600rs\tPer day\n");
		printf("(0)\tNot booking\t\t\t-\t-\n\n");
		
		printf("Enter your choice\n");
		scanf("%d",&choice);
		
		switch(choice){
			
			case 0:printf("\nYou have not booked room\n\n");
				   break;
			
			case 1:printf("\nHow many rooms you want to book\n");
				   scanf("%d",&quantity);
				   if(quantity>0 && quantity<=6){
				   	   printf("\nYou have successfully booked %d AC room for a night\n",quantity);
				   }
				   else{
				       printf("\nSorry we only have only 6 rooms AC rooms\n");
				   }
				   break;
				   
			case 2:printf("\nHow many rooms you want to book\n");
				   scanf("%d",&quantity);
				   if(quantity>0 && quantity<=6){
				       printf("\nYou have successfully booked %d Non AC room for a night\n",quantity);
				   }
				   else{
				       printf("\nSorry we only have only 6 rooms Non AC rooms\n");
				   }
				   break;
				   
			case 3:printf("\nHow many beds you want to book\n");
				   scanf("%d",&quantity);
				   if(quantity<0 && quantity<=15){
					   printf("\nYou have successfully booked %d AC bed for a night\n",quantity);
				   }
				   else{
				   	   printf("\nSorry we have only 15 AC beds\n");
				   }
				   break;
				   
			case 4:printf("\nHow many beds you want to book\n");
				   scanf("%d",&quantity);
				   if(quantity>0 && quantity<=15){
				   	   printf("\nYou have successfully booked %d Non AC bed for a night\n",quantity);
				   }
				   else{
				   	   printf("\nSorry we have only 15 Non AC beds\n");
				   }
				   break;
				   
			case 5:printf("\nHow many rooms do you want to book\n");
				   scanf("%d",&quantity);
				   if(quantity>0 && quantity<=6){
					   printf("\nFor how many days you want to book The room\n");
					   scanf("%d",&duration);
					   printf("\nYou have successfully booked %d AC room for %d days\n",quantity,duration);
				   }
				   else{
				       printf("\nSorry we have only 6 AC rooms\n");
				   }
				   break;
				   
			case 6:printf("\nHow many rooms do you want to book\n");
				   scanf("%d",&quantity);
				   if(quantity>0 && quantity<=6){
					   printf("\nFor how many days you want to book The room\n");
					   scanf("%d",&duration);
					   printf("\nYou have successfully booked %d Non AC room for %d days\n",quantity,duration);
				   }
				   else{
				       printf("\nSorry we have only 6 Non AC rooms\n");
				   }
				   break;
				   
			case 7:printf("\nHow many beds do you want to book\n");
				   scanf("%d",&quantity);
				   if(quantity>0 && quantity<=15){
					   printf("\nFor how many days you want to book The room\n");
					   scanf("%d",&duration);
					   printf("\nYou have successfully booked %d AC bed for %d days\n",quantity,duration);
				   }
				   else{
				       printf("\nSorry we have only 15 AC beds\n");
				   }
				   break;
				   
			case 8:printf("\nHow many rooms do you want to book\n");
				   scanf("%d",&quantity);
				   if(quantity>0 && quantity<=15){
					   printf("\nFor how many days you want to book The room\n");
					   scanf("%d",&duration);
					   printf("\nYou have successfully booked %d Non AC bed for %d days\n",quantity,duration);
				   }
				   else{
				       printf("\nSorry we have only 15 Non AC beds\n");
				   }
				   break;
				   
			default: printf("Invalid input!!!\n");	
				   break;
		}
		
		printf("\nDo you want to reload the menu\n");
		printf("Enter 1 for yes and 0 for no\n");
		scanf("%d",&YesNo); 	   	   	   	   	   	   	    
					
	}while(YesNo!=0);	
}

void snack(void){
	
	do{
		
		printf("Index\tList\t\tprice\n");
		printf("(1)\tMasala dosa\t50rs\n");
		printf("(2)\tVada pav\t30rs\n");
		printf("(3)\tPoha\t\t30rs\n");
		printf("(4)\tBhaje\t\t20rs\n");
		printf("(5)\tPav bhaji\t40rs\n");
		printf("(6)\tPuri bhaji\t40rs\n");
		printf("(7)\tpatis\t\t30rs\n");
		printf("(8)\tIdli\t\t30rs\n");
		printf("(9)\tMisal pav\t40rs\n");
		printf("(0)\tOrder nothing\t-\n\n");
		
		printf("Enter your choice\n");
		scanf("%d",&choice);

		switch(choice){
			
			case 0:printf("You have ordered nothing\n");
				   break;
				   
			case 1:printf("How many quantities of Masala dosa you want to order\n");
				   scanf("%d",&quantity);
				   printf("\nYou have ordered %d quantities of Masala dosa\n",quantity);
				   printf("Your order has been successfully placed\n");
                   break;			
			
			case 2:printf("How many quantities of Vada pav you want to order\n");
				   scanf("%d",&quantity);
				   printf("\nYou have ordered %d quantities of Vada pav\n",quantity);
				   printf("Your order has been successfully placed\n");
                   break;
                   
            case 3:printf("How many quantities of Poha you want to order\n");
				   scanf("%d",&quantity);
				   printf("\nYou have ordered %d quantities of Poha\n",quantity);
				   printf("Your order has been successfully placed\n");
                   break;
                   
            case 4:printf("How many quantities of Bhaje you want to order\n");
				   scanf("%d",&quantity);
				   printf("\nYou have ordered %d quantities of Bhaje\n",quantity);
				   printf("Your order has been successfully placed\n");
                   break;
                
            case 5:printf("How many quantities of Pav bhaji you want to order\n");
				   scanf("%d",&quantity);
				   printf("\nYou have ordered %d quantities of Pav bhaji\n",quantity);
				   printf("Your order has been successfully placed\n");
                   break;
                   
            case 6:printf("How many quantities of Puri bhaji you want to order\n");
				   scanf("%d",&quantity);
				   printf("\nYou have ordered %d quantities of Bhaji\n",quantity);
				   printf("Your order has been successfully placed\n");
                   break;
                   
            case 7:printf("How many quantities of Patis you want to order\n");
				   scanf("%d",&quantity);
				   printf("\nYou have ordered %d quantities of Patis\n",quantity);
				   printf("Your order has been successfully placed\n");
                   break;
                   
            case 8:printf("How many quantities of Idli you want to order\n");
				   scanf("%d",&quantity);
				   printf("\nYou have ordered %d quantities of Idli\n",quantity);
				   printf("Your order has been successfully placed\n");
                   break;
                   
            case 9:printf("How many quantities of Misal pav you want to order\n");
				   scanf("%d",&quantity);
				   printf("\nYou have ordered %d quantities of Misal pav\n",quantity);
				   printf("Your order has been successfully placed\n");
                   break;
                   
            default: printf("Invalid input!!!\n");	
				   break;
		}
		
		printf("\nDo you want to reload the menu\n");
		printf("Enter 1 for yes and 0 for no\n");
		scanf("%d",&YesNo);
		
	}while(YesNo!=0);
	
}

void mobile(void){
	
	do{
		
		printf("\nindex\tName\t\tprice\n");
		printf("(1)Mobile Repairing \tas fault \n");
		printf("(2)Mobile Cover \t100rs\n");
		printf("(3)Screen Guard\t \t100rs\n");
		printf("(4)Bluetooth Earphone\t130rs\n");
		printf("(5)Selfie Stick    \t140rs\n");
		printf("(0)For order nothing\t-\n\n");
		
		printf("Plz enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 0:printf("You have ordered nothing\n\n");
				   break;
				   
			case 1:printf("you have select MOBILE REPAIRING \n");
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
			case 2:printf("you have ordered MOBILE COVER\n");
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
			case 3:printf("you have ordered SCREEN GUARD\n");
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
			case 4:printf("you have ordered BLUETOOTH EARPHONES\n");
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
			case 5:printf("you have ordered SELFIE STICK\n");
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
			default: printf("Invalid input!!!\n\n");	
				   break;	   	   
		}
		
		printf("Do you want to reload\n");
		printf("Enter 1 for yes and 0 for no \n");
		fflush(stdin);
		scanf("%d",&YesNo);
	}while(YesNo!=0);
}

void panshop(void){                          
	
	printf("\nenter 1 for PAN MASALA \n");
	printf("enter 2 for GUTKHA MASALA\n\n");
	
	printf("plz enter your choice\n");
	fflush(stdin);
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:pan();
		       break;
		case 2:gutkha();
		       break;
		default:printf("Invalid input!!!\n");	
				break;
	}
		
}

void pan(void){

	do{
		
		printf("\nindex\tName\t\tprice\n");
		printf("(1)\tPAN MASALA    \t5rs\n");
		printf("(2)\tCHOCKLATE PAN \t6$rs\n");
		printf("(3)\tSWEET PAN     \t10rs\n");
		printf("(4)\tBANARASI PAN  \t20rs\n");
		printf("(5)\tMEETHA PAN\t15rs\n");
		printf("(0)\tOrder nothing\t-\n\n");
		
		printf("Plz enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 0:printf("You have ordered nothing\n\n");
				   break;
			case 1:printf("you have ordered PAN MASALA\n");
			printf("Enter how many quantities you want of PAN MASALA\n");
				   scanf("%d",&quantity);
				   
				   printf("you have ordered %d pan masala\n",quantity);
				   printf("your order has been successfully placed\n\n");
				   break;
			case 2:printf("you have ordered CHOCKLATE PAN\n");
			printf("Enter how many quantities you want of CHOCKLATE PAN\n");
				   scanf("%d",&quantity);
				   printf("you have ordered %d CHOCKLATE PAN\n",quantity);
				   printf("your ordered have been successfully placed\n\n");
				   break;
			case 3:printf("you have ordered SWEET PAN\n");
		        	printf("Enter how many quantities you want of SWEET PAN\n");
				   scanf("%d",&quantity);
				   printf("you have ordered %d SWEET PAN\n",quantity);
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
				   
			case 4:printf("you have ordered BANARASI PAN\n");
				printf("Enter how many quantities you want of BANARASI PAN\n");
				   scanf("%d",&quantity);
				   printf("you have ordered %d BANARASI PAN\n",quantity);
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
	    	case 5:printf("you have ordered MEETHA PATA SADA PAN\n");
	    	printf("Enter how many quantities you want of MEETHA PATA SADA PAN\n");
				   scanf("%d",&quantity);
				   printf("you have ordered %d MEETHA PATA SADA PAN\n",quantity);
				   printf("your order has been successfully placed\n\n");
				   break;
				   
			default:printf("Invalid input!!!\n");	
				   break;	   	  
}
		
		printf("Do you want to reload\n");
		printf("Enter 1 for yes and 0 for no \n");
		fflush(stdin);
		scanf("%d",&YesNo);
	}while(YesNo!=0);
}

void gutkha(void){
	
	do{
		
		printf("\nindex\tName\t\t\tprice\n");
		printf("(1)\tVIMAL MASALA      \t5rs\n");
		printf("(2)\tGOA GUTKHA MASALA \t6$rs\n");
		printf("(3)\tRAJNIWAS MASALA   \t5rs\n");
		printf("(4)\tHIRA GUTKHA       \t5rs\n");
		printf("(5)\tRMD GUTKHA MASALA \t10rs\n");
		printf("(0)\tOrder nothing    \t-\n\n");
		
		printf("Plz enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 0:printf("You have ordered nothing\n\n");
				   break;
				   
			case 1:printf("Enter how many quantities you want of VIMAL MASALA\n");
				   scanf("%d",&quantity);
				   printf("you have ordered %d VIMAL MASALA\n",quantity);
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
			case 2:printf("Enter how many quantities you want of GOA GUTKHA MASALA\n");
				   scanf("%d",&quantity);
				   printf("you have ordered %d GOA GUTKHA MASALA\n",quantity);
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
			case 3:printf("Enter how many quantities you want of RAJNIWAS MASALA\n");
				   scanf("%d",&quantity);
				   printf("you have ordered %d RAJNIWAS MASALA\n",quantity);
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
			case 4:printf("Enter how many quantities you want of HIRA GUTKHA\n");
				   scanf("%d",&quantity);
				   printf("you have ordered %d HIRA GUTKHA\n",quantity);
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
	    	case 5:printf("Enter how many quantities you want of RMD GUTKHA MASALA\n");
				   scanf("%d",&quantity);
				   printf("you have ordered %d RMD GUTKHA MASALA\n",quantity);
				   printf("your ordered have been successfully placed\n\n");
				   break;
				   
			default:printf("Invalid input!!!\n");	
				   break;   	   
}
		
		printf("Do you want to reload\n");
		printf("Enter 1 for yes and 0 for no \n");
		fflush(stdin);
		scanf("%d",&YesNo);
	}while(YesNo!=0);
}

void delivery(void){
	
	printf("\nWhat do you want to order\n");
	
		do{
		printf("\nEnter 1 for lunch\n");
		printf("Enter 2 for drink\n");
		printf("Enter 3 for snacks\n");
		printf("Enter 0 for order nothing\n\n");
		
		printf("plz enter your choice\n");
		fflush(stdin);
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 0:printf("You have ordered nothing\n");
				   break;
			case 1:lunch();
				   break;
			case 2:drink();
				   break;
			case 3:snack();
				   break;
		    default:printf("Invalid input!!!\n");	
				   break;	   	   	   
		}
		printf("\nDo you want to reload the main menu\n");
		printf("Enter 1 for yes and 0 for no\n");
		scanf("%d",&YesNo);
	}while(YesNo!=0);
		
}

void waiter(int WaiterName){
	
	
	switch(WaiterName){
		
		case 1:printf("\nRohit is appointed to your table\n");
			   break;
			   
	    case 2:printf("\nVirat is appointed to your table\n");
	    	   break;
	    	   
	    case 3:printf("\nSurya is appointed to your table\n");
	    	   break;
	    	   
	    case 4:printf("\nSachin is appointed to your table\n");
	    	   break;
	    	   
	    case 5:printf("\nSunil is appointed to your table\n");
	    	   break;
	    	   
	    case 6:printf("\nRaj is appointed to your table\n");
	    	   break;
	}
}
