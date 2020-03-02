int max(int x, int y) { return x > y ? x : y; }

int leastInterval(char *tasks, int tasksSize, int n)
{
    int map[26] = {0};
    int ans, fre = 0;

    for (int i = 0; i < tasksSize; ++i) {
        int idx = tasks[i] - 'A';
        map[idx]++;
        fre = max(fre, map[idx]);   
    }/* After the circulation, fre means the most frequent letter's appearence time.*/

    ans = (n + 1)*(fre - 1);
    for (int i = 0; i < 26; ++i) {
        if (map[i] == fre)
            ans++;
    }/* For the case that more than one letter appears most frequently */

    return max(tasksSize, ans);
}
