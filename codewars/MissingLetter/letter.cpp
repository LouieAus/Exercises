// Задача: написать функцию, ищущую пропущенную букву

#include <iostream>
#include <vector>

namespace exc
{
	std::vector<char> findLetter(const std::vector<char>& letters)
	{
		std::vector<char> result;

		for (auto i = 0; i != letters.size() - 1; i++)
		{
			unsigned short dist = letters[i + 1] - letters[i];
			if (dist > 1)
			{
				for (auto j = 1; j != dist; j++)
				{
					result.push_back(letters[i] + j);
				}
			}
		}

		return result;
	}
}