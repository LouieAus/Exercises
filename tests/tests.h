#include <iostream>
#include <string>

namespace test
{
	class Test
	{
	public:
		template <typename T>
		void equal_test(T result, T expected, int &n);
	};

	template <typename T>
	void Test::equal_test(T result, T expected, int &n)
	{
		std::cout << "Test" << (n == -1 ? "" : " " + std::to_string(n++)) << ": ";
		std::cout << (result == expected ? "passed" : "failed") << '\n';
	}
}