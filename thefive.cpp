#include <iostream>
#include <string>

class T {
	int age;
	std::string name;
	public:

	T(std::string n, int a) : name(n), age(a) { 
		std::cout << "Param ctor\n";
	} //parameterized ctor
						        T(const T& source) {
								this->name = source.name;
								this->age = source.age:
									std::cout << "Copy ctor\n";
							} //Copy ctor
							T& operator=(const T& source) {
								if (this != &source) {
									this->name = source.name;
									this->age = source.age;
								}
									std::cout << "Copy assignment operator\n";
									return *this;
								} //copy assignment operator
							T(T&& source) noexcept {
								this->name = std::move(source.name);
								this->age = std::move(source.age);
								std::cout << "Move ctor\n";
							} //move ctor
							T& operator=(T&& source) noexcept {
								if( this != &source) {
								this->name = std::move(source.name);
								this->age = std::move(source.age);
								}
								std::cout << "Move assignment operator\n";
								return *this;
							} //move assignment operator
							~T() { std::cout << "Dtor\n"; }
};

int main() {
	T t("Leo", 25),
}

