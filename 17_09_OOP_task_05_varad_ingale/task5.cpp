#include<iostream>
using namespace std;

class Rectangle
 {
    public:
        int length;
        int breadth;
        void setter();
        void setter(int n);
        void setter(int l,int b);
        int getArea();
 }rec;

void Rectangle::setter(){
        length=0;
        breadth=0;
    }
void Rectangle::setter(int n){
        length=n;
        breadth=n;
    }
void Rectangle::setter(int l,int b){
        length=l;
        breadth=b;
    }
int Rectangle::getArea(){
    return length*breadth;
}

int main(){
    rec.setter();
    int a1 = rec.getArea();
	cout<<"Area of Rectangle is "<< a1 <<endl;
    int l,b;
    cout<<"Enter the number to set as both length and breadth ";
    cin>>l;
    rec.setter(l);
    int a2=rec.getArea();
	cout<<"Area of Rectangle is "<< a2 <<endl;
    cout<<"Enter the length ";
    int n,m;
    cin>>n;
    cout<<"Enter the breadth ";
    cin>>m;
    rec.setter(n,m);
    int a3=rec.getArea();
	cout << "Area of Rectangle is "<< a3 <<endl;
	return 0;
}

