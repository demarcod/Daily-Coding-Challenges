/*
Source: Daily Coding Problem

*This problem was recently asked by Google.

Description: Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

Example: Given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?
*/
#include<iostream>
#include<vector>
#include<map>

using namespace std;

string doesAdd(vector<int>& nums, int k){
    map<int, int> memo;
    for(int i = 0; i < nums.size(); i++){
        if(memo.find(k - nums[i]) != memo.end()){
            return "true";
        }
        memo[nums[i]] = i;
    }

    return "false";
}

int main()
{
    vector<int> thing = {10, 15, 3, 7};
    string result = doesAdd(thing, 17);
    cout << result << endl;
    return 0;
}
