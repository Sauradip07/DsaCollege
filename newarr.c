#include <stdio.h>
int arr[100]={10,20,30,40,50,60,70,80,90,100,101,102,103,104};
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
void menu()
{
    printf("\n\t\t\t Menu");
    printf("\n\t\t\t 1 push");
    printf("\n\t\t\t 2 pop");
}
int main()
{
    int ch;
    while(100){
    menu();
    scanf("%d",&ch);
    switch(ch){
        case 1:
        int posi;
     
        int data;
        printf("Enter the position : \n");
        scanf("%d",&posi);
        printf("Enter the data: \n");
        scanf("%d",&data);
        size++;
        insertData(arr,data,size,posi);
        break;
        case 2:
        int posi;
        printf("Enter the position : \n");
        scanf("%d",&posi);
        deleteElement(arr,size,posi-1);    
        break;
    }
    }
    
    // int size;
    
    // printf("Enter the array size: \n");
    // scanf("%d",&size);
    
    // printf("Enter the array : \n");
    
    // for(int i = 0;i < size;i++){
    //     scanf("%d",&arr[i]); 
    // }
    
    //1 6 5 4 3 2 19 10 9 7

}
