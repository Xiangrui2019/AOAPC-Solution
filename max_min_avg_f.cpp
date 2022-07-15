#include <cstdio>

int main()
{
    int max_s, min_s, val, cnt = 0, sum = 0;
    FILE *fin, *fout;
    fin = fopen("max_min_avg.in", "rb");
    fout = fopen("max_min_avg.out", "wb");

    while (fscanf(fin, "%d", &val) == 1)
    {
        if (cnt == 0) max_s = min_s = val;
        
        sum += val;
        if (val > max_s) max_s = val;
        if (val < min_s) min_s = val;
        
        cnt++;
    }

    fprintf(fout, "%d %d %.3f\n", max_s, min_s, (double) sum / cnt);
    
    fclose(fin);
    fclose(fout);

    return 0;
}

