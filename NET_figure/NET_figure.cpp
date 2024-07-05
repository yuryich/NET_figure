#include <iostream>
#include <string>
using namespace std;

class Figure
{
public:
	int get_sides_count() const {
		return sides_count;
	}
	string get_name() {
		return name;
	}

	Figure(int sides_count, const string& name) : sides_count(sides_count), name(name) {}

protected:
	int sides_count;
	string name;
};

class Triangle : public Figure
{
public:
	Triangle() : Figure(3, "Треугольник") {}
};
class Quadrangle : public Figure
{
public:
	Quadrangle() : Figure(4, "Четырёхугольник") {}
};


int main()
{
	setlocale(LC_ALL, "rus");
	Figure figure(0, "Фигура");
	Triangle triangle;
	Quadrangle quadrangle;

	std::cout << "Количество сторон:" << std::endl;
	std::cout << figure.get_name() << ": " << figure.get_sides_count() << std::endl;
	std::cout << triangle.get_name() << ": " << triangle.get_sides_count() << std::endl;
	std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count() << std::endl;
}