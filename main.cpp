#include <iostream>

class Shape {

    protected:
        int sideCnt{0};
    public:
        Shape() {}
        int sideCount() {
            return sideCnt;
        }
    };


class Triangle : public Shape {

    public:
        Triangle() : Shape() {
            sideCnt = 3;
        }
};

class Rectangle : public Shape {

    public:
        Rectangle() : Shape() {
            sideCnt = 4;
        }
};

int main() {
    
    Shape shape;
    Triangle triangle;
    Rectangle rectangle;

    std::cout << "Количество сторон:" << std::endl;
    std::cout << "Фигура: " << shape.sideCount() << std::endl;
    std::cout << "Треугольник: " << triangle.sideCount() << std::endl;
    std::cout << "Четырёхугольник: " << rectangle.sideCount() << std::endl;

    return 0;
}
