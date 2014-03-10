#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

int main()
{
    vector<int> nums;
     int sizn;
    int temp;

    while(cin >> temp)
    {
        nums.push_back(temp);

        if(cin.peek() == '\n')
            break;
    }

    sizn = nums.size();

    for(int i = sizn-1; i > -1; i--)
    {
        cout << nums[i] << " ";
    }

    getch();
    return 0;
}
