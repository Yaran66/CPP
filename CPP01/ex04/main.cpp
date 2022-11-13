
#include <iostream>
#include <fstream>

std::string	func_replace(std::string line, std::string str1, std::string str2)
{
	std::string result;
	std::string::size_type next = 0;
	std::string::size_type prev = 0;
//	size_t prev = 0;
	while(1)
	{
		prev = next;
		next = line.find(str1, prev);
		result.append(line.substr(prev, next - prev));
		if (next == std::string::npos)
			break;
		result.append(str2);
		next += str1.length();
	}
	return result;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Wrong number of arguments." << std::endl;
		return (0);
	}

	std::ifstream input(argv[1]);

	if (!input.is_open())
	{
		std::cout << "Error: File not found." << std::endl;
		return (0);
	}

	std::string line;
	std::getline(input, line, '\0');
	input.close();

	std::string replaced_line;
	replaced_line = func_replace(line, argv[2], argv[3]);
	std::string fileout = std::string(argv[1]) + ".replace";

	std::ofstream output;
	char	*ptr;
	ptr = &fileout[0];
	output.open(ptr);
	output << replaced_line;
	output.close();
	return 0;
}
