#include <iostream> 
using namespace std;



// Code Challenge:

// Your task is to create a class named Rectangle. The class should have data 
// members for the length and width of the rectangle. Implement member functions 
// to calculate the area and perimeter of the rectangle.

// Once you've defined the class, create instances of the Rectangle class and 
// demonstrate how to calculate the area and perimeter of each rectangle.

class Rectangle {

private: 
double length;
double width;

public:
    // Data members
Rectangle(double l, double w){
    length = l;
    width = w; 
}
    
    // Member function
    double calcArea() {
        return length * width; 
        // cout << "Car: " << brand << " " << model << " " << year << endl;
    }
    double calcPerimeter(){
        return 2 * (width +  length); 
    }
};



int main(){

// call and impliment the class in the main.  

Rectangle rect1(10, 20);
Rectangle rect2(40, 30);

cout << "Rectangel 1 " << endl; 
cout << "Area. " << rect1.calcArea() << " square units."<< endl; 
cout << "Perimeter " << rect1.calcPerimeter() << " Units" << endl;

cout << "Rectangel 2 " << endl; 
cout << "Area. " << rect2.calcArea() << " square units."<< endl; 
cout << "Perimeter " << rect2.calcPerimeter() << " Units" << endl;

    return 0; 
}