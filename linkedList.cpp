#include <bits/stdc++.h>
using namespace std;
class chainList
{
public:
    long long element = 0;
    chainList *point = NULL;
    chainList(long long element)
    {
        this->element = element;
        point = NULL;
    }
    chainList()
    {
        this->element = 0;
        this->point = NULL;
    }
    void pnt()
    {
        chainList *tempPoint = point;
        while (tempPoint != NULL)
        {
            cout << this->element << ' ';
            tempPoint = tempPoint->point;
        }
            cout << tempPoint->element << ' ';
    }
    void add(long long element)
    {
        if (this->element == 0)
            this->element = element;
        else
        {
            chainList *tempPoint = this->point;
            while (tempPoint != NULL)
                tempPoint = tempPoint->point;
            tempPoint->element = element;
        }
    }
};
int main()
{
    chainList a(3);
    a.add(1);
    a.add(2);
    a.pnt();
}