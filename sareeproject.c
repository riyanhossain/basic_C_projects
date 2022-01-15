#include<stdio.h>
#include<string.h>
#include<conio.h>
#include <windows.h>
#include <stdlib.h>
#include<ctype.h>
#include<dos.h>
#include<time.h>
void mainmenu();
void stock();
void sell();
void stockinformation();
void sellinformation();
void viewallinformation();
void closeapplication();
void password();
void check();
FILE *stock1,*sell1;

char c;
struct cloths
{
    int id;
    char sname[1000];
    char tname[1000];
    int quantity;
    float price;
    int count;
};
struct cloths a[1000],b[1000];
int main()
{
    mainmenu();
    return 0;
}
void mainmenu()
{
    int n;
    printf("\t\t\t _____________________________\n");
    printf("\t\t\t _____________________________\n");
    printf("\t\t\t||\t    Main Menu        ||\n");
    printf("\t\t\t||------------>><<-----------||\n");
    printf("\t\t\t||    1.Stock                ||\n");
    printf("\t\t\t||---------------------------||\n");
    printf("\t\t\t||    2.Sell                 ||\n");
    printf("\t\t\t||---------------------------||\n");
    printf("\t\t\t||    3.Stock Information    ||\n");
    printf("\t\t\t||---------------------------||\n");
    printf("\t\t\t||    4.Sell Information     ||\n");
    printf("\t\t\t||---------------------------||\n");
    printf("\t\t\t||    5.All Information      ||\n");
    printf("\t\t\t||---------------------------||\n");
    printf("\t\t\t||    6.Close Application    ||\n");
    printf("\t\t\t||___________________________||\n");
    printf("\t\t\t  ___________________________\n");
    printf("\t\t\t     Enter your choice::");
    scanf("%d",&n);
    switch(n)
    {
        case 1: system("cls");
                stock();
                  break;
        case 2: system("cls");
                sell();
                  break;
        case 3: system("cls");
                stockinformation();
                  break;
        case 4: system("cls");
                sellinformation();
                  break;
        case 5: system("cls");
                viewallinformation();
                  break;
        case 6: system("cls");
                closeapplication();
                  break;
        default :
                  system("cls");
                  mainmenu();
                  break;
    }
}
void stock()
{
    printf("\n\n\n");
    printf("\t\t\t _____________________________\n");
    printf("\t\t\t||1.Sareee                   ||\n");
    printf("\t\t\t||---------------------------||\n");
    printf("\t\t\t||2.Three Piece              ||\n");
    printf("\t\t\t||---------------------------||\n");
    printf("\t\t\t||0.Return to Mainmenu       ||\n");
    printf("\t\t\t||___________________________||\n");
    printf("\t\t\t      Enter your choice::");
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
                {
                    int i=0,j=0,k=0,s=1;
                    x:system("cls");
                    char decision;
                    printf("\t\t\tProduct Code:");
                    scanf("%s",a[k].sname);
                    printf("\t\t\tQuantity:");
                    scanf("%d",&a[i].quantity);
                    printf("\t\t\tPrice:");
                    scanf("%f",&a[j].price);
                    stock1=fopen("stock_sheet.txt","a");
                    fprintf(stock1,"-------------------------------------------------------------------------\n");
                    fprintf(stock1,"%s\t\t\t            %d\t\t\t        %.2f\n",a[k].sname,a[i].quantity,a[j].price);
                    fprintf(stock1,"-------------------------------------------------------------------------\n");

                    fclose(stock1);
                    i++;
                    j++;
                    k++;
                    printf("\t\t\tWant To Give Another Entry Y/N:");
                    scanf("%s",&decision);
                    if(decision=='Y'||decision=='y')
                    {
                        goto x;
                    }
                    else
                    {
                        system("cls");
                        stock();
                    }
                }
                break;
        case 2: {
                    int i=0,j=0,k=0,s=1;
                    y:system("cls");
                    char decision;
                    printf("\t\t\tProduct Code:");
                    scanf("%s",a[k].tname);
                    printf("\t\t\tQuantity:");
                    scanf("%d",&a[i].quantity);
                    printf("\t\t\tPrice:");
                    scanf("%f",&a[j].price);
                    stock1=fopen("stock_sheet.txt","a");
                    fprintf(stock1,"-------------------------------------------------------------------------\n");
                    fprintf(stock1,"%s\t\t\t            %d\t\t\t        %.2f\n",a[k].tname,a[i].quantity,a[j].price);
                    fprintf(stock1,"-------------------------------------------------------------------------\n");

                    fclose(stock1);
                    i++;
                    j++;
                    k++;
                    printf("\t\t\tWant To Give Another Entry Y/N:");
                    scanf("%s",&decision);
                    if(decision=='Y'||decision=='y')
                    {
                        goto y;
                    }
                    else
                    {
                        system("cls");
                        stock();
                    }
                }
                break;
        case 0: system("cls");
                mainmenu();
                break;
        default: printf("\t\t\tError!!!Try Again\n");
                 printf("\t\t\tEnter your choice::");
                 system("cls");
                 stock();
                 break;
    }


}
void sell()
{
    printf("\n\n\n");
    printf("\t\t\t _____________________________\n");
    printf("\t\t\t||      1.Sareee             ||\n");
    printf("\t\t\t||---------------------------||\n");
    printf("\t\t\t||      2.Three Piece        ||\n");
    printf("\t\t\t||---------------------------||\n");
    printf("\t\t\t||      0.Return to Mainmenu ||\n");
    printf("\t\t\t||___________________________||\n");

    printf("\t\t\t      Enter your choice::");
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
                {
                    printf("\n\n\n");
                    int i=0,j=0,k=0,s=1;
                    x1:system("cls");
                    char decision;
                    printf("\t\t\tProduct Code:");
                    scanf("%s",b[k].sname);
                    printf("\t\t\tQuantity:");
                    scanf("%d",&b[i].quantity);
                    printf("\t\t\tPrice:");
                    scanf("%f",&b[j].price);
                    sell1=fopen("sell_sheet.txt","a");
                    fprintf(sell1,"-------------------------------------------------------------------------\n");
                    fprintf(sell1,"%s\t\t\t            %d\t\t\t        %.2f\n",b[k].sname,b[i].quantity,b[j].price);
                    fprintf(sell1,"-------------------------------------------------------------------------\n");

                    fclose(sell1);
                    i++;
                    j++;
                    k++;
                    printf("\t\t\tWant To Give Another Entry Y/N:");
                    scanf("%s",&decision);
                    if(decision=='Y'||decision=='y')
                    {
                        goto x1;
                    }
                    else
                    {
                        system("cls");
                        sell();
                    }
                }
                break;
        case 2: {
                    printf("\n\n\n");
                    int i=0,j=0,k=0,s=1;
                    y1:system("cls");
                    char decision;
                    printf("\t\t\tProduct Code:");
                    scanf("%s",b[k].tname);
                    printf("\t\t\tQuantity:");
                    scanf("%d",&b[i].quantity);
                    printf("\t\t\tPrice:");
                    scanf("%f",&b[j].price);
                    sell1=fopen("sell_sheet.txt","a");
                    fprintf(sell1,"-------------------------------------------------------------------------\n");
                    fprintf(sell1,"%s\t\t\t            %d\t\t\t        %.2f\n",b[k].tname,b[i].quantity,b[j].price);
                    fprintf(sell1,"-------------------------------------------------------------------------\n");

                    fclose(sell1);
                    i++;
                    j++;
                    k++;
                    printf("\t\t\tWant To Give Another Entry Y/N:");
                    scanf("%s",&decision);
                    if(decision=='Y'||decision=='y')
                    {
                        goto y1;
                    }
                    else
                    {
                        system("cls");
                        sell();
                    }
                }
        case 0: system("cls");
                mainmenu();
                break;
        default: printf("\t\t\tError!!!Try Again\n");
                 printf("\t\t\tEnter your choice::");
                 system("cls");
                 sell();
                 break;
    }

}
void stockinformation()
{
    system("cls");
    printf("\n\n\n");
    printf("Product Name\t\t\tQuantity\t\t\tPrice\n");
    stock1=fopen("stock_sheet.txt","r");
    c = fgetc(stock1);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(stock1);
    }
    fclose(stock1);
    int n;
    printf("\t\t\t      0.Return To Mainmenu:");
    scanf("%d",&n);
    if(n==0)
    {
        system("cls");
        mainmenu();
    }
    else
    {
        system("cls");
        stockinformation();
        printf("\t\t\tPress 0 to return\n");
    }
}
void sellinformation()
{
    system("cls");
    printf("\n\n\n");
    printf("Product Name\t\t\tQuantity\t\t\tPrice\n");
    sell1=fopen("sell_sheet.txt","r");
    c = fgetc(sell1);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(sell1);
    }
    fclose(sell1);
    int n;
    printf("\t\t\t      0.Return To Mainmenu:");
    scanf("%d",&n);
    if(n==0)
    {
        system("cls");
        mainmenu();
    }
    else
    {
        system("cls");
        sellinformation();
        printf("\t\t\tPress 0 to return\n");
    }
}
void viewallinformation()
{
    system("cls");
    printf("\n\n\n");
    printf("**************************> Stock Information <*******************************\n");
    printf("Product Name\t\t\tQuantity\t\t\tPrice\n");
    stock1=fopen("stock_sheet.txt","r");
    c = fgetc(stock1);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(stock1);
    }
    fclose(stock1);
    printf("******************************************************************************\n");
    printf("\n\n");
    printf("***************************> Sell Information <*******************************\n");
    printf("Product Name\t\t\tQuantity\t\t\tPrice\n");
    sell1=fopen("sell_sheet.txt","r");
    c = fgetc(sell1);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(sell1);
    }
    fclose(sell1);
    printf("******************************************************************************");
    int n;
    printf("\t\t\t      0.Return To Mainmenu:");
    scanf("%d",&n);
    if(n==0)
    {
        system("cls");
        mainmenu();
    }
    else
    {
        system("cls");
        viewallinformation();
        printf("\t\t\tPress 0 to return\n");
    }
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void closeapplication()
{
    system("cls");
    printf("\n\n\n\n\n\n");
    printf("\t\t\tProgramed BY MD. RIYAN HOSSAIN\n");
    printf("\t\t\tExiting in 2 second...........>");
    delay(2000);
    exit(0);
}
