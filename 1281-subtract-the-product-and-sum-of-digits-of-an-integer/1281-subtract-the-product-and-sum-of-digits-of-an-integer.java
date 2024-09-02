class Solution {
    public int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        while(n>0){
            int lastdigit=n%10;
            n=n/10;
            product=product*lastdigit;
            sum=sum+lastdigit;
        }

        return product-sum;
    }
}