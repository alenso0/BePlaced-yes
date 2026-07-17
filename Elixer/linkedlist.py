'''
LinkedList : 

Traversal  

'''

#initialisation & find the middle element in the linkedlist

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def traverse(head):
    current = head
    while current:
        print(current.data, end=" -> ")
        current = current.next
    print("None")

def find_middle(head):
    slow = head
    fast = head

    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next

    return slow.data

node1 = Node(1)
node2 = Node(2)
node3 = Node(3)
node4 = Node(4)
node5 = Node(5)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5



#middle element 

traverse(node1)

middle = find_middle(node1)
print("Middle element:", middle)
