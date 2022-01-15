#include<stdio.h>
#include<string.h>
void menu();
void appetizers();
void maindishes();
void hotdrinks();
void salads();
void drinks();
void desserts();
void bill();
float TAX_RATE=0.5;
float bil=0.0;
char name[100],c;
int quantity,phn;
FILE *fp;
int main()
{

    printf("\t\t\t\t\t\tNOCHIKETA RESTURENT\n");
    printf("**********************************************************************************************************\n");
    printf("\t\t\t\t\t\tCustomer Name:");
    gets(name);
    printf("\n");
    printf("\t\t\t\t\t\tPhone Number:+880");
    scanf("%d",&phn);
    fp=fopen("bill.txt","w");
    fprintf(fp,"\t\t\t\t\t\tNOCHIKETA RESTURENT\n");
    fprintf(fp,"\t\t\t\t\t\tCustomer Name:%s\n",name);
    fprintf(fp,"\t\t\t\t\t\tPhone Number:+880%d\n",phn);
    fclose(fp);
    system("cls");
    menu();
return 0;
}
void menu()
{
    int n;
printf("\t*****************************************************************************************************\n");
printf("NOCHIKETA RESTURENT:\n");
printf("BANGLA CITY,NEW YORK,UNITED STATES OF AMERICA\n");
printf("PHN_NO:+8801961745268\n");
printf("email:Robiulislammamon42@gmail.com\n");
printf("VAT REG NO:10121352\n");
printf("\t******************************************************************************************************\n");
printf("\t\t\t\t\t     MEMU\n");
printf("\t\t\t\t\t1->APPETIZERS\n");
printf("\t\t\t\t\t2->MAINDISHIES\n");
printf("\t\t\t\t\t3->HOT DRINKS\n");
printf("\t\t\t\t\t4->SALADS\n");
printf("\t\t\t\t\t5->DRINKS\n");
printf("\t\t\t\t\t6->DESSERTS\n");
printf("\t\t\t\t\t7->BILL\n");
printf("Enter your Choice:");
scanf("%d",&n);
    switch(n)
    {
        system("cls");
        case 1:
            system("cls");
            appetizers();
            break;
        case 2:
            system("cls");
            maindishes();
            break;
        case 3:
            system("cls");
            hotdrinks();
            break;
        case 4:
            system("cls");
            salads();
            break;
        case 5:
            system("cls");
            drinks();
            break;
        case 6:
            system("cls");
            desserts();
            break;
        case 7:
            system("cls");
            bill();
            break;
        default:
            system("cls");
            menu();
            break;

    }
}
void appetizers()
{
    //system("cls");
    int n;
    printf("\t\t\tItem Name\t\t\t\tprice\n");
    printf("\t\t\t1->Cannellini Bruschetta................1.99$\n");
    printf("\t\t\t2->Fried Ravioli........................2.49$\n");
    printf("\t\t\t3->Pimiento Cheese Spread...............0.99$\n");
    printf("\t\t\t0->Back to MENU\n");
    printf("Add a Order:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((1.99*TAX_RATE)+1.99)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            appetizers();
            break;
        case 2:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((2.49*TAX_RATE)+2.49)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            appetizers();
            break;
        case 3:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((0.99*TAX_RATE)+0.99)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            appetizers();
            break;
        case 0:
            system("cls");
            menu();
            break;
        default:
            system("cls");
            printf("\t\t\tGive a right input\n");
            appetizers();
            break;
    }
}
void maindishes()
{
  int n;
    printf("\t\t\tItem Name\t\t\t\tprice\n");
    printf("\t\t\t1->World's Best Lasagna.................4.99$\n");
    printf("\t\t\t2->Chicken Pot Pie IX...................3.99$\n");
    printf("\t\t\t3->Brown Sugar Meatloaf.................2.99$\n");
    printf("\t\t\t0->Back to MENU\n");
    printf("Add a Order:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((4.99*TAX_RATE)+4.99)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            maindishes();
            break;
        case 2:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((3.99*TAX_RATE)+3.99)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            maindishes();
            break;
        case 3:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((2.99*TAX_RATE)+2.99)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            maindishes();
            break;
        case 0:
            system("cls");
            menu();
            break;
        default:
            system("cls");
            printf("\t\t\tGive a right input\n");
            maindishes();
            break;
    }
}
void hotdrinks()
{
   int n;
    printf("\t\t\tItem Name\t\t\t\tprice\n");
    printf("\t\t\t1->Mexican Spiced Hot Cocoa.............1.99$\n");
    printf("\t\t\t2->Minty Hot Cocoa Float................0.99$\n");
    printf("\t\t\t3->Magic Cocoa..........................2.99$\n");
    printf("\t\t\t0->Back to MENU\n");
    printf("Add a Order:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((1.99*TAX_RATE)+1.99)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            hotdrinks();
            break;
        case 2:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((0.99*TAX_RATE)+0.99)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            hotdrinks();
            break;
        case 3:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((2.99*TAX_RATE)+2.99)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            hotdrinks();
            break;
        case 0:
            system("cls");
            menu();
            break;
        default:
            system("cls");
            printf("\t\t\tGive a right input\n");
            hotdrinks();
            break;
    }
}
void salads()
{
   int n;
    printf("\t\t\tItem Name\t\t\t\tprice\n");
    printf("\t\t\t1->Spicy Carrot Salad...................1.49$\n");
    printf("\t\t\t2->Tomato-Peach Salad...................1.99$\n");
    printf("\t\t\t3->Watercress-Fruit Salad...............2.49$\n");
    printf("\t\t\t0->Back to MENU\n");
    printf("Add a Order:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((1.49*TAX_RATE)+1.49)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            salads();
            break;
        case 2:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((1.99*TAX_RATE)+1.99)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            salads();
            break;
        case 3:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((2.49*TAX_RATE)+2.49)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            salads();
            break;
        case 0:
            system("cls");
            menu();
            break;
        default:
            system("cls");
            printf("\t\t\tGive a right input\n");
            salads();
            break;
    }
}
void drinks()
{
    int n;
    printf("\t\t\tItem Name\t\t\t\tprice\n");
    printf("\t\t\t1->coca cola............................3.49$\n");
    printf("\t\t\t2->7 UP ................................3.99$\n");
    printf("\t\t\t3->Mango lassi, BANGLADESH..............2.49$\n");
    printf("\t\t\t0->Back to MENU\n");
    printf("Add a Order:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((3.49*TAX_RATE)+3.49)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            drinks();
            break;
        case 2:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((3.99*TAX_RATE)+3.99)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            drinks();
            break;
        case 3:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((2.49*TAX_RATE)+2.49)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            drinks();
            break;
        case 0:
            system("cls");
            menu();
            break;
        default:
            system("cls");
            printf("\t\t\tGive a right input\n");
            drinks();
            break;
    }
}
void desserts()
{
   int n;
    printf("\t\t\tItem Name\t\t\t\tprice\n");
    printf("\t\t\t1-> Butterscotch Pie....................4.99$\n");
    printf("\t\t\t2->Sheet Pan Apple Crisp................3.99$\n");
    printf("\t\t\t3->Best Chocolate Chip Cookies..........2.99$\n");
    printf("\t\t\t0->Back to MENU\n");
    printf("Add a Order:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((4.99*TAX_RATE)+4.99)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            desserts();
            break;
        case 2:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((3.99*TAX_RATE)+3.99)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            desserts();
            break;
        case 3:
            printf("Quantity:");
            //int quantity;
            scanf("%d",&quantity);
            bil=bil+((2.99*TAX_RATE)+2.99)*quantity;
            system("cls");
            printf("\t\t\tOrder Added\n");
            desserts();
            break;
        case 0:
            system("cls");
            menu();
            break;
        default:
            system("cls");
            printf("\t\t\tGive a right input\n");
            desserts();
            break;
    }
}
void bill()
{
    system("cls");
    fp = fopen( "bill.txt" , "a");
    fprintf(fp,"\t\t\t\t\t\tTotal Bill........%.2f$\n",bil);
    fprintf(fp,"\t\t\t\t\t\t#######THANK YOU###########");
    fclose(fp);
    fp = fopen( "bill.txt" , "r");
    c = fgetc(fp);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fp);
    }
    fclose(fp);
    return 0;
}
