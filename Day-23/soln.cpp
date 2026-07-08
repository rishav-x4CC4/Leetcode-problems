#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<int>> result(cols, vector<int>(rows));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }

    return result;
}

int main() {

    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter matrix:\n";

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    vector<vector<int>> ans = transpose(matrix);

    cout << "\nTranspose Matrix:\n";

    for (auto &row : ans) {
        for (int x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}   