void flood(int i,int j, vector<vector<char> > &v){
			if(i<0 || i>=v.size())
			return ;
			if(j<0 || j>=v[0].size())
			return;
			if(v[i][j]!='-')// 
			return;
			v[i][j]='O';// MARK ALL FLOOD FILLED REGIONS WITH 'O'
			flood(i+1,j,v);
			flood(i-1,j,v);
			flood(i,j+1,v);
			flood(i,j-1,v);
		}
void Solution::solve(vector<vector<char> > &v) {
    	int n=v.size();// rows
		 	int m=v[0].size();
		 	for(int i=0;i<n;i++){
		 		for(int j=0;j<m;j++){
		 			if(v[i][j]=='O')
		 			v[i][j]='-';
				 }
			 }
		/*cout<<"after first step "<<endl;
			 for(int i=0;i<n;i++){
		 		for(int j=0;j<m;j++){
		 		cout<<v[i][j]<<" ";
				 }
				 cout<<endl;
			 }
		 cout<<"first step is completed "<<endl;
			 // till now we marked all all O in matrix with -
			 // now we do a flood coloring from left,right,bottom and top */
			 char prev='-';char naya='0';
			 for(int i=0;i<m;i++){
			 	if(v[0][i]=='-')
			 	flood(0,i,v);
			 }
			 for(int i=0;i<n;i++){
			   if(v[i][0]=='-')
			 	flood(i,0,v);
			 }
			 for(int i=0;i<n;i++){
			 	if(v[i][m-1]=='-')
			 	flood(i,m-1,v);
			 }
			 for(int i=0;i<m;i++){
			 	if(v[n-1][i]=='-')
			 	flood(n-1,i,v);
			 }
			 /*cout<<"after flood fill "<<endl;
			 for(int i=0;i<n;i++){
		 		for(int j=0;j<m;j++){
		 		cout<<v[i][j]<<" ";
				 }
				 cout<<endl;
			 }
			 cout<<"flood fill completed "<<endl;*/
			 	for(int i=0;i<n;i++){
		 		for(int j=0;j<m;j++){
		 			if(v[i][j]=='-')
		 			v[i][j]='X';
				 }
			 }
			/*for(int i=0;i<n;i++){
		 		for(int j=0;j<m;j++){
		 		cout<<v[i][j]<<" ";
				 }
				 cout<<endl;
			 }*/
		 }

