#include <iostream>
using namespace std;
double Square();
double Rectangle();
double Triangle();
int main(){

    while (true)
    {
    cout<<"please select the area of the shape to calcurate"<<endl;
    cout<<"1. Square"<<endl;
    cout<<"2. Rectangle"<<endl;
    cout<<"3. Triangle"<<endl;
    cout<<"4. Quit program"<<endl<<endl;

    cout<<"Enter selection:"<<endl;
    
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        Square();
        break;
    case 2:
       Rectangle();
       break;
    case 3:
       Triangle();
       break;
    case 4:
     return 0;
    default:
       cout <<"Your input was : "<<choice<<" which is an invalid input"<<endl<<"Please enter a valid input!!!"<<endl<<endl;
    }

    }
    
}

double Square(){
    cout<<"Enter the one value of your square "<<endl;
    double length;
    cin>>length;
    double resuit= length * length;
    cout<<"The area of the square is "<<resuit<<endl<<endl;
    return 0;
}

double Rectangle(){
    cout<<"Enter length and width"<<endl;
    double length;
    double width;
    cin>>length>>width;
    double resuit= length * width;
    cout<<"The area of the Rectangle is "<<resuit<<endl<<endl;
    return 0;
}
double Triangle(){
    cout <<"Enter the base and the height of the triangle"<<endl;
    double base;
    double height;
    cin>>base>>height;
    double resuit = 0.5*(base*height);
    cout<<"The area of the Triangle is "<<resuit<<endl<<endl;
    return 0;
}
