#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int calling(int[]);
int data(int[]);
int international(int[]);
int payment(char[15][200],int[],int,int,int);




void main()
{
  int choice,x=0,y=0,z=0;
  char d[15][200]={"28 days prepaid                Rs 90/-",
                   "42 days prepaid                Rs 120/-",
                   "84 days prepaid                Rs 200/-",
                   "84 days prepaid(unlimited)     Rs 300/-",
                   "84 days postpaid(unlimited)    Rs 399/-",
                   "28 days unlimited data         Rs 150/-",
                   "42 days unlimited data         Rs 250/-",
                   "84 days unlimited data         Rs 399/-", 
                   "1  day international           Rs 18/-",
                   "28 days international          Rs 63/-"   
                    };
  int array[15]={0};
 
  printf("\n\n\n\n\n\n\n\n\n**************************************************************");
  printf("\n\t\t------WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM--------");
  printf("\n\t\t****************************************************************\n\n");
        printf(".");
        sleep(2);
 
  menu: system("clear");
  printf("\n Enter\n 1 : for calling plans. ");
  printf("\n 2 : for data plans.\n 3 : for international plans");
  printf("\n 4 : for bill payment.\n 5 : for exit\n");
        scanf("%d",&choice);
     switch(choice)
  {
   case 1:x=calling(array);break;
   case 2:y=data(array);break;
   case 3:z=international(array);break;
   case 4:payment(d,array,x,y,z);break;
   case 5:printf("\n\n\n\t\t\t***************************************************\n");
          printf("\t\t\t\t----THANK YOU :\tFOR USING OUR SERVICE------- \n");
          printf("\t\t\t*******************************************************\n\n\n\n\n");        
        exit(0);
        break;
   default:
         printf("Incorrect Input");
 
  }goto menu;
}
 
 int calling(int array[])
{
 int choice1,option,option2,price1,j;
 for(j=0;j<5;j++)
 {
  array[j]=0;
 }
 back:
 system("clear");
 printf("\tchoose your plan\n");
 printf(" \nEnter\n 1:prepaid plans. \n 2:postpaid plans. \n 3:main menu \n");
 scanf("%d",&choice1);
 system("clear");
 
 
 if(choice1==1)
  {
    printf("Enter the option to choose:\n");
    printf("\n   Duration \t\t talktime  \t\t benifits              \t\t price\n");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("\n1) 28 days  \t\t Rs 90/-   \t\t 40 p/min              \t\t Rs 90/-");
    printf("\n2) 42 days  \t\t Rs 120/-  \t\t 30 p/min              \t\t Rs 120/-");     
    printf("\n3) 84 days  \t\t Rs 200/-  \t\t 30 p/min              \t\t Rs 200/-");
    printf("\n4) 84 days  \t\t unlimited \t\t 1 month amazon prime  \t\t Rs 300/- \n"); 
    printf("\n5) back menu \n");
    scanf("%d",&option);
   
    switch(option)
    {
     case 1:printf("\nYou selected plan no.:1 \n\n \t  price:      Rs 90/-\n");price1=90;array[0]=1;break;
     case 2:printf("\nYou selected plan no.:2 \n\n \t  price:      Rs 120/-\n");price1=120;array[1]=1;break;
     case 3:printf("\nYou selected plan no.:3 \n\n \t  price:      Rs 200/-\n");price1=200;array[2]=1;break;
     case 4:printf("\nYou selected plan no.:4 \n\n \t  price:      Rs 300/-\n");price1=300;array[3]=1;break;
     case 5:goto back;break;
     default:printf("Wrong option");
    } 
  }
 
 else if(choice1==2)
  { 
    printf("Enter the option to choose:\n");
    printf("\n   Duration \t\t talktime  \t\t benifits        \t\t price\n");
    printf("\n-----------------------------------------------------------------------------------------------\n");
    printf("\n1) 84 days  \t\t unlimited \t\t 1 month Netflix \t\t Rs 399/-");
    printf("\n2) back menu \n");
    scanf("%d",&option2);
    switch(option2)
    {
    case 1:printf("\nYou selected plan no.:1 \n\n \t  price:      Rs 399/-\n");price1=399;array[4]=1;break;
    case 2:goto back;break;
    default:printf("Wrong option");
    }
    
  } 
 else if(choice1==3)
  {
   goto main;
  }
  
 else
  {
    printf("Wrong option");
  }
 printf(".");
 sleep(2);
 main:
 return price1;
}
 
