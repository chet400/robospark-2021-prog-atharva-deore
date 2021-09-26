#include <bits/stdc++.h>
using namespace std;
class Rectangle
{	
	public:
    
	
	int oneparameter()
	{
        int length=0;
        int breadth=0;
	cout << "Length is: " << length*breadth;
    return 0;
	}
    int twoparameters(int length)
    {
        cout <<"\nBreadth is "<<length*length;
        return 0;
    }
    int printarea(int length ,int breadth)
    {
        cout <<"\nArea is "<<length*breadth;
        return 0;
    }
};

int main() {


    Rectangle obj1;
    int length,breadth;
    obj1.oneparameter();
    cout<<"\nEnter length";
    cin>>length;
    obj1.twoparameters(length);
    cout<<"\nEnter length";
    cin>>length;
    cout<<"\nEnter breadth";
    cin>>breadth;
    obj1.printarea(length,breadth);
	return 0;
}
