#include <iostream>
#include <vector>
#include <type_traits>

namespace exc
{
	template <typename T>
	constexpr std::vector<unsigned char> separate_number(T number)
	{
		if (std::is_same_v<T, short> || std::is_same_v<T, unsigned short> ||
			std::is_same_v<T, int> || std::is_same_v<T, unsigned int> ||
			std::is_same_v<T, long long> || std::is_same_v<T, unsigned long long>)
		{
			if (number < 0)
				number *= -1;

			std::vector<unsigned char> result;
			
			do {
				result.insert(result.begin(), (unsigned char)(number % 10));
				number /= 10;
			} while (number != 0);

			return result;
		}
		else
			throw std::invalid_argument{ "Number must be (un)signed short, int, long long" };
	}
}