#include <iostream>
using namespace std;

class Box
{
    int l,b,h;
    public:
    Box(){
    l=0;
    b=0;
    h=0;}
    Box(int a, int b, int c){
        this->l=a;
        this->b=b;
        this->h=c;
    }
    int getvolume(){
        return l*b*h;
    }
    int getl(){
        return l;
    }
    int getb(){
        return b;
    }
    int geth(){
        return h;
    }
    void setl(int a){
        this->l=a;
    }
    void setb(int a){
        this->b=a;
    }
    void seth(int a){
        this->h=a;
    }
    void printDimension(){
        cout<<"Dimensions :- "<<endl<<"Length :  "<<l<<endl<<"Breadth : "<<b<<endl<<"Height :  "<<h<<endl;
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