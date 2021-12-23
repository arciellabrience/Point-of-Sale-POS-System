//header files

#include<conio.h>
#include<stdlib.h>
#include<windows.h>

/*Variabe declaratons*/
char username[10];//variables need for enhanced security
char password[10];
int x;

	
void listofmenu(char menu);//function for menu
char menu;//variable for menu


void options(char opt);//function for options
char opt;//variable for options
int price[20]={300,300,300,300,300,300,200,200,600,600,350,300,350,350,350,350,450,450,450,450};//we defined the price of each product so it will be easier to read.


void clientorder(int order);//function for order
int order,qty,total,ctr;//variable for order


void orderagain(char yn);//function for yes or no option
char yn,press;//variables for order


void receipt(int orec);//function for receipt
int orec,n=0,totalpay,cash,change,disc,discto,add;//variables for receipt
int order1,order2,order3,order4,order5,order6,order7,order8,order9,order10,order11,order12,order13,order14,order15,order16,order17,order18,order19,order20;
int qty1,qty2,qty3,qty4,qty5,qty6,qty7,qty8,qty9,qty10,qty11,qty12,qty13,qty14,qty15,qty16,qty17,qty18,qty19,qty20;
int total1,total2,total3,total4,total5,total6,total7,total8,total9,total10,total11,total12,total13,total14,total15,total16,total17,total18,total19,total20;



