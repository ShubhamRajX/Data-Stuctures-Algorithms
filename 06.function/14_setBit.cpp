//gfg
class solution
{
    public:
    int setKthBit(int N ,int K)
    {
        //write your code here
        int mask -1 <<K;
        int ans= N/mask;
        return ans;
    }
};