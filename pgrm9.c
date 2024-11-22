#include <stdio.h>
#include <stdlib.h>
void dfs(int n,int a[10][10],int source,int s[10]){
    printf("%d \t",source);
    s[source]=1;
    for(int i=1;i<=n;i++){
        if(s[i]==0 && a[source][i]==1)
        dfs(n,a,i,s);
    }
}
int main(){
    int a[10][10],s[10],n,source,i,j;
    printf("Enter the number of nodes :");
    scanf("%d",&n);
    printf("\nEnter the adjaceny matrix:\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
        
    }
    printf("Enter the source :");
    scanf("%d",&source);
    for(i=1;i<=n;i++)
    s[i]=0;
    printf("DFS order is \n");
    dfs(n,a,source,s);
    return 0;
}