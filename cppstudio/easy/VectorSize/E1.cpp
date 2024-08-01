// Задача: определить длину вектора
// n-мерного метрического пространства

#include <iostream>
#include <vector>

namespace exc
{
	template <typename T>
	float calc_length(std::vector<T>& vec)
	{
		float result = 0;
		for (auto i = 0; i != vec.size(); i++)
			result += vec[i] * vec[i];
		return result;
	}
}