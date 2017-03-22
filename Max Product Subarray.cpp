int Solution::maxProduct(const vector<int> &v) {
    
    	int prevmaxpro=v[0];
			int prevminpro=v[0];
			int curmaxpro=v[0];
			int curminpro=v[0];
			int ans=v[0];
			for(int i=1;i<v.size();i++){
				curmaxpro=max(max(prevmaxpro*v[i],prevminpro*v[i]),v[i]);
				curminpro=min(min(prevmaxpro*v[i],prevminpro*v[i]),v[i]);
				ans=max(curmaxpro,ans);
				prevmaxpro=curmaxpro;
				prevminpro=curminpro;
			}
			return ans;
}
