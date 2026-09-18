class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int candidate = arr[0];
        int count = 1; 
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == candidate) {
                count++;
            }
            else {
                count--;
            }

            if (count == 0) {
                candidate = arr[i];
                count = 1;
            }
        } 
        count = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == candidate) {
                count++;
            }
        }

        if (count > arr.size() / 2) {
            return candidate;
        }

        return -1;
    }
};