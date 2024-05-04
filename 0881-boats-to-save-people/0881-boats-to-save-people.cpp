class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
         sort(people.begin(), people.end()); // Sort the array in ascending order
        int left = 0, right = people.size() - 1; // Initialize pointers to the start and end of the array
        int boats = 0; // Initialize the number of boats to 0
        while (left <= right) { // While there are people left to transport
            if (people[left] + people[right] <= limit) { // If the sum of the weights of the two people is less than or equal to the limit
                left++; // Move the left pointer to the right
            }
            right--; // Move the right pointer to the left
            boats++; // Increment the number of boats required
        }
        return boats; // Return the number of boats required
    }
};