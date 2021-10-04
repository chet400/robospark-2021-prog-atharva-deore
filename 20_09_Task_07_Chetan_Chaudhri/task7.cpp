#include <iostream>
using namespace std;

class Box
{
    int length,breadth,height;
    public:
    Box(){
    length=0;
    breadth=0;
    height=0;}
    Box(int a, int b, int c){
        this->length=a;
        this->breadth=b;
        this->height=c;
    }
    int getvolume(){
        return length*breadth*height;
    }
    int getl(){
        return length;
    }
    int getb(){
        return breadth;
    }
    int geth(){
        return height;
    }
    void setl(int a){
        this->length=a;
    }
    void setb(int a){
        this->breadth=a;
    }
    void seth(int a){
        this->height=a;
    }
    void printDimension(){
        cout<<"Length :  "<<length<<endl<<"Breadth : "<<breadth<<endl<<"Height :  "<<height<<endl;
    }
    friend int operator>(Box b1, Box b2);
    friend int operator<(Box b1, Box b2);
    friend int operator>=(Box b1, Box b2);
    friend int operator<=(Box b1, Box b2);
    friend int operator==(Box b1, Box b2);
    
};

int operator>(Box a, Box b){
    if(a.getvolume()>b.getvolume())
        return 1;
    else
        return 0;
}

int operator<(Box a, Box b){
    if(a.getvolume()<b.getvolume())
        return 1;
    else
        return 0;
}

int operator>=(Box a, Box b){
    if(a.getvolume()>=b.getvolume())
        return 1;
    else
        return 0;
}

int operator<=(Box a, Box b){
    if(a.getvolume()<=b.getvolume())
        return 1;
    else
        return 0;
}

int operator==(Box a, Box b){
    if(a.getvolume()==b.getvolume())
        return 1;
    else
        return 0;
}

int main(){
    Box b1(2,3,4);
    cout<<"Volume : "<<b1.getvolume()<<endl;
    b1.setl(4);
    cout<<"Volume : "<<b1.getvolume()<<endl;
    b1.printDimension();
    Box b2(3,4,5);
    if (b1>b2){
        cout<<"\nb1>b2";
    }
    
    if (b1<b2){
        cout<<"\nb1<b2";
    }
    
    if (b1>=b2){
        cout<<"\nb1>=b2";
    }
    
    if (b1<=b2){
        cout<<"\nb1<=b2";
    }
    
    if (b1==b2){
        cout<<"\nb1==b2";
    }
    else{
        cout<<"\nb1!=b2";
    }
    return 0;
}