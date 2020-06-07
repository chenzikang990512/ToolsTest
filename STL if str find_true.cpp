#include <iostream>

int main()
{
	std::string str("abcabcabc");
	std::string::size_type position = 0;

	while ((position = str.find("abc", position)) != std::string::npos)
	{
		std::cout << "position: " << position << std::endl;
		position++;
	}

}