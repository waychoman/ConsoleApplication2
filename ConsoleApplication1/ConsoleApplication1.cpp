
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

template<typename C>struct IsConst
{
	static constexpr bool value = false;
};

template<typename C>struct IsConst<const C >
{
	static constexpr bool value = true;
};

int main()
{
	std::cout << IsConst<int>::value << std::endl;
	std::cout << IsConst<const int>::value << std::endl;
	std::cout << IsConst<float>::value << std::endl;
	std::cout << IsConst<const float>::value << std::endl;

}