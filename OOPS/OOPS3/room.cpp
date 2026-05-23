#include <iostream>
using namespace std;
class Room {
private:
    double length;
    double width;
    double height;

public:
    // Constructor to initialize room dimensions
    Room(double l, double w, double h) : length(l), width(w), height(h) {}

    // Function to calculate the area (length * width)
    double area() const {
        return length * width;
    }

    // Function to calculate the volume (length * width * height)
    double volume() const {
        return length * width * height;
    }

    // Getter functions for dimensions (optional)
    double getLength() const { return length; }
    double getWidth() const { return width; }
    double getHeight() const { return height; }
};

int main() {
    // Create a room with length=5, width=4, and height=3
    Room room(5.0, 4.0, 3.0);

    // Output the area and volume of the room
    std::cout << "Room area: " << room.area() << " square meters" << std::endl;
    std::cout << "Room volume: " << room.volume() << " cubic meters" << std::endl;

    return 0;
}
