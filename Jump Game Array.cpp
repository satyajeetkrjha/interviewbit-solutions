int fun ( vector <int> v,int n){
			// note.here n is the sizeof vector 
			int visited[n];
			for(int i=0;i<n;i++) 
			visited[i]=0;
			visited[0]=1;
			for(int i=0;i<v.size();i++){
				if(visited[i]==1){
					for(int j=1;j<=v[i];j++){
						if(i+j>=v.size())
						break;
						visited[i+j]=1;
					}
				}
			}
			return visited[n-1];
		}
int Solution::canJump(vector<int> &v) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int ans=fun(v,v.size());
			 return ans;
}
