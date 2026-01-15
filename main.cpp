#include <vector>
#include "myallocator.h"
#include <iostream>

using namespace std;

int main()
{
    vector<int, MyAllocator<int>> vec;

    // for (int i = 0; i < 100; ++i)
    for (int i = 0; i < 10; ++i)
    {
        // vec.push_back(rand() % 100);
        vec.push_back(rand() % 1000);
    }

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