int data(int array[])
{
 int choice2,price2=0,p;
 for(p=5;p<8;p++)
 {
 array[p]=0;
 }
 back:
 system("clear");
 printf("choose your plan");
 printf("\n   Duration   \t\t Data        \t\t Price");
 printf("\n--------------------------------------------------------------\n");
  printf("\n1: 28 days   \t\t unlimited  \t\t Rs 150/-");
  printf("\n2: 42 days   \t\t unlimited  \t\t Rs 250/-");
  printf("\n3: 84 days   \t\t unlimited  \t\t Rs 399/-");
 
  printf("\n4: main menu \n");
  scanf("%d",&choice2);
   switch(choice2)
    {
     case 1:printf("\nYou selected plan no.:1 \n\n   price:     Rs 150/-\n\n");price2=150;array[5]=1;break;
     case 2:printf("\nYou selected plan no.:2 \n\n   price:     Rs 250/-\n\n");price2=250;array[6]=1;break;
     case 3:printf("\nYou selected plan no.:3 \n\n   price:     Rs 399/-\n\n");price2=399;array[7]=1;break;
    
     case 4:goto main;break;
     default:printf("Wrong option");
             goto back;
  
    }
 main:
 printf(".");
 
 return price2;
 
}
 
 int international(int array[])
 {
 int choice3,price3=0,k;
 for(k=8;k<10;k++)
 {
  array[k]=0;
 }
 back:
 system("clear");
 printf("choose your plan");
 printf("\n   scheme                        \t\t validity  \t\t Price");
 printf("--------------------------------------------------------------------\n");
  printf("\n1: free for 1 hour(worldwide)   \t\t 1 day     \t\t Rs 18/-");
  printf("\n2: 1.5 Rs/min   (only in USA)   \t\t 28 days   \t\t Rs 63/-");
  printf("\n3: main menu \n");
  scanf("%d",&choice3);
  switch(choice3)
  {
   case 1:printf("\nYou selected plan no.:1 \n\n   price: \t    Rs 18/-\n\n");price3=18;array[8]=1;break;
   case 2:printf("\nYou selected plan no.:2 \n\n   price:  \t  Rs 63/-\n\n");price3=63;array[9]=1;break;
   case 3:goto main;break;
   default:printf("Wrong option");
           goto back;
  }
  main:
  printf(".");
  sleep(2);
  return price3;
 } 
 
 int payment(char d[15][200],int array[],int x,int y,int z)
{
 int i ,total=0,f,m;
 char num[12];
 system("clear");
 total=x+y+z;
 
 printf("\n\n\n\n Your applied scheme: \t\tPrice\n\n");
 printf("-------------------------------------------\n\n");
 for(i=0;i<10;i++)
 {
  if (array[i]==1)
  printf("%s\n\n",d[i]);
 }
 printf("-------------------------------------------\n\n");
 printf("total:    \t\t\t\t\tRs %d\n\n\n",total);
 if (total==0)
 {
 printf("You did not select any plan:");
 goto end;
 }
 printf("\n Enter\n 1:TO activate\n 2:cancel Transaction\n\n");
 scanf("%d",&f);
 switch(f)
 {
   case 1: printf("Enter the number on which you want to activate your scheme:");
           scanf("%s",num);
           if(strlen(num)!=10)
           {
             printf(" You entered Invalid Number\n\n");
             goto end;
           }
           printf("\nThe service will be activated on %s within some time\n",num);exit(0);break;
   case 2: for(m=0;m<15;m++)
           {
             array[m]=0;
           }
           goto end;
 }
 
 
 end:
 printf(".");
} 
