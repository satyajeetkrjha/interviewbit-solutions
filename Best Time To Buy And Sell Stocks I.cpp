int Solution::maxProfit(const vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int profit=0;
    int min_price=INT_MAX;
    for(int i=0;i<a.size();i++){
        profit=max(profit,a[i]-min_price);
        min_price=min(min_price,a[i]);
    }
    return profit;
}
