//ниже задания для рассуждения
//-1) создайте класс "животное"
//-2) создайте у него три потомка
//-3) в основной класс вынесите св-ва, которые будут общими у всех потомков
//-4) в родителя добавить метод, который общий для всех потомков
//-5) в каждом потомке создать метод, который присущ только ему

#include <iostream>

class Animal
{
public:
	int eyes;
	
	void commonMethod() {
		std::cout << "Животное" << std::endl;
	}
};

class Cat : public Animal
{
	void Myau()
	{
		std::cout << "Myau\n";
	}
};

class Dog : public Animal
{
	void Gav()
	{
		std::cout << "Gav\n";
	}
};

class Cow : public Animal
{
	void Muu()
	{
		std::cout << "Muu\n";
	}
};

int main()
{
	
}
