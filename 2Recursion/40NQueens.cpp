#include <iostream>
#include <vector>

using namespace std;

void printSolution(vector<vector<int>> &board, int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

bool isSafe(vector<vector<int>> &board, int row, int col, int N)
{
    // Check this row on left side
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return false;

    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // Check lower diagonal on left side
    for (int i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

bool solveNQUtil(vector<vector<int>> &board, int col, int N)
{
    if (col >= N)
    {
        printSolution(board, N);
        return true;
    }

    bool res = false;
    for (int i = 0; i < N; i++)
    {
        if (isSafe(board, i, col, N))
        {
            board[i][col] = 1;

            // Make result true if any placement is possible
            res = solveNQUtil(board, col + 1, N) || res;

            board[i][col] = 0; // BACKTRACK
        }
    }

    return res;
}

void solveNQ(int N)
{
    vector<vector<int>> board(N, vector<int>(N, 0));

    if (!solveNQUtil(board, 0, N))
    {
        cout << "Solution does not exist";
    }
}

int main()
{
    int N = 4; // Change this value for different board sizes
    solveNQ(N);
    return 0;
}
