#include <stdio.h>
void deleteElement(int *arr,int size,int posi){
    
    for(int i = posi;i < size;i++){
        arr[i] =arr[i+1];
    }
    size--;
    printf("After Delete Array : \n");
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
    printf("Enter the position : \n");
    scanf("%d",&posi);
    deleteElement(arr,size,posi-1);
    //1 6 5 4 3 2 19 10 9 7

}
