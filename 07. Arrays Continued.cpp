// CIS 3100 3/6/2024

// Arrays Continued

#include <iostream>
using namespace std;

// We will be finding the total sum and as well as the count/length, and max along w min values.

int main() {
    double scores[4] = {2.5, 4.5, 1.2, 0.5};
    double sum = 0;
    double max = scores[0];
    double min = scores[0];
    
    for(int i = 0; i < 4; i++){
        if (scores[i + 1] > max){
            max = scores[i + 1];
        }
        else if (scores[i] < min){
            min = scores[i];
        }
        sum += scores[i];
    }
    
    cout << "The maximum value in the array is " << max << "." << endl;
    cout << "The minimum value in the array is " << min << "." << endl;
    cout << "The sum of the array is " << sum << "." << endl;
    
    return 0;
}
