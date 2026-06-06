// WRITE A PROGRAM TO FIND THE LEADERS IN AN ARRAY
#include<stdio.h>
int main(){
    int n;
    printf("Enter a size:");
    scanf("%d",&n);

    int a[n];
    for(int i = 0; i < n; i++){
        printf("Enter a %d element:",i);
        scanf("%d",&a[i]);
    }

    for(int i = 0; i < n; i++){
        int leader = 1;
        for(int j = i+1; j < n; j++){
            if(a[j] > a[i]){
                leader = 0;
                break;
            }
        }
        if(leader){
            printf("%d ",a[i]);
        }
    }
    return 0;
}