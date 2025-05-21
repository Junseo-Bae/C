#include <stdio.h>

int head = 0;

// 전달받은 data로 새로운 노드를 생성
struct Node* create_node(char* data)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = (char*)malloc(strlen(data)+1);
    strcpy(temp->data, data);
    temp->next = NULL;
    return temp;
}

// 전달받은 node에 대해 메모리 해제
void delete_node(struct Node* node)
{
    free(node->data);
    free(node);
}

// 전달받은 head 를 이용해 연결리스트의 모든 노드에 대해서 메모리 해제
void delete_all(struct Node* head)
{
    struct Node* temp = head;
    while(head != NULL)
    {
        temp = head->next;
        delete_node(head);
        head = temp;
    }
}

// 전달받은 head를 이용해 연결리스트의 맨 끝에 data 노드를 추가
int add_tail(struct Node** head, char* data)
{
    struct Node* temp = create_node(data);
    if(*head == NULL)
    {
        *head = temp;
    }
    else
    {
        struct Node* tmp = *head;
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = temp;
    }
}

// 전달받은 배열에 data를 추가
int add_head(char* strArray[], char* data)
{
    int i;
    for(i = 99; i > 0; i--) 
    {
        strArray[i] = strArray[i - 1];
    }
}

// 전달받은 head를 이용해 연결리스트의 값 중 target_data 노드의 다음에 data 노드를 추가
int add_next(struct Node** head, char* target_data, char* data)
{
    struct Node* temp = *head;
    while(temp != NULL)
    {
        if(strcmp(temp->data, target_data) == 0)
        {
            break;
        }
        temp = temp->next;
    }
    if(temp == NULL)
    {
        return 0;
    }
    struct Node* new_temp = create_node(data);
    new_temp->next = temp->next;
    temp->next = new_temp;
    return 1;
}

// 전달받은 head를 이용해 연결리스트의 i번째 노드 다음에 data 노드를 추가
int add_index(struct Node** head, int index, char* data)
{
    struct Node* temp = *head;
    int count = 0;
    while(temp != NULL)
    {
        if(index == count)
        {
            break;
        }
        temp = temp->next;
        count++;
    }
    if(temp == NULL)
    {
        return 0;
    }
    struct Node* new_temp = create_node(data);
    new_temp->next = temp->next;
    temp->next = new_temp;
    return 1;
}

// 전달받은 head를 이용해 연결리스트 전체 노드의 data를 보기좋게 출력
void print_linkedlist(struct Node* head)
{
    while(head != NULL)
    {
        printf("%s >> ", head->data);
        head = head->next;
    }
}

int delete_target(struct Node** head, char* target_data)
{
    struct Node* temp = *head;
    struct Node* prev_temp = NULL;
    while(temp != NULL)
    {
        if(strcmp(temp->data, target_data) == 0)
        {
            break;
        }
        prev_temp = temp;
        temp = temp->next;
    }
    if(temp == NULL)
    {
        return 0;
    }
    if(prev_temp == NULL)
    {
        *head = temp->next;
    }
    else
    {
        prev_temp->next = temp->next;
    }
    delete_node(temp);
    return 1;
}

int delete_index(struct Node** head, int index)
{
    struct Node* temp = *head;
    struct Node* prev_temp = NULL;
    int count = 0;
    while(temp != NULL)
    {
        if(index == count)
        {
            break;
        }
        prev_temp = temp;
        temp = temp->next;
        count++;
    }
    if(temp == NULL)
    {
        return 0;
    }
    if(prev_temp == NULL)
    {
        *head = temp->next;
    }
    else
    {
        prev_temp->next = temp->next;
    }
    delete_node(temp);
    return 1;
}

int main()
{
  char* strArray[100] = {NULL};

  // 배열의 맨 앞에 hello 추가
  add_head(strArray, "hello");

    return 0;
}
