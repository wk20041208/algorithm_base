#include <stdio.h>

void visit(int arr[],int len){
    for(int i = 0;i < len;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
    printf("\n");
}


int main()
{
    int arr[] = {100,120,50,60,90,105,110,1000,450,4,2,300,350,55,45,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    visit(arr,len);
    int tmp = 0;
    for(int j = 0;j < len -1 ;j++){
        for(int i = 0;i < len - j - 1;i++){
            if(arr[i] > arr[i+1]){
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
            }
        }

    }
   // printf("%d\n",len);
   visit(arr,len);
    return 0;
}

