#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (!Replace::process(filename, s1, s2))
		return 1;

	std::cout << "File processed successfully: " << filename << ".replace" << std::endl;
	return 0;
}