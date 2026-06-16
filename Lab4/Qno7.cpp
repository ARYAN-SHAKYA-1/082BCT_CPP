#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
    void getmatrix(){
        cout<<"Enter 3x3 matrix: ";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
    }
    void display(){
        cout<<"Matrix: "<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }  
    friend Matrix operator - ( Matrix m1 ,Matrix m2);
};
Matrix operator - ( Matrix m1 , Matrix m2){
    Matrix temp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp.a[i][j]=m1.a[i][j]+m2.a[i][j];
        }
    }
    return temp;
}
int main(){
    Matrix m1,m2,m3;
    m1.getmatrix();
    m2.getmatrix();
    m3=m1-m2;
    m3.display();
    return 0;
}