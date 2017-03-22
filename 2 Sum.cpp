vector<int> Solution::twoSum(const vector<int> &a, int target) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
map <int ,vector <int> > m;
     vector <int> v;
     int index1=0;
     int index2=INT_MAX;
        for(int i=0;i<a.size();i++){
          m[a[i]].push_back(i);
        }
        for(int i=0;i<a.size();i++){
        	int key=target-a[i];
        	if(m.find(key)!=m.end()){
        		// we have the target-a[i] in our map so let's look for index
        		int index1=i;
        		int index2=i;
        		int j=0;
        		while(j<m[key].size()){
        			if(i!=m[key][j]){
        				index2=m[key][j];
        				j=m[key].size();
        			}
        			j++;
        		}
        		if(index1 <index2){

        		if(v.size()==0){
        			v.push_back(index1);
        			v.push_back(index2);

        		}
        	else{
        		if(v[v.size()-1]>index2){
        		  v.pop_back();v.pop_back();
        		  v.push_back(index1);
        		  v.push_back(index2);

        		}
        	}
        }

	}
}
if(!v.empty()){
        v[0]++;
        v[1]++;
    }
    return v;
}
