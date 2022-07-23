#include <stdio.h>


//Định nghĩa kiểu vector dựa vào struct
struct List
{
    int data;
    struct List *next;
};
typedef struct List *Vector;

//Tạo node đầu tiên
Vector Create(int value)
{
    Vector temp;    
    temp = (Vector)malloc(sizeof(struct List));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

//Hàm thêm một node vào chuỗi
Vector Function_Push_Back(Vector node, int value)
{
    Vector temp, p;
    temp = Create(value);       //tạo ra một node
    if(node == NULL)            //chưa có node, tạo node đầu
    {
        node = temp;
    }
    else                        //đã có giá trị
    {
        p = node;
        while (p->next != NULL) //chuyển con trỏ đi hoài, cho đến khi gặp NULL = node cuối cùng
        {
            p = p ->next;
        }
        p ->next = temp;        //p trỏ đến giá trị temp là giá trị cần thêm vào
    }
    return node;
}

Vector Input()
{
    Vector vt = NULL;
    int n, value;

    do
    {
        printf("nhap so phan tu n = ");
        scanf("%d",&n);
    } while (n<=0);
    
    for (int i = 0; i < n; i++)
    {
        printf("nhap gia tri them ");
        scanf("%d", &value);
        vt = Function_Push_Back(vt, value);
    }
    return vt;
}

int Get(Vector node, int index)
{
    int i = 0;
    Vector p = node;

    while(p->next != NULL && i != index)
    {
        i++;
        p = p->next;
    }
    return p->data;
}

void Delete(Vector node){
    printf("\n");
    while (node!=NULL)
    {
        printf("%d ",node->data);
        node = node->next;
    }
    
}

Vector Set(int value){
    Vector temp;
    temp = (Vector)malloc(sizeof(struct List));
    temp->next = NULL;
    temp->data = value;
    return temp;
}


int main(int argc, char const *argv[])
{
    Vector vt = Input();
    printf("data: %d", Get(vt,1));
    // printf("data: %d", Delete(vt));    

    return 0;
}
