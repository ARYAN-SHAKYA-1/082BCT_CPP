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
    break;
   case 1:
    input();
    break;
   case 3:
    output();
    break;

   
   default:
    cout<<"Please re enter the choice";
    break;
   }
}