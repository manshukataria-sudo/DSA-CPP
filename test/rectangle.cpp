#include <iostream>
using namespace std; 
class Rectangle {
private:
    double length;  
    double width;   
public:

    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const {
        return length * width;
    }
    double getLength() const { return length; }
    double getWidth() const { return width; }
    void setLength(double l) { length = l; }
    void setWidth(double w) { width = w; }
};

int main() {
    Rectangle rect(5.0, 3.0);
    std::cout << "Rectangle area: " << rect.area() << " square units" << std::endl;

}
