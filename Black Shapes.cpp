void dfs(  vector < vector <int> > &matrix, vector < vector <int> > &visited,int i,int j){
			if(i<0 || i>=matrix.size())
			return ;
			if( j<0 || j>=matrix[0].size())
			return ;
			if(matrix[i][j]==false || visited[i][j]==true)
			return ;
			visited[i][j]=true;
			dfs(matrix,visited,i+1,j);
			dfs(matrix,visited,i-1,j);
			dfs(matrix,visited,i,j+1);
			dfs(matrix,visited,i,j-1);
		}
int Solution::black(vector<string> &s) {
    // Do not write main() function.
    //Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=s.size();int  m=s[0].size();
			// now we craete a matrix 
		 vector < vector <int> >matrix(n ,vector <int> (m,0));
		 vector < vector <int> > visited(n,vector <int> (m,false));
		
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(s[i][j]=='X')
					matrix[i][j]=1;
				}
			}
			int ans=0;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(matrix[i][j]==1 && visited[i][j]==false){
						dfs(matrix,visited,i,j);
						ans++;
					}
				}
		}
		return ans;	
}
