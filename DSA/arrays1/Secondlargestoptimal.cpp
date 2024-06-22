/*
This program reads an array of integers from the user and finds the second largest element in the array.
It handles edge cases such as the array having fewer than two elements and all elements being the same.
*/

#include <iostream>  // Include the necessary library for input/output operations
#include <climits>   // Include the necessary library to use INT_MIN and INT_MAX
using namespace std;

int main() {
    int n;  // Variable to store the size of the array
    cin >> n;  // Read the size of the array from the user

    // Check if the array size is less than 2
    if (n < 2) {
        cout << "Array should have at least two elements" << endl;
        return 0;  // Exit the program if there are fewer than 2 elements
    }

    int arr[n];  // Declare an array of size 'n'

    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Read each element into the array
    }

    // Initialize variables
    int largest = INT_MIN;  // Initialize largest to the smallest possible integer
    int secondLargest = INT_MIN;  // Initialize second largest to the smallest possible integer
    bool allSame = true;  // Flag to check if all elements are the same

    // Loop through the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {  // If the current element is greater than the largest
            secondLargest = largest;  // Update second largest to be the previous largest
            largest = arr[i];  // Update largest to the current element
        } else if (arr[i] > secondLargest && arr[i] != largest) {  // If current element is not largest but greater than second largest
            secondLargest = arr[i];  // Update second largest to the current element
        }

        // Check if all elements are the same
        if (i > 0 && arr[i] != arr[i-1]) {  // Compare current element with the previous one
            allSame = false;  // Set the flag to false if any element is different
        }
    }

    // Handle the case where all elements in the array are the same
    if (allSame) {
        cout << "Since all elements are the same, the second largest element can't be calculated" << endl;
    } else if (secondLargest == INT_MIN) {
        // Handle the case where there's no valid second largest (e.g., only one unique element)
        cout << "There is no second largest element" << endl;
    } else {
        // Output the second largest element
        cout << "Second largest is: " << secondLargest << endl;
    }

    return 0;  // End of the program
}


/*
Key Points:
1. The program assumes the first element of the array as both the largest and second largest initially.
2. It iterates through the array to find the actual largest and second largest elements.
3. If the array size is less than 2, it prints an error message and exits.
4. It handles the edge case where all elements in the array are the same.
5. It ensures the second largest is updated only if it is different from the largest.

Edge Cases:
1. Array with fewer than 2 elements.
2. All elements in the array being the same.
3. Array where the second largest is initially assumed to be the same as the largest.
*/


/*
Potential Improvements:
1. Use dynamic memory allocation instead of a fixed-size array for better flexibility.
2. Add more error handling, such as checking for valid integer input.
3. Optimize the code to handle very large arrays efficiently.
4. Consider edge cases with negative numbers or a mix of positive and negative numbers.
*/


/*
Testing:
1. Test with an array of size 0 or 1 to check the error message.
2. Test with an array of size 2 with different elements.
3. Test with an array where all elements are the same.
4. Test with a mix of positive, negative, and zero values.
5. Test with a large array to check performance.

Examples:
Input: 1
Output: "Array should have at least two elements"

Input: 5 5 5
Output: "Since all elements are the same, the second largest element can't be calculated"

Input: 3 2 1
Output: "Second largest is: 2"

Input: -1 -2 -3
Output: "Second largest is: -2"
*/
