// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:

    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> diffs;

        for (int i = 0; i < nums.size(); ++i) {
            int value = nums[i];

            auto found = diffs.find(value);
            if (found != diffs.end()) {
                return std::vector<int>{found->second, i};
            }

            diffs[target - value] = i;
        }

        return std::vector<int>();
    }
};
int main()
{
    std::vector<int> vect = { 1,2,3,4 };
    int target = 4;
    Solution S;
    vect = S.twoSum(vect, target);
    for (auto const& i : vect)
    {
        std::cout << i << std::endl;
    }
    system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
