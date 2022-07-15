#include <cstdio>
#include <algorithm>

using std::sort;

int nums[9];

bool isVaild(int& abc, int& def, int& ghi)
{
    if (def < 100 || def > 999) return false;
    if (ghi < 100 || ghi > 999) return false;

    nums[0] = abc / 100;
    nums[1] = (abc % 100) / 10;
    nums[2] = (abc % 100) % 10;
    nums[3] = def / 100;
    nums[4] = (def % 100) / 10;
    nums[5] = (def % 100) % 10;
    nums[6] = ghi / 100;
    nums[7] = (ghi % 100) / 10;
    nums[8] = (ghi % 100) % 10;

    sort(nums, nums + 9);

    for (int i = 8; i > 0; i--)
    {
        if (nums[i - 1] == nums[i]) return false;
        if (nums[i] == 0 || nums[i - 1] == 0) return false;
    }

    return true;
}

int main()
{
    int abc = 100, def, ghi;

    for (; abc <= 999; abc++)
    {
        def = 2 * abc;
        ghi = 3 * abc;

        if (isVaild(abc, def, ghi)) printf("%d %d %d\n", abc, def, ghi);
    }

    return 0;
}

