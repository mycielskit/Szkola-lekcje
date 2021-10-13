#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;

struct TreeNode
{
    int parent = -1;
    int level = 0;
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a, b, curr, q, count, root;
    cin >> n;
    vector<TreeNode> tree(n);
    cin >> a >> b;
    root = --a;
    tree[root].level = 0;
    tree[--b].parent = root;
    tree[b].level = 1;
    for(int i = 2; i < n; i++)
    {
        cin >> a >> b;
        a--, b--;
        if(tree[a].parent == -1 && a != root)
            swap(a, b);
        tree[b].parent = a;
        tree[b].level = tree[a].level + 1;
    }
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        count = 0;
        cin >> a >> b;
        if(tree[--a].level > tree[--b].level)
            swap(a, b);
        while(tree[a].level != tree[b].level)
        {
            count++;
            b = tree[b].parent;
        }
        while(tree[a].parent != tree[b].parent)
        {
            count += 2;
            a = tree[a].parent;
            b = tree[b].parent;
        }
        if(a != b)
            count += 2;
        cout << count << '\n';
    }
    return 0;
}