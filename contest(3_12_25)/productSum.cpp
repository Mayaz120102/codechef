#include <bits/stdc++.h>
using namespace std;

// Function to find divisors of N
int divisor(int n, vector<int> &div)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            div.push_back(i); // Add divisor i
            if (i != n / i)
            { // To avoid adding square roots twice
                div.push_back(n / i);
            }
        }
    }
    return div.size();
}

// Backtracking function to find all valid combinations
void findValidArrays(vector<int> &div, int n, int idx, vector<int> &current, int sum, int product, int &valid_count)
{
    // Base case: If sum and product match N
    if (sum == n && product == n)
    {
        valid_count++;
        if (valid_count >= 3)
        {
            return; // If we found 3 valid arrays, stop further search
        }
    }

    // Try adding divisors from idx onward (non-decreasing)
    for (int i = idx; i < div.size(); i++)
    {
        // Add current divisor to the array and recurse
        current.push_back(div[i]);
        sum += div[i];
        product *= div[i];

        // Continue backtracking
        findValidArrays(div, n, i, current, sum, product, valid_count);

        // Backtrack: remove the last element and revert sum and product
        current.pop_back();
        sum -= div[i];
        product /= div[i];
    }
}

// Function to count valid arrays
int valid_array(int n)
{
    vector<int> div;
    divisor(n, div); // Find divisors of N

    int valid_count = 0;
    vector<int> current;                                    // Store the current combination of divisors
    findValidArrays(div, n, 0, current, 0, 1, valid_count); // Backtrack to find valid arrays

    return valid_count;
}

int main()
{
    int t;
    cin >> t; // Read number of test cases
    while (t--)
    {
        int n;
        cin >> n; // Read the value of n for this test case

        // Get the count of valid arrays
        int r = valid_array(n);

        // Output the result: min(r, 3)
        cout << min(r, 3) << endl;
    }
    return 0;
}
