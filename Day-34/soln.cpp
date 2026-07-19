#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve(int row,
           int n,
           vector<string>& board,
           vector<bool>& col,
           vector<bool>& diag1,
           vector<bool>& diag2,
           vector<vector<string>>& ans)
{
    if (row == n) {
        ans.push_back(board);
        return;
    }

    for (int c = 0; c < n; c++) {

        if (col[c] || diag1[row - c + n - 1] || diag2[row + c])
            continue;

        board[row][c] = 'Q';
        col[c] = true;
        diag1[row - c + n - 1] = true;
        diag2[row + c] = true;

        solve(row + 1, n, board, col, diag1, diag2, ans);

        board[row][c] = '.';
        col[c] = false;
        diag1[row - c + n - 1] = false;
        diag2[row + c] = false;
    }
}

int main() {

    int n;
    cin >> n;

    vector<vector<string>> ans;

    vector<string> board(n, string(n, '.'));
    vector<bool> col(n, false);
    vector<bool> diag1(2 * n - 1, false);
    vector<bool> diag2(2 * n - 1, false);

    solve(0, n, board, col, diag1, diag2, ans);

    for (auto &solution : ans) {
        for (auto &row : solution)
            cout << row << endl;
        cout << endl;
    }

    return 0;
}