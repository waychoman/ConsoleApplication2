
#include <iostream>

template<typename T,std::size_t N>
class StaticArray
{
	T data[N];
public:
	constexpr T& operator[](std::size_t i) { return data[i]; }
	constexpr const T& operator[](std::size_t i) const { return data[i]; }
    constexpr std::size_t size() const { return N; }
};

int main()
{
	StaticArray<int, 10> data;

	for (auto i = 0; i < data.size(); ++i)
	{
		data[i] = i;
	}

	std::cout << data[5] << std::endl; 









}