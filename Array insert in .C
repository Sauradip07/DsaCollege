#include <stdio.h>
void insertData(int *arr,int data,int size,int posi){
    for(int i = size - 1; i >= posi;i--){
        arr[i] =arr[i - 1];
    }
    arr[posi - 1] = data;
    printf("Before any opration array : \n");
    
    for (int i = 0; i < size;i++) {     
        printf("%d ", arr[i]);     
    } 
}
int main()
{
    int arr[100];
    int size;
    
    printf("Enter the array size: \n");
    scanf("%d",&size);
    
    printf("Enter the array : \n");
    
    for(int i = 0;i < size;i++){
        scanf("%d",&arr[i]); 
    }
    int posi;
    int data;
    printf("Enter the position : \n");
    scanf("%d",&posi);
    printf("Enter the data: \n");
    scanf("%d",&data);
    size++;
    insertData(arr,data,size,posi);
    //1 6 5 4 3 2 19 10 9 7

}

