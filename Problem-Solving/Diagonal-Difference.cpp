int diagonalDifference(vector<vector<int>> arr) {
    int pdiag=0,sdiag =0;
    int n = arr.size();
    for(int i =0;i<n;i++){
        pdiag += arr[i][i];
        sdiag += arr[i][n-i-1];
    }
    return abs(pdiag-sdiag);

}
