#include <stdio.h>
#include <string.h>

struct billing
{
	char item_name[20];
	int qty;
	int total_price;
}q[100];

int bill_amt=0,num;

void menu()
{
	int i,n;
	printf("------------------------------>              WELCOME TO GIFZY              <------------------------------------\n\n");
	printf("-----------------------------------------------------------------------------------------------------------------\n");
	printf("                             ITEM CODE    |      ITEM NAME     |      PRICE\n");
	printf("-----------------------------------------------------------------------------------------------------------------\n");
    printf("                                          |                    |                                                 \n");
	printf("                               [1]        |  Decorative Mug    |     Rs.199\n");
	printf("                               [2]        |  Scented Candle    |     Rs.249\n");
	printf("                               [3]        |  Diarie            |     Rs.149\n");
	printf("                               [4]        |  Gift Card         |     Rs.99\n") ;
	printf("                               [5]        |  Bouquet           |     Rs.399\n");
	printf("                               [6]        |  Soft Toy          |     Rs.799\n");
	printf("                               [7]        |  Poster            |     Rs.499\n");
	printf("                               [8]        |  Painting          |     Rs.999\n");
	printf("                               [9]        |  Keychain          |     Rs.149\n");
	printf("                               [10]       |  Dark Chocolate    |     Rs.100\n");
	printf("-----------------------------------------------------------------------------------------------------------------\n\n\n");
	printf("Enter the number of gifts you would like to buy : ");
	scanf("%d", &n);
	num=n;
	for(i=0;i<n;i++)
	{
		int ch;
	printf("\n\nEnter the item code :");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
			{
				char gift_name[]={"Decorative Mug"};
				printf("How many %s do you need?", gift_name);
				scanf("%d", &q[i].qty);
				q[i].total_price=q[i].qty*199;
				bill_amt+=q[i].total_price;
				strcpy(q[i].item_name,gift_name);
				break; 
			}
		case 2:
			{
				char gift_name[]={"Scented Candle"};
				printf("How many %s do you need?", gift_name);
				scanf("%d", &q[i].qty);
				q[i].total_price=q[i].qty*249;
				bill_amt+=q[i].total_price;
				strcpy(q[i].item_name,gift_name);
				break; 
			}
		case 3:
			{
				char gift_name[]={"Diarie"};
				printf("How many %s do you need?", gift_name);
				scanf("%d", &q[i].qty);
				q[i].total_price=q[i].qty*149;
				bill_amt+=q[i].total_price;
				strcpy(q[i].item_name,gift_name);
				break; 
			}
		case 4:
			{
				char gift_name[]={"Gift Card"};
				printf("How many %s do you need?", gift_name);
				scanf("%d", &q[i].qty);
				q[i].total_price=q[i].qty*99;
				bill_amt+=q[i].total_price;
				strcpy(q[i].item_name,gift_name);
				break; 
			}
		case 5:
			{
				char gift_name[]={"Bouquet"};
				printf("How many %s do you need?", gift_name);
				scanf("%d", &q[i].qty);
				q[i].total_price=q[i].qty*399;
				bill_amt+=q[i].total_price;
				strcpy(q[i].item_name,gift_name);
				break; 
			}
		case 6:
			{
				char gift_name[]={"Soft Toy"};
				printf("How many %s do you need?", gift_name);
				scanf("%d", &q[i].qty);
				q[i].total_price=q[i].qty*799;
				bill_amt+=q[i].total_price;
				strcpy(q[i].item_name,gift_name);
				break; 
			}
		case 7:
			{
				char gift_name[]={"Poster"};
				printf("How many %s do you need?", gift_name);
				scanf("%d", &q[i].qty);
				q[i].total_price=q[i].qty*499;
				bill_amt+=q[i].total_price;
				strcpy(q[i].item_name,gift_name);
				break; 
			}
		case 8:
			{
				char gift_name[]={"Painting"};
				printf("How many %s do you need?", gift_name);
				scanf("%d", &q[i].qty);
				q[i].total_price=q[i].qty*999;
				bill_amt+=q[i].total_price;
				strcpy(q[i].item_name,gift_name);
				break; 
			}
		case 9:
			{
				char gift_name[]={"Keychain"};
				printf("How many %s do you need?", gift_name);
				scanf("%d", &q[i].qty);
				q[i].total_price=q[i].qty*149;
				bill_amt+=q[i].total_price;
				strcpy(q[i].item_name,gift_name);
				break; 
			}
		case 10:
			{
				char gift_name[]={"Dark Chocolate"};
				printf("How many %s do you need?", gift_name);
				scanf("%d", &q[i].qty);
				q[i].total_price=q[i].qty*100;
				bill_amt+=q[i].total_price;
				strcpy(q[i].item_name,gift_name);
				break; 
			}
	}
	}
	
}
void wrap()
{
	int ans;
	printf("Do you wish to wrap your gift ?\n");
	printf("1.Yes\n2.No\n");
	scanf("%d",&ans);
	switch(ans)
	{
		case 1:
			{
				printf("That would charge you an extra Rs.20 !");
				bill_amt +=20;
				break;
			}
		case 2:
			{
				printf("okay");
				break;
			}
	}
}

void display()
{
	int i;
	printf("\n\n\nYOUR BILL :");
	for(i=0;i<num;i++)
	{
	printf("\n\n                                      %s---------%d---------Rs.%d\n",q[i].item_name,q[i].qty,q[i].total_price);
	}
	wrap();
	printf("\n\n-----------------------------------------------------------------------------------------------------------------\n\n\n");
	printf("\n\n                                        YOUR TOTAL BILL AMOUNT : Rs.%d",bill_amt);
	printf("\n\n                                          THANKYOU FOR YOUR PURCHASE\n\n");
	printf("-----------------------------------------------------------------------------------------------------------------\n\n\n");
}

void main()
{
	int i;
	menu();
	display();	
}
	


