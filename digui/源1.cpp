#include<iostream>
using namespace std;
class Solution {
public:
    int passThePillow(int n, int time) {

        return helper(1, 1, n, time);

    }
    int helper(int pos, int dir, int n, int time)
    {
        if (time == 0)
            return pos;

        int next = pos + dir;

        if (next == 1 || next == n)
        {
            dir = -1 * dir;
        }

        return (next, dir, n, time - 1);


    }

};
int main()
{
    Solution ss;
    cout << ss.passThePillow(4, 5);

	return 0;
}