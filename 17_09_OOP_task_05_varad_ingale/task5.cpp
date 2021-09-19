#include<iostream>
using namespace std;

class Rectangle
 {
    public:
        int length;
        int breadth;
        int getArea();
        void set1(){
            length=0;
            breadth=0;
        }
        void set2(int n){
            length=n;
            breadth=n;
        }
        void set3(int l,int b){
            length =l;
            breadth=b;
        }
        
        Rectangle()
        {
        length=0;
        breadth=0;
        }
        Rectangle(int n)
        {
        length=n;
        breadth=n;
        }
        Rectangle(int l,int b)
        {
        length=l;
        breadth=b;
        }
 };

int Rectangle::getArea(){
    return length*breadth;
}

int main(){
    Rectangle r1;
    r1.set1();
	cout<<"Area of Rectangle is "<<r1.getArea()<<endl;
    int l;
    cout<<"Enter the number to set as both length and breadth ";
    cin>>l;
    Rectangle r2(l);
    r2.set2(l);
	cout<<"Area of Rectangle is "<<r2.getArea()<<endl;
    cout<<"Enter the length ";
    int n,m;
    cin>>n;
    cout<<"Enter the breadth ";
    cin>>m;
    Rectangle r3(m,n);
    r3.set3(m,n);
	cout<< "Area of Rectangle is "<<r3.getArea()<<endl;
	return 0;
}

