vector<vector<int> > Solution::generate(int n) {
   	vector < vector <int> > ans;
			vector <int> v;
			if (n==0)
			return ans;
			v.push_back(1);
			ans.push_back(v);
			if(n==1)
			return ans;
			v.push_back(1);// now it contains 1 1
			ans.push_back(v);
			if(n==2)
			return ans;
			for(int i=2;i<n;i++){
				vector <int> temp(i+1,1);// next row with i+1 elements and each assigned to 1
				for(int j=1;j<i;j++){
					temp[j]=ans[i-1][j]+ans[i-1][j-1];
				}
				ans.push_back(temp);
			}
			return ans;

}

