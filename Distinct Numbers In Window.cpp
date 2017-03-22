vector<int> Solution::dNums(vector<int> &v, int k) {
    vector <int> ans;
			int n=v.size();
			// we will use a map where key will be elements and value will be the number of times it couurs in window of size k
			// we will use our first window of size k and take count of all elements and we will use this window and we move it by 1 unit to right
			int distcount=0;
			map <int,int> m;
			for(int i=0;i<k;i++){
				int x=v[i];
				if(m[x]==0){// element was no there in the map , is unique;
					m[x]+=1;// set it's value to 1
					distcount++;
				}
				else if(m[x]!=0){// repeated
					m[x]+=1;;// increase the count 
					
				}
			}
			map <int ,int>:: iterator it;
	  /* for( it=m.begin();it!=m.end();it++){
	   	  std::cout << it->first << " => " << it->second << '\n';
	   }*/
		//	cout<<"dist count is "<<distcount<<endl;
			ans.push_back(distcount);
			for(int i=k;i<n;i++){
				// we check the first element of last window and if that has cooured just once , u decrease tthe distinct count by1 
				int x=v[i-k];// first element
				if(m[x]==1){
					//cout<<"x is "<<x<<" and m.count(x) is "<<m[x]<<endl;
					distcount=distcount-1;// decreased
				}
					m[x]-=1;
				
				// now we work on current element 
				int y=v[i];
				if(m[y]==0){
				//	cout<<"i is "<<i<<" and v[i] is "<<v[i]<<" and distcount is "<<distcount<<endl;
					distcount++;
				}
				m[y]+=1;
				
				ans.push_back(distcount);
			}
			
			return ans;
    
}
