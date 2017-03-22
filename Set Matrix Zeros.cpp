void Solution::setZeroes(vector<vector<int> > &A) {
    int rows=A.size();
			int col=A[0].size();
			bool firstrowzero=false;bool firstcolumnzero=false;
			for(int i=0;i<col;i++){
				if(A[0][i]==0){
					 firstrowzero=true;
					break;
				}
			}
			for(int i=0;i<rows;i++){
				if(A[i][0]==0){
					firstcolumnzero=true;;
					break;
				}
			}
			for(int i=1;i<rows;i++){
				for(int j=1;j<col;j++){
					if(A[i][j]==0){
					  A[i][0]=0;
						A[0][j]=0;
					}
				}
			}
			// now set zero in actual mein
			for(int i=1;i<rows;i++){
				for(int j=1;j<col;j++){
					if(A[i][0]==0 || A[0][j]==0){
						A[i][j]=0;
					}
				}
			}
			if(firstrowzero==true){
			for(int j=0;j<col;j++){
			A[0][j]=0;
			}
		}
		if(firstcolumnzero==true){
			for(int i=0;i<rows;i++){
				A[i][0]=0;
			}
		}
}
