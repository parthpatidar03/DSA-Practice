class Solution {
public:
    // Function to reverse array using an auxiliary array
    void reverse(int arr[], int n) {
        int* ans = new int[n];
        
        /* Fill new array with elements of 
        original array in reverse order */
        for (int i = n-1; i >= 0; i--) {
            ans[n-i-1] = arr[i];
        }
        
        // Copy the elements back to the original array
        for(int i=0; i < n; i++) {
            arr[i] = ans[i];
        }
        
        // Free the dynamically allocated memory
        delete[] ans; 
        
        // Return
        return;
    }
};