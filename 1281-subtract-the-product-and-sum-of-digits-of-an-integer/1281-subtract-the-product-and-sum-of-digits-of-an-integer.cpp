class Solution {
public : int subtractProductAndSum(int n) {
    int product = 1 , sum = 0;
    while(n != 0){
        int count = n%10;
        product *= count;
        sum += count;
        n/=10;
    }
    return product - sum;
        
    }
};