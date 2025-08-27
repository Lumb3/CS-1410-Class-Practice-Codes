#include <iostream>
using namespace std;
class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode() : val(0), next{nullptr} {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *ptr) : val(x), next(ptr) {}
};
ListNode *createNode(ListNode *head, int size)
{
  ListNode *current = head;
  for (int i = 0; i < size; i++)
  {
    current->next = new ListNode(i + 2);
    current = current->next;
  }
  return head;
}
ListNode *swapNodes(ListNode *head, int k)
{
  // Get the size
  int n = 0;
  ListNode *current = head;
  while (current)
  {
    n++;
    current = current->next;
  }
  ListNode *first = head;
  for (int i = 1; i < k; i++)
  {
    first = first->next;
  }
  ListNode *second = head;
  for (int i = 0; i < n - k; i++)
  {
    second = second->next;
  }
  swap(first->val, second->val);
  return head;
}
void print(ListNode *head)
{
  ListNode *current = head;
  while (current)
  {
    std::cout << current->val << ", ";
    current = current->next;
  }
  std::cout << std::endl;
}
ListNode *deleteMiddle(ListNode *head)
{
  if (!head)
    return nullptr;
  if (!head->next)
    return nullptr;
  ListNode dummy(0, head);
  ListNode *slow = &dummy;
  ListNode *fast = slow->next;
  while (fast && fast->next)
  {
    fast = fast->next->next;
    slow = slow->next;
  }
  ListNode *del = slow->next;
  slow->next = slow->next->next;
  delete del;
  return dummy.next;
}
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) // [1, 2, 3]
{                                                   // [11, 5, 6]
  ListNode dummy(0);
  ListNode *current = &dummy;
  int carry = 0;
  while (l1 || l2 || carry)
  {
    int sum = carry;
    if (l1)
    {
      sum += l1->val;
      l1 = l1->next;
    }
    if (l2)
    {
      sum += l2->val;
      l2 = l2->next;
    }
    carry = sum / 10;
    current->next = new ListNode(sum % 10);
    current = current->next;
  }
  return dummy.next;
}
ListNode *swap_first_and_last(ListNode *head)
{
  if (!head || !head->next) // empty or single node
    return head;

  ListNode *prev = nullptr;
  ListNode *last = head;

  // Traverse to the last node
  while (last->next)
  {
    prev = last;
    last = last->next;
  }

  // If only two nodes, just swap directly
  if (head->next == last)
  {
    last->next = head;
    head->next = nullptr;
    return last;
  }

  // General case (more than 2 nodes)
  prev->next = head; // previous last points to first
  ListNode *temp = head->next;
  head->next = nullptr; // first becomes last
  last->next = temp;    // last points to 2nd node

  return last; // new head
}

int main()
{
  ListNode *head = new ListNode(1);
  ListNode *myNode = createNode(head, 4);
  print(head);
  ListNode *swapped_list = swapNodes(head, 2);
  print(swapped_list);
  swapped_list = swapNodes(head, 1);
  print(myNode);
  print(deleteMiddle(myNode));
  ListNode *h1 = new ListNode(2);
  ListNode *l1 = createNode(h1, 4);
  ListNode *h2 = new ListNode(3);
  ListNode *l2 = createNode(h2, 4);
  std::cout << "Added: " << std::endl;
  ListNode *addedList = addTwoNumbers(l1, l2);
  print(addedList);
  std::cout << "Before: ";
  print(head);
  ListNode *swapped_nodes = swap_first_and_last(head);
  print(swapped_nodes);
  int num1 = 2;
  int num2 = 4;
  int num3 = num1 - num2;
  std::cout << num3 << std::endl;
  return 0;
}