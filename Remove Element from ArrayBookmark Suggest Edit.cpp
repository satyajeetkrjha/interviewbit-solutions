int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    int n=A.size();
    int elem=B;
  int i=0;
        int j=0;
        while (i<n){
            if (A[i]!=elem){
                A[j]=A[i];
                j++;
            }
                i++;
        }
        return j;
}
