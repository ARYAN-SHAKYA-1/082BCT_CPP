#include "../include.cpp"
#include"../header.h"


void mainChoice()
{   int a;
   a = indexUi();
   switch (a)
   {
   case 0:
    system("clear");
    cout<<"Thank you for using this program "<<endl;
    cin.ignore();
    cin.ignore();
    system("clear");
    exit(0);
    break;
   case 1:
    input();
    break;
   case 2:
    output();
    break;

   
   default:
    cout<<"invalid option. press any ky eto continue";
    cin.ignore();
    cin.ignore();
    mainChoice();
    break;
   }
}