#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long students, ans = 0, j = 0;
    cin >> students;
    long long student[students];
    for (auto &it : student)
        cin >> it;
    sort(student, student + students);
    for (long long i = 0; i < students; i++)
    {
        while (student[j] - student[i] <= 5 and j < students)
        {
            j++;
        }
        ans = max(ans, j - i);
    }
    cout << ans << endl;
}