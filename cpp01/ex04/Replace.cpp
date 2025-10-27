#include "Replace.hpp"

bool Replace::process(const std::string &filename, const std::string &s1, const std::string &s2)
{
	if (filename.empty() || s1.empty())
	{
		std::cerr << "Error: filename and s1 must not be empty." << std::endl;
		return false;
	}

	std::ifstream inFile(filename.c_str());
	if (!inFile)
	{
		std::cerr << "Error: could not open input file." << std::endl;
		return false;
	}

	std::string outFilename = filename + ".replace";
	std::ofstream outFile(outFilename.c_str());
	if (!outFile)
	{
		std::cerr << "Error: could not open output file." << std::endl;
		return false;
	}

	std::string line;
	while (std::getline(inFile, line))
	{
		std::string result;
		size_t pos = 0;
		while (true)
		{
			size_t found = line.find(s1, pos);
			if (found == std::string::npos)
			{
				result.append(line.substr(pos));
				break;
			}
			result.append(line.substr(pos, found - pos));
			result.append(s2);
			pos = found + s1.length();
		}
		outFile << result;
		if (!inFile.eof())
			outFile << "\n";
	}

	inFile.close();
	outFile.close();
	return true;
}