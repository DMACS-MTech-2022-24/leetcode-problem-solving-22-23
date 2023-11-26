struct Node {
    int val;
    Node *next;
};

class MyLinkedList {
    Node *head, *tail;
    int length;
public:
    MyLinkedList(): head(NULL), tail(NULL), length(0){
        
    }
    
    int get(int index) {
        if(index < length){
            Node *ptr;
            ptr = head;
            int i = 0;
            // while(ptr){
            //     // cout << ptr->val << endl;
            //     ptr = ptr->next;
            // }
            // cout << "----------" << endl;
            ptr = head;
            while(i != index){
                // cout << i << " " << ptr->val << endl;
                ptr = ptr->next;
                i++;
            }

            
            return ptr->val;
            

        }else{
            return -1;
        }
    }
    
    void addAtHead(int val) {
        if(head){
            Node * newHead = new Node();
            newHead->val = val;
            newHead->next = head;
            head = newHead;
        }else{
            head = new Node();
            tail = head;
            head->val = val;
            head->next = NULL;
        }
        length++;
    }
    
    void addAtTail(int val) {
        if(tail){

            tail->next = new Node();
            tail->next->val = val;
            tail = tail->next;
        }else{
            tail = new Node();
            head = tail;
            tail->val = val;
            tail->next = NULL;
        }
        length++;

    }
    
    void addAtIndex(int index, int val) {
        Node *ptr, *prev;
        if(index <= length){

            if(index == 0){
                addAtHead(val);
            }else if(index == length){
                addAtTail(val);
            }else{
                int i = 0;
                ptr = head;
                while(i < (index - 1)){
                    i++;
                    ptr = ptr->next;
                }
                Node *tmp = new Node();
                tmp->val = val;
                tmp->next = ptr->next;
                ptr->next = tmp;

                length++;
            }
        }
    }
    
    void deleteAtIndex(int index) {
        if(index < length){
            if(index == 0){
                Node *tmp = head;
                head = head->next;
                delete tmp;
                tmp = NULL;
            }else{
                int i = 0;
                Node *ptr = head;
                while(i < (index - 1)){
                    i++;
                    ptr = ptr->next;
                }
                if(index == (length - 1)){
                    tail = ptr;
                }
                Node *tmp = ptr->next;
                if(ptr->next)
                    ptr->next = ptr->next->next;
                
                if(tmp)
                    delete tmp;
                tmp = NULL;
                

            }
            length--;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */