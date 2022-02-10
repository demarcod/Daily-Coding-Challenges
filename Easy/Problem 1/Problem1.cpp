/*
Source: Daily Coding Problem

*This problem was recently asked by Google.

Description: Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

Example: Given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?
*/
#include<iostream>
#include<vector>

using namespace std;

string doesAdd(vector<int>& nums, int k){
    return nums.empty() ? "true" : "false";
}

int main()
{
    vector<int> thing = {};
    string result = doesAdd(thing, 9);
    cout << result << endl;
    return 0;
}
