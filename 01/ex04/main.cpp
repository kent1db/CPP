#include <iostream>
#include <fstream>

std::string SearchAndReplace(std::string s1, std::string s2, std::ifstream& ifs)
{
	std::string file;
	while (ifs.eof() != true)
		file += ifs.get();
	file.erase(file.end()-1);
	size_t pos = 0;
	while ((pos = file.find(s1, pos)) != std::string::npos)
	{
		file.erase(pos, s1.length());
		file.insert(pos, s2);
		pos += s2.length();
	}
	ifs.close();
	return (file);
}

int		main(void)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::cout << "\x1B[33mFile name ?\033[0m\n";
	std::getline(std::cin, filename);
	std::cout << "\x1B[33mString to replace ?\033[0m\n";
	std::getline(std::cin, s1);
	std::cout << "\x1B[33mReplace with ?\033[0m\n";
	std::getline(std::cin, s2);
	if (s1.empty() || s2.empty() || filename.empty())
	{
		std::cout << "\x1B[31mArguments cannot be empty\033[0m\n";
		return (0);
	}
	std::ifstream ifs(filename);
	if (!ifs.is_open())
	{
		std::cout << "\x1B[31mNo file found\033[0m\n";
		return (0);
	}
	std::ofstream ofs(filename + ".replace");
	ofs << SearchAndReplace(s1, s2, ifs);
	ofs.close();
	return (0);
}
