#include <stdio.h>
#include <stdint.h>

#define bool uint8_t

#define  MAX 5
#define TRUE 1
#define FALSE 0


    int rear = -1;
    int front = 0;
    int array[MAX];
    int count = 0;

int Front()
{
    return array[front];
}

bool IsEmpty()
{
    return count == 0;

}

bool IsFull()
{
    return count == MAX;
}


void EnQueue(int data)
{
    if(IsFull())
    {
            if(rear == MAX - 1)
            {
                rear = -1;
            }
    }
    ++rear;
    array[rear] = data;
    count++;
}

int DeQueue()
{
    front++;
    int data = array[front];
    count++;

    if(front == MAX)
    {
        front = 0;
    }

    return data;
}




int main(int argc, char const *argv[])
{
    //them thì thêm vào bên phải nên front không đổi
    EnQueue(1);
    printf("Chen vao so 1 font la: %d\n", Front());
    printf("Rear la: %d\n", rear);          
    EnQueue(2);    
    printf("Chen vao so 2 font la: %d\n", Front());
    printf("Rear la: %d\n", rear);      
     
    // 
    EnQueue(3);
    printf("Chen vao so 3 font la: %d\n", Front());  
    printf("Rear la: %d\n", rear);       
    EnQueue(4);  
    printf("Chen vao so 4 font la: %d\n", Front());  
    printf("Rear la: %d\n", rear);            
    EnQueue(5); 
    printf("Chen vao so 5 font la: %d\n", Front());  
    printf("Rear la: %d\n", rear);           
     

    //Xóa thì xóa bên trái, font sẽ bị dịch đi
    DeQueue();
    printf("Xoa vao so 1 font la: %d\n", Front());  
    printf("Rear la: %d\n", rear);        
    return 0;
}
