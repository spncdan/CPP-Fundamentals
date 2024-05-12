// CIS 3100 3/11/24

/*

    Matrixes
 
*/

#include <iostream>
using namespace std;

int main() {
    
    // 3 by 3 matrix
    
    int grid[3][3] = {
        
                /*  0  1  2  */
        /* 0 */    {2, 6, 1},
        /* 1 */    {8, 4, 9},
        /* 2 */    {1, 2, 3}
        
    };
    
    // Rows = horizontal, Columns = vertical
    
    // Individually printing each number within the matrix
    
   /*
    cout << grid[0][0] << endl; = 2
    
    cout << grid[0][1] << endl; = 6
    
    cout << grid[0][2] << endl; = 1
    
    cout << grid[1][0] << endl; = 8
    
    cout << grid[1][1] << endl; = 4
    
    cout << grid[1][2] << endl; = 9
    
    cout << grid[2][0] << endl; = 1
    
    cout << grid[2][1] << endl; = 2
    
    cout << grid[2][2] << endl; = 3
    */
    
    // accumlator
    
    int sum = 0;
    
    // printing entire matrix using a Nested For Loop
    
    // generates row indexes
    for(int i = 0; i < 3; i++) {
        // generate column indexes
        for(int j = 0; j < 3; j++){
            cout << "at index: " << i << " " << j << " : " << grid[i][j] << endl; // This for loop will keep running for each time i is incremented so thus it will be j going from 0, 1, 2 and then going back to i
            sum += grid[i][j]; // Adds our matrix to the sum variable
            cout << "The sum is now " << sum << endl;
        }
        cout << endl; // allows matrix to be seperated after each line ends
    }
    
    // in order to print elements diagonally along the array where you would only see //
    
    /*
     
  {[2], 6, 1},
  {8, [4], 9},
  {1, 2, [3]}
    
    */
    
    /*
     
     for(int i = 0; i < 3; i++) {
         for(int j = 0; j < 3; j++){
            if (i == j) { // When i and j are the same you are looking at the diagonals of the matrix
                cout << "at index: " << i << " " << j << " : " << grid[i][j] << endl;
            }
         }
         cout << endl;
     }
     
     */
    
    // Say we want to change the 4 in the matrix to a 10 we would simply do... //
    
    // grid[1][1] = 10; //
    
    // Find sum of all even numbers within the matrix //
    
    /*
     
  {2, 6, 1},
  {8, 4, 9},
  {1, 2, 3}
    
    */
    
    int even_sum = 0;
    
    // outer loop: generates the row indexes
    for(int r = 0; r < 3; r++){
        // inner loop: generates the col infexes
        for(int c = 0; c < 3; c++){
            if(grid[r][c] % 2 == 0){
                cout << grid[r][c] << " ";
                even_sum += grid[r][c];
                cout << "the sum is now: " << even_sum << endl;
            }
        }
        cout << endl;
    }
        
    cout << "The sum of all even numbers is " << even_sum << endl;

    return 0;
}
