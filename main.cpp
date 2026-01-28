#include <iostream>

class Shape {

    private:
        int sideCnt{0};
        std::string name;

    public:
        Shape(int sideCnt = 0, std::string name = "Фигура") : sideCnt(sideCnt), name(name) {}
        int get_sideCount() const{
            return sideCnt;
        }

        virtual std::string get_name() const {
            return name;
        }

        virtual void print_info() const {
            std::cout << get_name() << ": " << get_sideCount() << std::endl;
        }
    };


class Triangle : public Shape {

    public:
        Triangle() : Shape(3, "Треугольник") {}
};

class Rectangle : public Shape {

    public:
        Rectangle() : Shape(4, "Четырёхугольник") {}
};

int main() {
    
    Shape shape;
    Triangle triangle;
    Rectangle rectangle;

    std::cout << "Количество сторон:" << std::endl;
    shape.print_info();
    triangle.print_info();
    rectangle.print_info();

    return 0;
}
