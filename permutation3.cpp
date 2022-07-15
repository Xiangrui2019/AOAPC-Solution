#include <cstdio>
#include <algorithm>
#include <set>

using std::sort;

int nums[9], t = 0;

bool pushNumber(int x)
{
    while (x != 0)
    {
        nums[t] = x % 10;
        if (x % 10 == 0) return false;
        x /= 10;
        ++t;
    }

    return true;
}

bool isVaild(int& abc, int& def, int& ghi)
{
    if (def < 100 || def > 999) return false;
    if (ghi < 100 || ghi > 999) return false;

    t = 0;
    if (!pushNumber(abc)) return false;
    if (!pushNumber(def)) return false;
    if (!pushNumber(ghi)) return false;

    sort(nums, nums + 9);

    for (int i = 8; i > 0; i--)
        if (nums[i - 1] == nums[i]) return 0;

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

