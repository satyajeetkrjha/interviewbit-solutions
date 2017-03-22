vector <int> ans;
		 void bfs(int s,int n,int m){
		 	queue <int> q;
		 	q.push(s);
		 	while(!q.empty()){
		 		int u=q.front();
		 		q.pop();
		 		if(u>=n && u<=m )
		 		ans.push_back(u);
		 		if(u==0  || u>m)// if stepping number is zero or greater than m
		 		continue;
		 		int lastdigit=u%10;
		 		int neighbor1=(u*10)+(lastdigit+1);
		 		int neighbor2=(u*10)+(lastdigit-1);
		 		if(lastdigit==9){
		 			q.push(neighbor2);
		 			
				 }
				 else if(lastdigit==0){
				 	q.push(neighbor1);
				 }
				 else{
				 		q.push(neighbor1);
				 			q.push(neighbor2);
				 }
			 }
		 }
vector<int> Solution::stepnum(int n, int m) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ans.clear();
    for(int i=0;i<=9;i++){
		 		bfs(i,n,m);
			 }
			 sort(ans.begin(),ans.end());
			 return ans;
}
