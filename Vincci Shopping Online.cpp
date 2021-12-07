#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct web
{
char newname[30], newpassword[30];
}w[99];
void registration();
char password();
void login(char name[], char pass);
void menuscreen();
float category();
float paymentmethod(float totalCost);
void invoicereceipt(char full[], int phonenumber, char add[]);
void invoicetax(float totalCost, char full[], int phonenumber, char add[]);
void receipt(char full[], int phonenumber, char add[], float totalCost);

int main()
{
	registration();
	return 0;
}
char password()
{
	char c, newpassword[30];
	int i, z=0;
	printf("Password>>");
	while((c=getch())!=13)
    {
    w[i].newpassword[z++]=c;
    printf("%c",'*');
    }
    if (z<8)
    {
    	printf("\nMinimum Value is 8 character\nPlease re-enter the password\n");
    	password();
    }
    if(z>15)
    {
    	printf("\nMaximum Value is 15 character\nPlease re-enter the password\n");
    	password();
	}
}
void registration()																														//fx registration
{
	int  j, l, m, phonenumber,select;
	float totalCost;
	char  fullname[100], address[100], newname[30], newpassword;
	printf("\n\n\n\n\n\t\t\t\tWELCOME TO MY VINCCI ONLINE WEBSITE");
	printf("\n\t\t\t\t===================================\n\n");
	printf("\n\n\t\t\t\t  Press Enter to proceed...!!");
	if(getch()==13)
	system("cls");
	/*printf("\n\n\n\n\n\t\t\t\tWELCOME TO MY VINCCI ONLINE WEBSITE");
	printf("\n\t\t\t\t===================================\n\n");
	printf("\n\n\t\t\t\t1. LOGIN\t\t2. REGISTER");
	printf("\n\n\n\t\t\t\tENTER YOUR CHOICE: ");
	scanf("%d",&select);
	system("cls");
	
	if(select==2)
	{*/
	printf("\n\n");
	printf("Full Name>>");
	gets(fullname);
	l=strlen(fullname);
	printf("Address>>");
	gets(address);
	m=strlen(address);
	printf("Phone Number>> +60");
	scanf("%d",&phonenumber);
	printf ("Username>>");
	scanf("%s",newname);
	newpassword=password();
	system("cls");
	login(newname, newpassword);
	menuscreen();
	totalCost=category();
	paymentmethod(totalCost);
	invoicereceipt(fullname, phonenumber, address);
	invoicetax(totalCost,fullname, phonenumber, address);
	receipt(fullname, phonenumber, address, totalCost);	
	}
	
	//else if(select==1)
	//{
	
	
