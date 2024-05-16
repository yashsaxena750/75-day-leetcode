#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > rotateMatrix(vector<vector<int> > &matrix){

    int rows = matrix.size();
    int cols = (rows > 0) ? matrix[0].size() : 0;

    std::vector<std::vector<int>> result(cols, std::vector<int>(rows));
    int ir = 0;
    int jr = rows;

    for(int j=0;j<cols;j++)//2
    {

        for(int i=0;i<rows;i++)//0
        {
            result[ir][jr-1] = matrix[i][j];//02 = 00
            jr--;
        
        }
        ir++;
        jr = rows;
        
    }

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }


    return matrix;
    
}


int main()
{
    
    int t = 0;
    std::cin>>t;

    while(t--)
    {
        int rows;
        int cols;
        std::cin >> rows;
        std::cin >> cols;

        std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

        for (int i = 0; i < rows; ++i) 
        {
            for (int j = 0; j < cols; ++j) 
            {
                std::cin >> matrix[i][j];
            }
        }

        matrix = rotateMatrix(matrix);

    }


    return 0;
}