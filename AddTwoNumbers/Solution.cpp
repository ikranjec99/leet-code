#include <iostream>
#include "Solution.h"

Solution::Solution() { }

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) 
{
	ListNode head(0);
	ListNode* current = &head;

	int carry = 0;

	while (l1 || l2 || carry) 
	{
		int x = l1 ? l1->val : 0;
		int y = l2 ? l2->val : 0;

		ListNode* node = new ListNode((x + y + carry) % 10);

		current->next = node;
		current = node;

		carry = (x + y + carry) / 10;

		if (l1) l1 = l1->next;
		if (l2) l2 = l2->next;
	}

	return head.next;
}


