class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int k=findGCD(numsDivide);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(k%nums[i]==0)
            return i;
        }
        return -1;
    }
   int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
int findGCD(vector<int>& numsDivide)
{
  int result = numsDivide[0];
  for (int i = 1; i < numsDivide.size(); i++)
  {
    result = gcd(numsDivide[i], result);
  
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}

};