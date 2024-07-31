#include <iostream>

namespace exc
{
	std::string generate_frame(const std::string text)
	{
		std::string result = "";
 
		int max_str = 0;
		int first_iter = 0;
		for (int i = 0; i != text.length() + 1; i++)
		{
			if (i == text.length() || text[i] == '\n')
			{
				int str_size = i - first_iter;
				if (str_size > max_str)
					max_str = str_size;
				first_iter = i + 1;
			}
		}

		first_iter = 0;
		for (int i = 0; i != text.length() + 1; i++)
		{
			if (i == text.length() || text[i] == '\n')
			{
				int str_size = i - first_iter;
				result += "* " + text.substr(first_iter, str_size);
				result += std::string(max_str - str_size, ' ') + " *\n";
				first_iter = i + 1;
			}
		}

		result = std::string(max_str + 4, '-') + '\n' + result + std::string(max_str + 4, '-');

		return result;
	}
}