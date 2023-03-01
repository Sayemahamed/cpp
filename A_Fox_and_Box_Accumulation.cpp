#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------//
// definitions //
#define endl '\n'
#define PI (acos(-1.0))
#define tan(a) tan(a) / (PI / 180)
#define sin(a) sin(a) / (PI / 180)
#define cos(a) cos(a) / (PI / 180)

//----------------------------------------------------------------//
// data types//
struct Point
{
    float x, y;
};

//----------------------------------------------------------------//
// preDefined functions//
// geometry//
double getClockwiseAngle(Point p)
{
    double angle = 0.0;
    angle = -1 * atan2(p.x, -1 * p.y);
    return angle;
}
bool comparePoints(Point p1, Point p2) { return getClockwiseAngle(p1) < getClockwiseAngle(p2); }
double polygonArea(vector<Point> &points)
{
    double area = 0.0;
    long long j = points.size() - 1;
    for (long long i = 0; i < points.size(); i++)
    {
        area += (points[j].x + points[i].x) * (points[j].y - points[i].y);
        j = i;
    }
    return abs(area / 2.0);
}
// geometry//
// number theory //
template <typename T>
bool isPrime(T n)
{
    if (n <= 1)
        return false;
    for (long long i = 2; i * i <= n; ++i)
    {
        if (!(n % i))
            return false;
    }
    return true;
}
template <typename T>
long long factorial(T N)
{
    long long ans = 1;
    while (N > 1)
        ans *= N--;
    return ans;
}
template <typename T, typename Y>
long long NCR(T N, Y R)
{
    long long ans = 1, tmp = N - R;
    while (N > 1)
    {
        ans *= N--;
        while (R > 1 and !(ans % R))
            ans /= R--;
        while (tmp > 1 and !(ans % tmp))
            ans /= tmp--;
    }
    return ans;
}
template <typename T, typename Y>
long long NPR(T N, Y R)
{
    long long ans = 1, tmp = N - R;
    while (N > 1)
    {
        ans *= N--;
        while (tmp > 1 and !(ans % tmp))
            ans /= tmp--;
    }
    return ans;
}
void sieve(vector<bool> &ans)
{
    ans[0] = ans[1] = false;
    long long tmp = sqrt(ans.size()), till = ans.size();
    for (long long i = 2; i <= tmp; i++)
        if (ans[i])
            for (long long j = i * i; j < till; j += i)
                ans[j] = false;
}
template <typename T>
map<long long, long long> primeFactors(T N)
{
    map<long long, long long> ans;
    long long till = sqrt(N);
    for (long long i = 2; i <= till; i++)
    {
        while (!(N % i))
        {
            ans[i]++;
            N /= i;
        }
        if (i >= N or i >= till)
            break;
    }
    if (N > 1)
        ans[N]++;
    return ans;
}
// number theory//
bool isVowel(char c)
{
    string vowel = "aeiouAEIOU";
    for (auto &it : vowel)
        if (it == c)
            return true;
    return false;
}

//----------------------------------------------------------------//
// helper functions //

//----------------------------------------------------------------//
// solve function//
void solve()
{
    long long n, ans = 0;
    cin >> n;
    map<long long, long long> dat;
    vector<long long> box(n);
    for (auto &it : box)
    {
        cin >> it;
        dat[it]++;
    }
    for (auto &it : box)
    {
        if (dat.find(it) != dat.end())
        {
            if (dat[it])
            {
                ans++;
                long long cnt = 0;
                for (auto &it2 : dat)
                {
                    while (it2.second and it2.first >= cnt)
                    {
                        cnt++;
                        it2.second--;
                    }
                }
            }
            else
                dat.erase(dat.find(it));
        }
    }
    cout << ans << endl;
}

//----------------------------------------------------------------//
// main function//
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long test = 1;
    // cin >> test;
    while (test--)
    {
        solve();
    }
}