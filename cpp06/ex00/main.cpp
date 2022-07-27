#include <iostream>
#include <string>

int main()
{
	float s = 42.0f;
	std::cout << static_cast<char>(s) << std::endl;
	double t = 12.7;
	std::cout << t.c_str() << std::endl;
	return (0);
}
