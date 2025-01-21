// Pascal's Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

std::vector<int> PascalTriangleRow(int rowNo)
{
    std::vector<int> result(rowNo);
    result[0] = 1;
    if (rowNo == 1)
        return result;

    auto vi = PascalTriangleRow(rowNo - 1);
    for (auto i = 1; i < rowNo - 1; ++i)
    {
        result[i] = vi[i - 1] + vi[i];
    }

    result[rowNo-1] = 1;

    return result;
}

int main()
{
	while (true)
	{
		int count = 0;
		std::cout << "Number of rows of the Pascal's triangle: ";
		std::cin >> count;
		if (count == 0)
			break;

        auto vec = PascalTriangleRow(count);
        bool isFirstElement = true;
        std::cout << "The " << count << "th row of the Pascal's triangle is ";
        std::cout << "[";
        for (auto i : vec)
        {
            if (!isFirstElement)
                std::cout << " ";
            else
                isFirstElement = false;

            std::cout << i;
        }

		std::cout << "]" << std::endl;
	}
}
