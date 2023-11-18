// 2177. Find Three Consecutive Integers That Sum to a Given Number


class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>v;
        long long a=num/3;
        long long b=a-1;
        long long c=a+1;
        if((a+b+c)==num){
            return {b,a,c};
        }
        return v;
    }
};