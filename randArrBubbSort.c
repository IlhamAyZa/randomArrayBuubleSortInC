#include stdio.h
#include stdlib.h

// Start  20:50 3/8/2022
// End  21:07  3/8/2022

void bubbleSort( int arr[] , int num){
    int temp;
    
    for(int i = 0; i < num - 1; i++){       

        for(int j = 0; j < num - i - 1; j++){          

            if(arr[j] > arr[j + 1]){               

                temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;
            }

        }
        
    }
    
}

int main()
{
    int num;
    
    printf("Please Enter the Number of Elements you want in the array ");

    scanf("%d", &num);    

    int arr[num];

    for(int i = 0; i < num; i++){
        arr[i] = rand()%100;
    }
    
    bubbleSort(arr, num);

    for(int i = 0; i < num; i++){
    	  printf("%d, ", arr[i]);
    }	
    
    return 0;
}