int main()//start the program
{
	printf("USERNAME: ");//ask user for username and password
	scanf("%s", &username);
	printf("PASSWORD: ");
	for (x = 0; x < 4 ; x++)//loop used to hide password
	{
		password[x]=getch();
		printf("*");
	}
	
	/*3 sets of account:
	(lipstick, lips)
	(eyeshadow, eyes)
	(mascara, brow)
	that can allow access*/
	if(strcmp(username,"arciecrisostomo")==0)
	{
		if(strcmp(password,"lips")==0)
		{
			printf("\nYou have logged in successfully!");
		}
		else 
		{
			printf("\nYour password is incorrect.\n");
			main();
		}
	}
	
	else if(strcmp(username,"rinamacainag")==0)
	{
		if(strcmp(password,"eyes")==0)
		{
			printf("\nYou have logged in successfully!");
		}
		else 
		{
			printf("\nYour password is incorrect.\n");
			main();
		}
	}
	
	else if(strcmp(username,"mascara")==0)
	{
		if(strcmp(password,"brow")==0)
		{
			printf("\nYou have logged in successfully!");
		}
		else 
		{
			printf("\nYour password is incorrect.\n");
			main();
		}
	}
	
	else 
	{
		printf("\nYour username is incorrect.\n");
		main();
	}
	
	printf("\n");
	printf("\nHi, Welcome to Arcie and Rina's Boutique!");
    printf("\nHere is our list of items.");
    listofmenu(menu);//go to menu function
    return 0; 

}//end of main function


    
	void listofmenu(char menu)//menu function
	{
	printf("\n				  MENU	   			");//menu display
    printf("\n");
    printf("\n----------------------------------LIPS----------------------------------------");
	printf("\n00. Lipstick in Shade no. 1  Php300	03. Lipstick in Shade no. 4  Php300\n01. Lipstick in Shade no. 2  Php300	04. Lipstick in Shade no. 5  Php300\n02. Lipstick in Shade no. 3  Php300	05. Lipstick in Shade no. 6  Php300");
	printf("\n");
	printf("\n----------------------------------EYES----------------------------------------");
    printf("\n06. Brow Pencil in Taupe  Php200	09. Eyeshadow in Nighttime  Php600 \n07. Brow Pencil in Brunette  Php200	10. Lengthening Mascara	Php350\n08. Eyeshadow in Daytime  Php600	11. Jet Black Eyeliner  Php300");
    printf("\n");
	printf("\n----------------------------------FACE----------------------------------------");
    printf("\n12. Multipot in Shade no. 1  Php350	16. BB Cream in Fair  Php450\n13. Multipot in Shade no. 2  Php350	17. BB Cream in Light  Php450\n14. Multipot in Shade no. 3  Php350	18. BB Cream in Medium  Php450\n15. Multipot in Shade no.4  Php350	19. BB Cream in Dark  Php450");
	printf("\n");
	printf("\nPress any key to continue.");
	getch();//allows program to continue only if the user press any key
    options(opt);//go to option function
	}//end of main function
	
	
	void options(char opt)//option function
	{
		printf("\n-------------------------------OPTIONS----------------------------------------");//print options
		printf("\nA. Menu");
		printf("\nB. Order");
		printf("\nC. Exit");
		printf("\n");
		printf("\nPlease choose a letter: ");//ask user for option
		scanf("%s", &opt);
		printf("\n");
		if(opt =='A'||opt=='a')//if and else statements used because each option results in different outcomes
		{
			system("cls");//clear system before displaying menu 
			listofmenu(menu);//go to menu function, display the menu once again
		}
		else if(opt=='B'||opt=='b')
		{
			
			printf("\n------------------------------TAKE ORDER---------------------------------------\n");
			printf("\n");
			clientorder(order);//go to take order function
		}
		else if(opt=='C'||opt=='c')
		{
			exit (0);//end program
		}
        
        else {
            printf("Please select one of the options.\n");
            options(opt);//loop print of option function until the user chooses one of the options
        }    
	}//end of option function
	
	
	void clientorder(int order)//function fo taking orders
	{
		for(ctr=0;ctr<=n;ctr++)//loop to know how many order the user will take
		{
			1;
		}
		n=n+1;//n is intially 1 but when the user inputs y (yes, order again), it will add 1
	printf("What is your order number? ");//asks user for order number   
	scanf("%d",&order);
	
	if(order==0){//if and else statements for each product
	order1=order;//to equal "0" code in the menu as order1 code for computing easily since "0" has a value(array)
	printf("How many order? ");//asks for quantity
	scanf("%d",&qty1);
	printf("Order: %d", order1);
	printf("\nPrice: %d", price[order1]);
	printf("\nQuantity: %d", qty1);
	total1= price[order1]*qty1;
	printf("\nTotal: %d", total1);}
	
	else if(order==1){
	order2=order;
	printf("How many order? ");
	scanf("%d",&qty2);
	printf("Order: %d", order2);
	printf("\nPrice: %d", price[order2]);
	printf("\nQuantity: %d", qty2);
	total2= price[order2]*qty2;
	printf("\nTotal: %d", total2);}
	
	else if(order==2){
	order3=order;
	printf("How many order? ");
	scanf("%d",&qty3);
	printf("Order: %d", order3);
	printf("\nPrice: %d", price[order3]);
	printf("\nQuantity: %d", qty3);
	total3= price[order3]*qty3;
	printf("\nTotal: %d", total3);}
	
	else if(order==3){
	order4=order;
	printf("How many order? ");
	scanf("%d",&qty4);
	printf("Order: %d ", order4);
	printf("\nPrice: %d", price[order4]);
	printf("\nQuantity: %d", qty4);
	total4= price[order4]*qty4;
	printf("\nTotal: %d", total4);}
	
	else if(order==4){
	order5=order;
	printf("How many order? ");
	scanf("%d",&qty5);
	printf("Order: %d ", order5);
	printf("\nPrice: %d", price[order5]);
	printf("\nQuantity: %d", qty5);
	total5= price[order5]*qty5;
	printf("\nTotal: %d", total5);}
	
	else if(order==5){
	order6=order;
	printf("How many order? ");
	scanf("%d",&qty6);
	printf("Order: %d ", order6);
	printf("\nPrice: %d", price[order6]);
	printf("\nQuantity: %d", qty6);
	total6= price[order6]*qty6;
	printf("\nTotal: %d", total6);}
	
	else if(order==6){
	order7=order;
	printf("How many order? ");
	scanf("%d",&qty7);
	printf("Order: %d ", order7);
	printf("\nPrice: %d", price[order7]);
	printf("\nQuantity: %d", qty7);
	total7= price[order7]*qty7;
	printf("\nTotal: %d", total7);}

    else if(order==7){
	order8=order;
	printf("How many order? ");
	scanf("%d",&qty8);
	printf("Order: %d ", order8);
	printf("\nPrice: %d", price[order8]);
	printf("\nQuantity: %d", qty8);
	total8= price[order8]*qty8;
	printf("\nTotal: %d", total8);}

    else if(order==8){
	order9=order;
	printf("How many order? ");
	scanf("%d",&qty9);
	printf("Order: %d ", order9);
	printf("\nPrice: %d", price[order9]);
	printf("\nQuantity: %d", qty9);
	total9= price[order9]*qty9;
	printf("\nTotal: %d", total9);}

    else if(order==9){
	order10=order;
	printf("How many order? ");
	scanf("%d",&qty10);
	printf("Order: %d ", order10);
	printf("\nPrice: %d", price[order10]);
	printf("\nQuantity: %d", qty10);
	total10= price[order10]*qty10;
	printf("\nTotal: %d", total10);}
        
    else if(order==10){
	order11=order;
	printf("How many order? ");
	scanf("%d",&qty11);
	printf("Order: %d ", order11);
	printf("\nPrice: %d", price[order11]);
	printf("\nQuantity: %d", qty11);
	total11= price[order11]*qty11;
	printf("\nTotal: %d", total11);}

    else if(order==11){
	order12=order;
	printf("How many order? ");
	scanf("%d",&qty12);
	printf("Order: %d ", order12);
	printf("\nPrice: %d", price[order12]);
	printf("\nQuantity: %d", qty12);
	total12= price[order12]*qty12;
	printf("\nTotal: %d", total12);}

    else if(order==12){
	order13=order;
	printf("How many order? ");
	scanf("%d",&qty13);
	printf("Order: %d ", order13);
	printf("\nPrice: %d", price[order13]);
	printf("\nQuantity: %d", qty13);
	total13= price[order13]*qty13;
	printf("\nTotal: %d", total13);}

	else if(order==13){
	order14=order;
	printf("How many order? ");
	scanf("%d",&qty14);
	printf("Order: %d ", order14);
	printf("\nPrice: %d", price[order14]);
	printf("\nQuantity: %d", qty14);
	total14= price[order14]*qty14;
	printf("\nTotal: %d", total14);}

	else if(order==14){
	order15=order;
	printf("How many order? ");
	scanf("%d",&qty15);
	printf("Order: %d ", order15);
	printf("\nPrice: %d", price[order15]);
	printf("\nQuantity: %d", qty15);
	total15= price[order15]*qty15;
	printf("\nTotal: %d", total15);}

	else if(order==15){
	order16=order;
	printf("How many order? ");
	scanf("%d",&qty16);
	printf("Order: %d ", order16);
	printf("\nPrice: %d", price[order16]);
	printf("\nQuantity: %d", qty16);
	total16= price[order16]*qty16;
	printf("\nTotal: %d", total16);}

	else if(order==16){
	order17=order;
	printf("How many order? ");
	scanf("%d",&qty17);
	printf("Order: %d ", order17);
	printf("\nPrice: %d", price[order17]);
	printf("\nQuantity: %d", qty17);
	total17= price[order17]*qty17;
	printf("\nTotal: %d", total17);}
	
	else if(order==17){
	order18=order;
	printf("How many order? ");
	scanf("%d",&qty18);
	printf("Order: %d ", order18);
	printf("\nPrice: %d", price[order18]);
	printf("\nQuantity: %d", qty4);
	total18= price[order18]*qty18;
	printf("\nTotal: %d", total18);}

	else if(order==18){
	order19=order;
	printf("How many order? ");
	scanf("%d",&qty19);
	printf("Order: %d ", order19);
	printf("\nPrice: %d", price[order19]);
	printf("\nQuantity: %d", qty19);
	total19= price[order19]*qty19;
	printf("\nTotal: %d", total19);}

	else if(order==19){
	order20=order;
	printf("How many order? ");
	scanf("%d",&qty20);
	printf("Order: %d ", order20);
	printf("\nPrice: %d", price[order20]);
	printf("\nQuantity: %d", qty20);
	total20= price[order20]*qty20;
	printf("\nTotal: %d", total20);}

    else//loop order if ever the user inputs wrong item code
    {
        printf("Your number is not found in our menu. Please select a number again.\n");
        clientorder(order);
    }
	orderagain(yn);//go to function for order again (y/n)
	}//end of function take order
	
	
	void orderagain(char yn)//function for order again
	{
	printf("\nWould you like to order again(y/n)? ");
	scanf("%s",&yn);
    if(yn=='Y'||yn=='y')
    {
		clientorder(order);//will take you back to take order function again
			
	}
	else if(yn=='N'||yn=='n')//records all order then proceed to: option again (but this time we did not made it a  different function
    {
    	printf("Press R-receipt, O-options, E-exit: ");
    	scanf("%s",&press);
    	if(press=='R'||press=='r')
    	{
    		receipt(orec);//go to receipt function
		}
    	else if(press=='O'||press=='o')
    	{
    		options(opt);//go to option function
		}
    	else if(press=='E'||press=='e')
    	{
    		exit (0);//end program
		}
	}
	else 
	{
		printf("Please input y/n only");//if the user inputs none of the option
		orderagain(yn);//loop to option function again
	}
}//end of function
	
	
	void receipt(int orec)//function for receipt
	{
		printf("\n------------------------------RECEIPT----------------------------------------\n");
		printf("Order	   		     Quantity	     		Price");
		for(ctr=0;ctr<=n;ctr++){//loop like earlier to display how many orders the user chose. eg: the user ordered/INPUT 3x, in receipt function they will loop the PRINT 3x too
		if(order1==0 && qty1>=1)//if and else statements for diff order codes
		{
			printf("\nLipstick in Shade no. 1		%d	       	  	 %d",qty1,total1);
		}
		if(order2==1 && qty2>=1)
		{
			printf("\nLipstick in Shade no. 2		%d	       	  	 %d",qty2,total2);
		}
		if(order3==2 && qty3>=1)
		{
			printf("\nLipstick in Shade no. 3		%d	      	   	 %d",qty3,total3);
		}
		if(order4==3 && qty4>=1)
		{
			printf("\nLipstick in Shade no. 4		%d	      	   	 %d",qty4,total4);
		}
		if(order5==4 && qty5>=1)
		{
			printf("\nLipstick in Shade no. 5		%d	      	   	 %d",qty5,total5);
		}
		if(order6==5 && qty6>=1)
		{
			printf("\nLipstick in Shade no. 6		%d	      	   	 %d",qty6,total6);
		}
		if(order7==6 && qty7>=1)
		{
			printf("\nBrow Pencil in Taupe		%d	      	   	 %d",qty7,total7);
		}
		if(order8==7 && qty8>=1)
		{
			printf("\nBrow Pencil in Brunette		%d	      	   	 %d",qty8,total8);
		}
		if(order9==8 && qty9>=1)
		{
			printf("\nEyeshadow in Daytime		%d	      	   	 %d",qty9,total9);
		}
		if(order10==9 && qty10>=1)
		{
			printf("\nEyeshadow in Nighttime		%d	      	   	 %d",qty10,total10);
		}
		if(order11==10 && qty11>=1)
		{
			printf("\nLengthening Mascara		%d	      	   	 %d",qty11,total11);
		}
		if(order12==11 && qty12>=1)
		{
			printf("\nJet Black Liner			%d	      	   	 %d",qty12,total12);
		}
		if(order13==12 && qty13>=1)
		{
			printf("\nMultipot in Shade no. 1		%d	      	   	 %d",qty13,total13);
		}
		if(order14==13 && qty14>=1)
		{
			printf("\nMultipot in Shade no. 2		%d	      	   	 %d",qty14,total14);
		}
		if(order15==14 && qty15>=1)
		{
			printf("\nMultipot in Shade no. 3		%d	      	   	 %d",qty15,total15);
		}
		if(order16==15 && qty16>=1)
		{
			printf("\nMultipot in Shade no. 4		%d	      	   	 %d",qty16,total16);
		}
		if(order17==16 && qty17>=1)
		{
			printf("\nBB Cream in Fair		%d	      	   	 %d",qty17,total17);
		}
		if(order18==17 && qty18>=1)
		{
			printf("\nBB Cream in light		%d	      	   	 %d",qty18,total18);
		}
		if(order19==18 && qty19>=1)
		{
			printf("\nBB Cream in medium		%d	      	   	 %d",qty19,total19);
		}
		if(order20==19 && qty20>=1)
		{
			printf("\nBB Cream in dark		%d	      	   	 %d",qty20,total20);
		}
		
		totalpay=total1+total2+total3+total4+total5+total6+total7+total8+total9+total10+total11+total12+total13+total14+total15+total16+total17+total18+total19+total20;//computes for the total all in all
		printf("\nTOTAL:	      			  	 		 %d",totalpay);
		CHOICE://for go to function
		printf("\nDiscount? N-None, S-Senior, T-Others: ");//another option, this time for possible discounts
		scanf("%s",&press);
    	if(press=='N'||press=='n')//meaning no discount
    	{
    		printf("Enter Cash: ");
    		scanf("%d",&cash);
    		change=cash-totalpay;//computes for change after input of cash
			if(change>=0)//if the user inputs either an exact or extra amount
    		{
    		printf("Change: %d",change);//prints change
    		printf("\nThank you for Patronizing Arcie and Rina's Boutique, Please come again!");
    		exit (0);//end program
    		}
    		else//if the user inputs short cash 
    		{
    			printf("Unfortunately, you're short: Php%d", abs(change));
    			printf("\nPlease add Php%d: ",abs(change));//program asks for short payment
    			scanf("%d",&add);
    			change=(cash+add)-totalpay;//computes for final balance
    			if(change>=0)//if the additional payment is enough
    		{
    		printf("Change: %d",change);//print change
    		printf("\nThank you for Patronizing Arcie and Rina's Boutique, Please come again!");
    		exit (0);//end program
    		}
    		else if(change<0)//if the user gave a short amount of cash again
    		{
    			printf("Unfortunately you're still short");//print that they are still short in cash
    			printf("\nThank you for Patronizing Arcie and Rina's Boutique, Please come again!");
    			exit (0);//end program
			}
		}
		}
		
		else if(press=='S'||press=='s')//gives 20 percent discount in the users total
    	{
    		disc=totalpay*.2;
    		discto=totalpay*.8;
			printf("\nDiscount: %d",disc);
    		printf("\nDiscounted Total: %d",discto);
			printf("\nEnter Cash: ");
    		scanf("%d",&cash);
    		change = cash-discto;
    		if(change>=0)//if the user inputs either an exact or extra amount
    		{
    		printf("Change: %d",change);//prints change
    		printf("\nThank you for Patronizing Arcie and Rina's Boutique, Please come again!");
    		exit (0);//end program
    		}
    		else//if the user inputs short cash 
    		{
    			printf("Unfortunately, you're short: Php%d", abs(change));
    			printf("\nPlease add Php%d: ",abs(change));//program asks for short payment
    			scanf("%d",&add);
    			change=(cash+add)-discto;//computes for final balance
    			if(change>=0)//if the additional payment is enough
    		{
    		printf("Change: %d",change);//print change
    		printf("\nThank you for Patronizing Arcie and Rina's Boutique, Please come again!");
    		exit (0);//end program
    		}
    		else if(change<0)//if the user gave a short amount of cash again
    		{
    			printf("Unfortunately you're still short");//print that they are still short in cash
    			printf("\nThank you for Patronizing Arcie and Rina's Boutique, Please come again!");
    			exit (0);//end program
			}
		}
		}
		
		else if(press=='T'||press=='t')//gives 30 percent discount in the users total
    	{
    		disc = totalpay*.3;
    		discto = totalpay*.7;
    		printf("\nDiscount: %d",disc);
    		printf("\nDiscounted Total: %d",discto);
			printf("\nEnter Cash: ");
    		scanf("%d", &cash);
    		change = cash-discto;
    		if(change>=0)//if the user inputs either an exact or extra amount
    		{
    		printf("Change: %d",change);//prints change
    		printf("\nThank you for Patronizing Arcie and Rina's Boutique, Please come again!");
    		exit (0);//end program
    		}
    		else//if the user inputs short cash 
    		{
    			printf("Unfortunately, you're short: Php%d", abs(change));
    			printf("\nPlease add Php%d: ",abs(change));//program asks for short payment
    			scanf("%d",&add);
    			change=(cash+add)-discto;//computes for final balance
    			if(change>=0)//if the additional payment is enough
    			{
    		printf("Change: %d",change);//print change
    		printf("\nThank you for Patronizing Arcie and Rina's Boutique, Please come again!");
    		exit (0);//end program
    			}
    		else if(change<0)//if the user gave a short amount of cash again
    			{
    			printf("Unfortunately you're still short");//print that they are still short in cash
    			printf("\nThank you for Patronizing Arcie and Rina's Boutique, Please come again!");
    			exit (0);//end program
				}
		}
		}
		
		else 
		{
		printf("Please input one of the options");
		goto CHOICE;//go to function to go back to the choice options for discount
		}
		
	}
	}//end receipt function
		
    	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
