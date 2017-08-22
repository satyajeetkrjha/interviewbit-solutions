int Solution::isValidSudoku(const vector<string> &board) {
    int row[9][9];int col[9][9];int block[3][3][9];
    // all marked to 0 or say false first
    memset(row,0,sizeof(row));
    memset(col,0,sizeof(col));
    memset(block,0,sizeof(block));
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]!='.'){
                int num=board[i][j]-'1';
//cout<<"num is "<<num<<endl;
                if(row[i][num])// if we are on ith row and we hve alredy seen this number before so it  makes it invlid
                return false;
                else
                row[i][num]++;
                if(col[j][num])// if we are on jth column and seen this number before ,it is invalid
                return false;
                else
                col[j][num]++;
                if(block[i/3][j/3][num])// we reduce rows and columns to block thing .this can be done in diff ways
                return false;
                else
                block[i/3][j/3][num]++;
                
            }
        }
    }
    return true;
    
}