void login(char name[], char pass)
{
	int i, j, z=0, phonenumber;
	char c, fullname[100], address[100], loginName[30], loginPass[30];
	
	printf("Enter login name>>");
	scanf("%s",loginName);
	printf("Enter login password>>");
	while((c=getch())!=13)
    {
    loginPass[z++]=c;
    printf("%c",'*');
	}
	i=strcmp(name,loginName);
	if(i==0)
	{
		j=strcmp(loginPass,w[i].newpassword);
		if (j==0)
		{
			system("cls");
			printf("Your member's card number is VC-228916");
		}
		if(!(j==0))
		{
			printf("\nInvalid username or password\n");
			system("pause");
			system("cls");
			login(name, pass);
		}
	}
	if(!(i==0))
	{
		printf("\nInvalid username or password\n\n");
		system("pause");
		system("cls");
		login(name, pass);
	}
}
void menuscreen()																												//fx menuscreen will call category fx
{
	printf("\n*        * *** **   ***  ***   ***   ***  ");
	printf("\n *      *   *   **   *  *   * *   *   *   ");
	printf("\n  *    *    *   * *  *  *     *       *   ");
	printf("\n   *  *     *   *  * *  *   * *   *   *   ");
	printf("\n    **     *** ***  **   ***   ***   ***  ");
	printf("\n\n");
	printf("Shoppers offers big savings for you guys with\nthe help to limit your budget to buy groceries in\nour store. Today, grocery shopping at Vincci Shopping Group\nhas never been easier with online grocery shopping\nwith our special Vincci Card Number");
	printf("\n\n");
	system("pause");
	system ("cls");
}
float limitbudget()																														//fx limit budget
{
	float limit;
	printf("How much limit of your budget?");
	printf("\nEnter your value >>> RM ");
	scanf("%f", &limit);
	while(limit<=0)
	{
		printf("\n\n\t\tINVALID INPUT !!!");
		printf("\n\t\tPlease re-enter your limit budget !");
		printf("\n\n");
		system("pause");
		system("cls");
		printf("\n\n\t\tHow much limit of your budget?");
		printf("\n\n\tEnter your value >>> RM ");
		scanf("%f", &limit);
	}

	return limit;
}
float paymentmethod(float totalCost)																									//fxpayment 
{
	int k, paymethod,selectbank,accountnumber, phonenumber;
	char namebank[50];
	
	printf("Choose Your Payment Method : \n",paymethod);
	printf("\n\t1. Online Banking, PRESS 1");
	printf("\n\t2. Cash On Delivery, PRESS 2\n");
	scanf("%d",&paymethod);
	system("cls");
	if(paymethod==1)
	{
	printf("WELCOME TO ONLINE BANKING\n"),
	printf("1. Maybank >> Press 1\n");
	printf("2. Bank Islam >> Press 2\n");
	printf("3. CIMB bank >> Press 3\n");
	printf("4. Back >> Press 4");
	printf("\nSelect Your Choosen Number :");
	scanf("%d",&selectbank);
	system("cls");
	if (selectbank==4)
	{
	paymentmethod(totalCost);
	}
	while (!(selectbank==1||selectbank==4||selectbank==2||selectbank==3))
	{
	printf("Invalid input!!\n\n");
	printf("WELCOME TO ONLINE BANKING\n"),
	printf("\nSelect Your Bank : \n",selectbank);
	printf("1. Maybank >> Press 1\n");
	printf("2. Bank Islam >> Press 2\n");
	printf("3. CIMB bank >> Press 3\n");
	printf("4. Back >> Press 4");
	printf("\nSelect Your Choosen Number :");
	scanf("%d",&selectbank);
	}
	if(selectbank==1||selectbank==2||selectbank==3)
	{
	printf("\nEnter Your Account Number >>" );
	scanf("%d",&accountnumber);
	printf("\n\nYour bank will deal for the deduction with us. Thank You !!\n");
	system("pause");
	system("cls");
}
	}
	else if(paymethod==2)
	{
	printf("CASH ON DELIVERY\n");
	printf("Total Cost is %.2f", totalCost);
	}
	while(!(paymethod==1||paymethod==2))
	{
	printf("INVALID INPUT , YOU NEED RE-ENTER PAYMENT METHOD\n\n");
	paymentmethod(totalCost);
	}
}
void invoicereceipt(char full[], int phonenumber, char add[])																									// fx caller for invoice and receipt
{
	printf("\n\nYour card number : VC-228916");
	printf("\nYour name is %s",full);
	printf("\nYour phone number : +60%d",phonenumber);
	printf("\nYour address : %s",add);
	printf("\n\nProceed for your invoice tax and receipt\n");
	system("pause");
	system("cls");
}
void invoicetax(float totalCost, char full[], int phonenumber, char add[])								//fx for invoice
{
	printf("\n\n INVOICE TAX : VC-228916");
	printf("\n\tName         : %s", full);
	printf("\n\tPhone number : +60%d", phonenumber);
	printf("\n\tAddress       : %s", add);			
	printf("\n\nYour total price that need to pay : RM %.2f", totalCost);
	printf("\n\n");
	system("pause");
	system("cls");
}
void receipt(char full[], int phonenumber, char add[], float totalCost)							//fx for receipt
{
	printf("\n\n\tRECEIPT NUMBER : VC-228916");
	printf("\n\t\tName         : %s", full);				//nurin
	printf("\n\t\tPhone number : +60%d", phonenumber);		//nurin
	printf("\n\t\tAddress       : %s", add);			//nurin
	printf("\n\n\tYour total price that will be deducted : RM %.2f", totalCost);		//atili
	printf("\n\n");
	
	system("pause");
	system("cls");
	
	printf("\n\n\t\t\t\tYour item will be delivered once we got the payment :)\n\n\t\t\t\tThank you for having us :)");
}//scan line yg tk guna
float category()																														//fxcategory include the limit inside
{
	static float totalCost,cost[39],limit;
	int i,j,opt,c=1,a[39];

	limit = limitbudget();
	for(i=0;i<39;i++)
	a[i]=0;
 char str[100];
 char items[39][100]={"Hawaiian Chicken Pizza(15.4 oz)",
 "Chicken Nuggets (15g)",
 "Hot Spicy Sausages (10g)",
 "Mixed vegetables(100g)",
 "Everyday Value Minced Meat(400g)",
 "Neapolitan Ice cream(1.5L)",
 "Gardenia Original Classic Jumbo",
 "7Days",
 "DailyBakers",
 "Butterscotch",
 "Chocolate Raisins",
 "Wholemeal",
 "Lovely Bread",
 "Yummy Bread",
 "Bread Pasta",
 "Condensed milk",
 "Yogurt",
 "Cheese, cheddar",
 "Butter",
 "Whipped cream",
 "Eggs",
 "Evaporated Milk",
 "Soaps",
 "Detergents",
 "Broom",
 "Mop",
 "Brush",
 "Bleaches",
 "Roasted Beans",
 "Spaghetti Paste",
 "Beef Stew Ounce Can",
 "Tomato Soup",
 "Shampoo",
 "Toothpaste",
 "Body Lotion",
 "Body Mist",
 "Deodorant",
 "Facial Tissue",
 "Cotton Swabs"
 };
 do
 {
  //C is 1 by default
  if(c==1)
  {
  printf("Enter\n1 - Frozen Foods\n2 - Bakery and Bread\n3 - Dairy, Cheese and Eggs\n4 - Cleaners\n5 - Canned Goods\n6 - Personal Care\nAny other number to exit\n");
  scanf("%d",&opt);
  switch(opt)
  {
   case 1:
   {
    int frozenFoods;
    printf("Enter\n1 - Hawaiian Chicken Pizza(15.4 oz) : RM 10.95\n");
	printf("2 - Chicken Nuggets(15g) : RM 8.90\n");
	printf("3 - Hot Spicy Sausages(10g) : RM 6.50\n");
	printf("4 - Mixed Vegetables(5g) : RM 8.00\n");
	printf("5 - Everyday Value Minced Meat(400g) : RM 5.99\n");
	printf("6 - Neopolitan Ice Cream (1.5L): RM 6.29\n");
	printf("Any other number to list of selected items\n");
    scanf("%d", &frozenFoods);
    cost[0]= 10.95;
    cost[1]= 8.90;
    cost[2]= 6.50;
    cost[3]=8.00;
    cost[4]=5.99;
    cost[5]=6.29;
    
    switch(frozenFoods)
    {
     case 1:
     {
      int num;
      printf("Hawaiian Chicken Pizza(15.4oz):RM 10.95 will be added on your cart. Are you sure to buy this item? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[0]++;
       totalCost+=10.95;
      }
      break;
     }
     case 2:
     {
      int num;
      printf(" Chicken Nuggets(15g)>>RM 8.90 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[1]++;
       totalCost+=8.90;
      }
      break;
      
     }
     case 3:
     {
      int num;
      printf(" Hot Spicy Sausages(10g)>>RM 6.50 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[2]++;
       totalCost+=6.50;
      }
      break;
     }
     case 4:
    {
      int num;
      printf(" Mixed Vegetables(5g)>>RM 8.00 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[3]++;
       totalCost+=8.00;
      }
      break;
    }
    case 5:
    {
      int num;
      printf(" Everyday Value Minced Meat(400g)>>RM 5.99 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[4]++;
       totalCost+=5.99;
      }
      break;
	}
	case 6:
	{
	  int num;
      printf(" Neopolitan Ice Cream (1.5L)>>RM 6.29 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[5]++;
       totalCost+=6.29;
      }
      break;
	}
     default:
	 {
      printf("Exit from Category: Frozen Foods\n");
      	system("pause");
 	system("cls");
      break;
     }
     
    }
    break;
   }
   case 2:
   {
    int bakeryBread;
    printf("Enter\n1 - Gardenia Original Classic Jumbo : RM 3.55\n");
	printf("2 - 7Days : RM 2.30\n");
	printf("3 - Dailybakers : RM 3.20\n");
	printf("4 - Butterscotch : RM 3.15\n");
	printf("5 - Chocolate Raisins : RM 2.95\n");
	printf("6 - Wholemeal : RM 3.30\n");
	printf("7 - Lovely Bread: RM 2.55\n");
	printf("8 - Yummy Bread : RM 2.30\n");
	printf("9 - Bread Pasta : RM 3.10\n");
	printf("Any other number to list of selected items\n");
    scanf("%d",&bakeryBread);
    cost[6]= 3.55;
    cost[7]= 2.30;
    cost[8]= 3.20;
    cost[9]= 3.15;
    cost[10]= 2.95;
    cost[11]= 3.30;
    cost[12]= 2.55;
    cost[13]= 2.30;
    cost[14]= 3.10;
    
    switch(bakeryBread)
    {
     case 1:
     {
      int num;
      printf("Gardenia Original Classic Jumbo>>RM 3.55 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n ");
      scanf("%d",&num);
      if(num==1)
      {
       a[6]++;
       totalCost+=3.55;
      }
      break;
     }
     case 2:
     {
      int num;
      printf("7Days>>RM 2.30 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[7]++;
       totalCost+=2.30;
      }
      break;
     }
     case 3:
     {
      int num;
      printf("DailyBakers>>RM 3.20 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[8]++;
       totalCost+=3.20;
      }
      break;
     }
     case 4:
    {
      int num;
      printf("Butterscotch>>RM 3.15 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[9]++;
       totalCost+=3.15;
      }
      break;
	}
	case 5:
	{
	  int num;
      printf("Chocolate Raisins>>RM 2.95 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[10]++;
       totalCost+=2.95;
      }
      break;
	}
	case 6:
	{
	  int num;
      printf("Wholemeal>>RM 3.30 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[11]++;
       totalCost+=3.30;
      }
      break;
	}
	case 7:
	{
	  int num;
      printf("Lovely Bread>>RM 2.55 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[12]++;
       totalCost+=2.55;
      }
      break;
	}
	case 8:
	{
	 int num;
      printf("Yummy Bread>>RM 2.30 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[13]++;
       totalCost+=2.30;
      }
      break;		
	}
	case 9:
	{
		int num;
      printf("Bread Pasta>>RM 3.10 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[14]++;
       totalCost+=3.10;
      }
      break;		
	}
     default:
	 {
      printf("Exit from Category: Bakery & Breads\n");
      break;
     }
    }
    break;
   }
   case 3:
   {
    int dairy;
    printf("Enter\n1 - Condensed Milk : RM 2.55\n");
	printf("2 - Yogurt: RM 1.25\n");
	printf("3 - Cheese & cheddar : RM 2.30\n");
	printf("4 - Butter : RM 3.00\n");
	printf("5 - Whipped Cream Spray: RM 4.10\n");
	printf("6 - Eggs(1 dozen): RM 13.95\n");
	printf("7 - Evaporated Milk: RM 2.30\n");
	printf("Any other number to list of selected items\n");
    scanf("%d",&dairy);
    cost[15]= 2.55;
    cost[16]= 1.25;
    cost[17]= 2.30;
    cost[18]= 3.00;
    cost[19]= 4.10;
    cost[20]= 13.95;
    cost[21]= 2.30;
    
    switch(dairy)
    {
     case 1:
     {
      int num;
      printf("Condensed Milk>>RM 2.55 will be added on your cart. Are you sure to buy this item ?(Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[15]++;
       totalCost+=2.55;
      }
      break;
     }
     case 2:
     {
      int num;
      printf("Yogurt>>RM 1.25 will be added on your cart. Are you sure to buy this item ?(Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[16]++;
       totalCost+=1.25;
      }
      break;
     }
     case 3:
     {
      int num;
      printf("Cheese & cheddar>>RM 2.30 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[17]++;
       totalCost+=2.30;
      }
      break;
     }
     case 4:
    {
      int num;
      printf("Butter >>RM 3.00 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[18]++;
       totalCost+=3.00;
      }
      break;	
    }
     case 5:
    {
      int num;
      printf("Whipped cream>>RM 4.10 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[19]++;
       totalCost+=4.10;
      }
      break;	
	}
	case 6:
	{
	  int num;
      printf("Eggs(1 dozen)>>RM 13.95 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[20]++;
       totalCost+=13.95;
      }
      break;
	}
	case 7:
	{
	  int num;
      printf("Evaporated Milk>>RM2.30 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[21]++;
       totalCost+=2.30;
      }
      break;
	}
     default:{
      printf("\n from Category: Dairy, Cheese, Eggs\n");
      break;
     }
    }
    break;
   }
   case 4:
   	{
   	int cleaners;
    printf("Enter\n1 - Soaps(50g) : RM 2.55\n");
	printf("2 - Detergent: RM 8.95\n");
	printf("3 - Broom : RM 2.30\n");
	printf("4 - Mop : RM 3.00\n");
	printf("5 - Brush : RM 4.25\n");
	printf("6 - Bleaches : RM 13.95\n");
	printf("Any other number to list of selected items\n");
    scanf("%d",&cleaners);
    cost[22]= 2.55;
    cost[23]= 8.95;
    cost[24]= 2.30;
    cost[25]= 3.00;
    cost[26]= 4.25;
    cost[27]= 13.95;
    
    switch(cleaners)
    {
     case 1:
     {
      int num;
      printf("Soaps>>RM2.55 will be added on your cart. Are you sure to buy this item ?(Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[22]++;
       totalCost+=2.55;
      }
      break;
     }
     case 2:
     {
      int num;
      printf("Detergent>>RM 8.95 will be added on your cart. Are you sure to buy this item ?(Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[23]++;
       totalCost+=8.95;
      }
      break;
     }
     case 3:
     {
      int num;
      printf("Broom>>RM 2.30 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[24]++;
       totalCost+=2.30;
      }
      break;
     }
     case 4:
    {
      int num;
      printf("Mop>>RM 3.00 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[25]++;
       totalCost+=3.00;
      }
      break;	
    }
     case 5:
    {
      int num;
      printf("Brush>>RM 4.10 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[26]++;
       totalCost+=4.10;
      }
      break;	
	}
	case 6:
	{
	  int num;
      printf("Bleaches >>RM 13.95 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[27]++;
       totalCost+=13.95;
      }
      break;
	}
	
     default:{
      printf("\n from Category: Cleaners\n");
      break;
     }
      }
    break;
	   }
	   
	case 5:
	{	
	int cannedGoods;
    printf("Enter\n1 - Roasted Beans : RM 2.55\n");
	printf("2 - Spaghetti Paste : RM 3.10\n");
	printf("3 - Beef Stew Ounce : RM 3.30\n");
	printf("4 - Tomato Soup : RM 3.00\n");
	printf("Any other number to list of selected items\n");
    scanf("%d",&cannedGoods);
    cost[28]= 2.55;
    cost[29]= 3.10;
    cost[30]= 3.30;
    cost[31]= 3.00;
   
    switch(cannedGoods)
    {
     case 1:
     {
      int num;
      printf("Roasted Beans>>RM2.55 will be added on your cart. Are you sure to buy this item ?(Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[28]++;
       totalCost+=2.55;
      }
      break;
     }
     case 2:
     {
      int num;
      printf("Spaghetti Paste>>RM 3.10 will be added on your cart. Are you sure to buy this item ?(Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[29]++;
       totalCost+=3.10;
      }
      break;
     }
     case 3:
     {
      int num;
      printf("Beef Stew Ounce>>RM 3.30 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[30]++;
       totalCost+=3.30;
      }
      break;
     }
     case 4:
    {
      int num;
      printf("Tomato Soup>>RM 3.00 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[31]++;
       totalCost+=3.00;
      }
      break;	
	}
	
     default:
	 {
      printf("\n from Category:Canned Goods\n");
      break;
     }
      }
      break;
  }
    case 6:
    {	
    int personalCare;
    printf("Enter\n1 - Shampoo(1.5L) : RM 8.55\n");
	printf("2 - Toothpaste: RM 3.95\n");
	printf("3 - Body Lotion : RM 2.55\n");
	printf("4 - Body Mist : RM 3.50\n");
	printf("5 - Deodorant : RM 3.25\n");
	printf("6 - Facial Tissue : RM 1.50\n");
	printf("7 - Cotton Swabs : RM 1.30\n");
	printf("Any other number to list of selected items\n");
    scanf("%d",&personalCare);
    cost[32]= 8.55;
    cost[33]= 3.95;
    cost[34]= 2.55;
    cost[35]= 3.50;
    cost[36]= 3.25;
    cost[37]= 1.50;
    cost[38]= 1.30;
    
    switch(personalCare)
    {
     case 1:
     {
      int num;
      printf("Shampoo>>RM8.55 will be added on your cart. Are you sure to buy this item ?(Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[32]++;
       totalCost+=8.55;
      }
      break;
     }
     case 2:
     {
      int num;
      printf("Toothpaste>>RM 3.95 will be added on your cart. Are you sure to buy this item ?(Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[33]++;
       totalCost+=3.95;
      }
      break;
     }
     case 3:
     {
      int num;
      printf("Body Lotion >>RM 2.55 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[34]++;
       totalCost+=2.55;
      }
      break;
     }
     case 4:
    {
      int num;
      printf("Body Mist >>RM 3.50 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[35]++;
       totalCost+=3.50;
      }
      break;	
    }
     case 5:
    {
      int num;
      printf("Deodorant >>RM 3.25 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[36]++;
       totalCost+=3.25;
      }
      break;	
	}
	case 6:
	{
	  int num;
      printf("Facial Tissue>> RM 1.50 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[37]++;
       totalCost+=1.50;
      }
      break;
	}
	case 7:
	{
	  int num;
      printf("Cotton Swabs>> RM 1.30 will be added on your cart. Are you sure to buy this item ? (Enter(YES>>1//NO>>Any Number)\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[38]++;
       totalCost+=1.30;
      }
      break;
	}
	
     default:{
      printf("\n from Category: Cleaners\n");
      break;
     }
      }
      break;
  }
   default:
   {
    printf("Enter Valid Categories Choice\n");
    break;
   }
  }
  system("cls");
  printf("\nVincci's cart\n");
  printf(" _______________________________________________________________________________________ \n");
  printf("|   Id  |                 Items                       |   Quantity    |       Cost      |\n");
  printf("|---------------------------------------------------------------------------------------|\n");
  for(i=0;i<39;i++)
  {
   if(a[i]!=0)
   {
   	printf("|       |                                             |               |                 |\n");
	printf("|%7d|%45s|%15d|%17.2f|\n",i,items[i],a[i],(cost[i]*a[i]));
	
   }
  }
  if (totalCost>limit)
  {
  	printf("Total Cost: RM %.2f\n",totalCost);
  	printf("YOU ARE OVER YOURs LIMIT!\n");
  	printf("If you wish to delete anything more, Enter\n2 to Delete Items\n");
  	scanf("%d",&c);
  	while (c!=2)
  	{
  		printf("Invalid Input!!\nIf you wish to delete anything more, Enter\n2 to Delete Items\n");
  		scanf("%d",&c);
	  }
  }
  if (totalCost<limit)
  {
  printf("Total Cost: RM %.2f\n",totalCost);
  printf("Your limit balance : Rm %.2f\n",limit-totalCost);
  printf("If you wish to buy anything more, Enter\n1 to Add Item\n2 to Delete Items\nAny other number to Exit\n");
  scanf("%d",&c);
}
 }
  if(c==2)
  {
   int id;
   printf("Enter id to delete item\n");
   scanf("%d",&id);
   
   if(id<=39&&id>=0)
   {
   totalCost=totalCost-(cost[id]*a[id]);
   a[id]=0;
   }
   else
   {
    printf("Enter Valid id\n");
   }
   system("cls");
      	printf("Revised Items \n");
    	printf(" _______________________________________________________________________________________ \n");
		printf("|   Id  |                 Items                       |   Quantity    |       Cost      |\n");
		printf("|---------------------------------------------------------------------------------------|\n");
        for(i=0;i<39;i++)
      
	   {
       if(a[i]!=0)
      {
      	printf("|       |                                             |               |                 |\n");
    	printf("|%7d|%45s|%15d|%17.2f|\n",i,items[i],a[i],(cost[i]*a[i]));
    	
      }
      
     }
        printf("The total price for all items: RM %.2f\n",totalCost);
        printf("\nIf you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\nAny other number to Exit\n");
        scanf("%d",&c);
  }
	printf("\nYour Final Cost is RM %.2f\n",totalCost);
	
	system("cls");
  
 }while(c==1 || c==2 );
 
 	return totalCost;
}	
