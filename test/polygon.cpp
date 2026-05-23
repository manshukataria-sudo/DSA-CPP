#include <iostream>
#include <cmath>
using namespace std;
class Polygon {
private:
    int numSides;  // Number of sides
    double sideLength;  // Length of each side

public:
    // Constructor to initialize the polygon with number of sides and side length
    Polygon(int n, double length) : numSides(n), sideLength(length) {}

    // Function to calculate the perimeter
    double perimeter() const {
        return numSides * sideLength;
    }

    // Function to calculate the area for regular polygons
    double area() const {
        // Area formula for a regular polygon: (n * s^2) / (4 * tan(π/n))
        return (numSides * pow(sideLength, 2)) / (4 * tan(M_PI / numSides));
    }
};

int main() {
    // Create a regular hexagon (6 sides, each of length 5)
    Polygon hexagon(6, 5.0);

    // Output the perimeter and area of the hexagon
    std::cout << "Hexagon perimeter: " << hexagon.perimeter() << " units" << std::endl;
    std::cout << "Hexagon area: " << hexagon.area() << " square units" << std::endl;

    return 0;
}
