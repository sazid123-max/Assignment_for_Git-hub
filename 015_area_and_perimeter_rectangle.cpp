#include <iostream>
using namespace std;

int main() {
    float length, width, area, perimeter;

    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    // Area = length × width
    area = length * width;

    // Perimeter = 2 × (length + width)
    perimeter = 2 * (length + width);

    cout << "\nArea of Rectangle = " << area << endl;
    cout << "Perimeter of Rectangle = " << perimeter << endl;

    return 0;
}

