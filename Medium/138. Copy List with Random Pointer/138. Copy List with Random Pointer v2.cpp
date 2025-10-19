/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) {
            return nullptr ;
        }
        Node* current = head ;
        // First, for each node, create a new one and put it just next of it
        while(current) {
            Node* copy = new Node(current->val) ;
            copy->next = current->next ;
            current->next = copy ;

            current = copy->next ;
        }


        // Second, loop again to change the random variable, but set random = random->next->next ;
        current = head ;
        while (current) {
            if (current->random) {
                current->next->random = current->random->next ;
            }
            current = current->next->next ;
        }

        // Third, remove the origin nodes
        Node* dummyHead = new Node(0);
        Node* copyCurrent = dummyHead;
        current = head;

        while (current) {
            copyCurrent->next = current->next ;
            copyCurrent = copyCurrent->next ;

            current->next = current->next->next ;

            current = current->next ;
        }

        return dummyHead->next;
    }
};
