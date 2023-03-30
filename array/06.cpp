#include <bits/stdc++.h>
using namespace std;

vector<int> unionOfArrays(int a[], int n, int b[], int m)
{
    unordered_map<int, int> umap;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        umap[a[i]]++;
        umap[b[j]]++;
        i++;
        j++;
    }
    while (i < n)
    {
        umap[a[i]]++;
        i++;
    }
    while (j < m)
    {
        umap[b[j]]++;
        j++;
    }
    vector<int> ans;
    unordered_map<int, int>::iterator it;
    for (it = umap.begin(); it != umap.end(); it++)
    {
        if (it->second > 0)
            ans.push_back(it->first);
    }
    return ans;
}

int main()
{

    int a[6] = {85, 1, 25, 32, 54, 6};
    int b[2] = {85, 2};
    vector<int> ans = unionOfArrays(a, 6, b, 2);
    vector<int>::iterator it;
    for(it = ans.begin(); it!= ans.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << endl;
    return 0;
}