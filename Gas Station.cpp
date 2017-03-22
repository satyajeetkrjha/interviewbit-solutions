int Solution::canCompleteCircuit(const vector<int> &gas, const vector<int> &cost) {
  	int n=gas.size();
		int totalremaining=0;
		int curremaining=0;
		int start=0;
		for(int i=0;i<n;i++){
			int remaining=gas[i]-cost[i];
			if(curremaining <0){
				start=i;
				curremaining=remaining;
				
			}
			else
			{
				curremaining+=remaining;
			}
			totalremaining+=remaining;
		}
		if(totalremaining>=0)
		return start;
		else
		return -1;
}
