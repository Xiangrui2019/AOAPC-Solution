#include <cstdio>
#include <algorithm>
#include <set>

using std::sort;
using std::set;

set<int> nums;

bool pushNumber(int x)
{
    while (x != 0)
    {
        nums.insert(x % 10);
        if (x % 10 == 0) return false;
        x /= 10;
    }

    return true;
}

bool isVaild(int& abc, int& def, int& ghi)
{
    if (def < 100 || def > 999) return false;
    if (ghi < 100 || ghi > 999) return false;

    nums.clear();
    if (!pushNumber(abc)) return false;
    if (!pushNumber(def)) return false;
    if (!pushNumber(ghi)) return false;
    if (nums.size() != 9) return false;

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

