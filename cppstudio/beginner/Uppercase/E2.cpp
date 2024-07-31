#include <iostream>

namespace exc
{
	std::string set_upper(std::string text)
	{
		for (auto i = 0; i != text.length(); i++)
		{
			if (97 <= text[i] && text[i] <= 122)
				text[i] -= 32;
		}
		return text;
	}

	std::string set_lower(std::string text)
	{
		for (auto i = 0; i != text.length(); i++)
		{
			if (65 <= text[i] && text[i] <= 90)
				text[i] += 32;
		}
		return text;	
	}
}