vector<vector<int> > Solution::anagrams(const vector<string> &a) {
 vector < vector <int>> ans;// this we rerturn
	 int n=a.size();
	 // we will use a map where key will be sorted string (act for cat and act botyh)and value will be will be a vector so
	 //if entered string are cat act we gonna store  a vector of indees for sorted string "act"
	 map <string , vector <int> > m;
	 vector <string > v;
	  for(int i=0;i<a.size();i++){
	  string temp="";
	   temp.append(a[i]);
	   // u have the string in this temp string and now we sort the string 
	   sort(temp.begin(),temp.end());// 
      v.push_back(temp);// u push this sorted string in a vector of strings


	  }
	  /*for(int i=0;i<v.size();i++){
	  	cout<<v[i]<<" ";
	  }
	  cout<<endl;*/
	  // so our vector of strings contains act dgo dgo act and now assocaite each of the strings with indesx
        for(int i=0;i<v.size();i++){
        m[v[i]].push_back(i+1);
        }  
       auto it=m.begin();
       while(it!=m.end()){
       ans.push_back(it->second);
       it++;
       }  
       return ans;

}