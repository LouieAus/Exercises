// Задача: посчитать количество вхождений каждой буквы в строке

#include <iostream>
#include <map>

namespace exc
{
	std::map<char, unsigned int> count(const std::string& string)
	{
		std::map<char, unsigned int> result;

		for (auto i = 0; i != string.size(); i++)
		{
			if (auto found = result.find(string[i]); found != result.end())
			{
				found->second += 1;
			}
			else
			{
				result.insert(std::pair{string[i], 1});
			}
		}

		return result;
	}
}

int main()
{
	std::string test_str = "hello";
	std::map<char, unsigned int> res = exc::count(test_str);

	for (auto it = res.begin(); it != res.end(); it++)
		std::cout << it->first << '\t' << it->second << '\n';
}