// Code By @trickymindme
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
using namespace std;

int minimum_steps_to_visit(vi points)
{
    // Initializing and Declaring Required data variables
    int x1 = points[0];
    int y1 = points[1];
    int x2 = points[2];
    int y2 = points[3];
    vector<vi> board;
    for (int i = 0; i < 8; i++)
    {
        vi v1(8, 0);
        board.push_back(v1);
    }

    // for (auto i : board)
    // {
    //     for (int x : i)
    //         cout << x << " ";
    //     cout << endl;
    // }
    // cout << endl
    //      << endl;

    queue<pair<int, int>> bfs_queue;
    bfs_queue.push(make_pair(x1, y1));

    while (!bfs_queue.empty())
    {
        pair<int, int> p = bfs_queue.front();
        int i = p.first, j = p.second;
        if (i == x2 && j == y2)
        {
            break;
        }
        bfs_queue.pop();

        //  8 ways That knight can visit
        //    |  0   1   2   3   4
        //    | --------------------
        //  0 |    	1		1
        //  1 |  1				1
        //  2 |   		X
        //  3 |  1				1
        //  4 |   	1		1

        if ((i - 2 >= 0) && (j - 1 >= 0) && ((i - 2 != x1) || (j - 1 != y1)) && (board[i - 2][j - 1] == 0))
        {
            bfs_queue.push(make_pair(i - 2, j - 1));
            board[i - 2][j - 1] = board[i][j] + 1;
        }

        if ((i - 2 >= 0) && (j + 1 <= 7) && ((i - 2 != x1) || (j + 1 != y1)) && (board[i - 2][j + 1] == 0))
        {
            bfs_queue.push(make_pair(i - 2, j + 1));
            board[i - 2][j + 1] = board[i][j] + 1;
        }

        if ((i - 1 >= 0) && (j - 2 >= 0) && ((i - 1 != x1) || (j - 2 != y1)) && (board[i - 1][j - 2] == 0))
        {
            bfs_queue.push(make_pair(i - 1, j - 2));
            board[i - 1][j - 2] = board[i][j] + 1;
        }

        if ((i - 1 >= 0) && (j + 2 <= 7) && ((i - 1 != x1) || (j + 2 != y1)) && (board[i - 1][j + 2] == 0))
        {
            bfs_queue.push(make_pair(i - 1, j + 2));
            board[i - 1][j + 2] = board[i][j] + 1;
        }

        if ((i + 1 <= 7) && (j - 2 >= 0) && ((i + 1 != x1) || (j - 2 != y1)) && (board[i + 1][j - 2] == 0))
        {
            bfs_queue.push(make_pair(i + 1, j - 2));
            board[i + 1][j - 2] = board[i][j] + 1;
        }

        if ((i + 1 <= 7) && (j + 2 <= 7) && ((i + 1 != x1) || (j + 2 != y1)) && (board[i + 1][j + 2] == 0))
        {
            bfs_queue.push(make_pair(i + 1, j + 2));
            board[i + 1][j + 2] = board[i][j] + 1;
        }

        if ((i + 2 <= 7) && (j - 1 >= 0) && ((i + 2 != x1) || (j - 1 != y1)) && (board[i + 2][j - 1] == 0))
        {
            bfs_queue.push(make_pair(i + 2, j - 1));
            board[i + 2][j - 1] = board[i][j] + 1;
        }

        if ((i + 2 <= 7) && (j + 1 <= 7) && ((i + 2 != x1) || (j + 1 != y1)) && (board[i + 2][j + 1] == 0))
        {
            bfs_queue.push(make_pair(i + 2, j + 1));
            board[i + 2][j + 1] = board[i][j] + 1;
        }

        // for (auto i : board)
        // {
        //     for (int x : i)
        //         cout << x << " ";
        //     cout << endl;
        // }
        // cout << endl
        //      << endl;
    }
    // for (auto i : board)
    // {
    //     for (int x : i)
    //         cout << x << " ";
    //     cout << endl;
    // }
    return board[x2][y2] == 0 ? -1 : board[x2][y2];
}

void solve()
{
    vi v(4);
    for (int &i : v)
    {
        cin >> i;
        i--;
    }
    if (v[0] == v[2] && v[1] == v[3])
    {
        cout << "YES" << endl;
        return;
    }

    int n = minimum_steps_to_visit(v);
    cout << n << endl;

    if ( n % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T = 1;
    cin >> T;
    for (int c = 1; c < T + 1; c++)
    {
        // cout<<"Case #"<<c<<": ";
        solve();
    }

    return 0;
}
