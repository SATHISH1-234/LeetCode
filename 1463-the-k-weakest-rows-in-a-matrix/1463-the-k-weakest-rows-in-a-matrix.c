
int* kWeakestRows(int** mat, int n, int* c, int k, int* returnSize) {
    int *res = (int*)malloc(n*sizeof(int));
    int *arr = (int*)malloc(n*sizeof(int));
    int one=0;
    for (int i = 0; i < n; i++) 
    {
        int low = 0, high = *c - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if(mat[i][0]==0){ one = 0; break;}
            else if(mat[i][*c-1]==1) {one = *c; break;}
            else if(mat[i][mid]==0 && mat[i][mid-1]==1) {one = mid; break;}
            else if(mat[i][mid]==0) high = mid -1;
            else low = mid +1;
        }
        arr[i] = one; 
    }
    for(int i=0;i<n;i++) printf("%d ", arr[i]);
    for(int i=0;i<n;i++) res[i]=arr[i];
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++)
            if(res[i]>res[j]) 
            {
                int temp = res[i];
                res[i]=res[j]; 
                res[j]=temp;
            }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(res[i]==arr[j]){
                res[i]=j;
                arr[j]=-1;
                break;
            }
        }
    }
    
    *returnSize = k;
    return res;
}