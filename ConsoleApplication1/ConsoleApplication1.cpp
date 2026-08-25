
#include <iostream>

template<typename T>struct IsPointer
{
	static constexpr bool value = false;
};

template<typename U>struct IsPointer<U*>
{
	static constexpr bool value = true;
};

struct NotPointer :IsPointer<int>
{
};

template<typename H>struct IsArray
{
	static constexpr bool value = false;
};

template<typename H, std::size_t a>struct IsArray<H[a]>
{
	static constexpr bool value = true;
};

int main()
{
	std::cout << IsArray<int>::value << std::endl;
	std::cout << IsArray<int[10]>::value << std::endl;
	std::cout << IsArray<float[5]>::value << std::endl;

}