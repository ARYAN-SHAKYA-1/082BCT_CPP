/*
3) create a class matrix overload the * operator 
to find the product  of two matrix object
*/

#include<iostream>
using namespace std;
class Matrix
{
private:
    int a[3][3];
public:
   void input(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >>a[i][j];
        }
        
    }
    
   }
    Matrix operator*(Matrix M){
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.a[i][j]=0;
                for (int k = 0; k < 3; k++)
                {
                temp.a[i][j] += M.a[i][k] * a[k][j];
                    
                }
                
            }
            
        }
        
        return temp;
    }
    void display(){
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
               cout<<a[i][j]<<"  ";
            }
               cout<<endl;
        }
        
    }
};
int main(){
    Matrix m1,m2,m3;
    m1.input();
    m2.input();
    m3=m1*m2;
    m3.display();
}