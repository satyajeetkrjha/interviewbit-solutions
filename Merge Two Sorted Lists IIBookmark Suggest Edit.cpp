void Solution::merge(vector<int> &a, vector<int> &b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    	vector <int> temp;
		int n=a.size();int m=b.size();
		for(int i=0;i<n;i++){
			temp.push_back(a[i]);
		}
		for(int i=0;i<n;i++){
			a.pop_back();
		}
		// put all elements of vector a into temporary vector temp and now we put everything into vector a gain
		int i=0;int j=0;
		while(i< n && j< m){
			if(temp[i]<=b[j]){
			//	cout<<"temp[ "<<i<<"] is "<<temp[i]<<endl;
				a.push_back(temp[i]);
				i++;
			}
			else
			{
			//	cout<<" b[ "<<j<<"] is "<<b[j]<<endl;
				a.push_back(b[j]);
				j++;
			}
		}
		//cout<<"i is "<<i<<endl;
		//cout<<" j is "<<j<<endl;
		while(i<n){
			a.push_back(temp[i]);
			i++;
		}
		while(j<m){
			a.push_back(b[j]);
			j++;
		}
		
}
