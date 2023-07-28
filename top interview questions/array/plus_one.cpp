class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int i=n-1; i>=0; i--){
            if(digits[i]<9){
                ++digits[i];
                return digits;
            }else{
                digits[i] = 0;
            }
        }

        digits.push_back(0);      // to handle '999' => 999 + 1 = 1000
        digits[0] = 1;
        return digits;
    }
};

// Start traversing through end.
// If last element is not 9, just add 1 to it and return the vector.
// If last element is 9, make it zero, move ahead (reverse order).
// Now if this element is not 9, add 1 to it and return vector, otherwise if it is also 9, make it zero and repeat the 3rd and 4th steps.
// Now, if the number is 999, then we have to make it 1000 (999 + 1 = 1000). So, push 0 to the last of our vector (0,0,0) so that it becomes (0,0,0,0) and make first element '1' => 1000.
// This is how we add 1 to the number!
