#include <iostream>
using namespace std;
#include <vector>
int max_element(vector<int> v, int s, int e)
{
     if(e==-1)
     return 0;
     if (s == e)
          return v[s];
     int mid = s + (e - s) / 2;
     int left = max_element(v, s, mid);
     int right = max_element(v, mid + 1, e);
     if (left >= right)
          return left;
     else
          return right;
}
int main()
{
     int n;
     cin >> n;
     vector<int> v(n);
     for (int i = 0; i < n; i++)
     {
          cin >> v[i];
     }
     cout << max_element(v, 0, n - 1);
}