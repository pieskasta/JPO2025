#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

void calculate_sum(const std::vector<std::vector<int>>& matrix)
{
    int sum = 0;
    //cols
    for(int j = 1; j<=matrix[0].size(); j++)
    {
        //rows
        for(int i = 1; i<=matrix.size(); i++)
        {
        if(j%2 == 0 || i%2 == 1)
            sum +=  matrix[i-1][j-1];
        }
    }
    std::cout << "\n";
    std::cout << "Sum of even columns or odd rows: " << sum;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1;
    //vector of vectors
    std::vector<std::vector<int>> Matrix_A;
    std::vector<int> temp_row;
    unsigned int cols {};
    unsigned int rows {};
    std::cout << "Enter the number of colums\n";
    std::cin >> cols;
    std::cout << "Enter the number of colums\n";
    std::cin >> rows;
    std::cout << "\n";
    
    for(int j=1 ; j <= rows ; j++)
    {
        //Fill temporary row with random numbers
        for(int i=1 ; i<=cols ; i++)
        {
            temp_row.push_back(rand() % 9 + 1);
        }
        Matrix_A.push_back(temp_row);
        temp_row.clear();
    }
    
    for(int j=1 ; j <= cols ; j++)
    {
        for(int i=1 ; i<=rows ; i++)
        {                     //cols/rows
        std::cout << Matrix_A[i-1][j-1] << "\t";
        }
        std::cout << "\n";
    }
    calculate_sum(Matrix_A);
    return 0;
}

