//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct {
//	char name[100];
//}element;
//typedef struct ListNode {	// ��� ����ü ����
//	element data;
//	struct ListNode* link;	// �ڱ����� 
//} ListNode;
//
//// ���� ó�� �Լ�
//void error(char* message) {
//	fprintf(stderr, "%s\n", message);
//	exit(1);
//}
//
//// ���Կ���
//ListNode* insert_first(ListNode* head, element value) {
//	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
//	p->data = value;
//	p->link = head;		// h->N1->N2  => h,p->N1->N2
//	head = p;			// h->p->N1->N2	
//	return head;
//}
//
//	// ��� pre �ڿ� ���ο� ��� ���� 
//ListNode* insert(ListNode* head, ListNode* pre, element value) {
//	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
//	p->data = value;
//	p->link = pre->link;
//	pre->link = p;	
//	return head;
//}
//
//// ���� ����
//ListNode* delete_first(ListNode* head) {
//	ListNode* removed;
//	if (head == NULL)
//		return NULL;
//
//	removed = head;		// h->N1->N2  => h,removed->N1->N2
//	head = removed->link;	// removed->N1,h->N2;
//	free(removed);		// h->N2
//	return head;
//}
//
//	// pre�� ����Ű�� ����� ���� ��带 ������ 
//ListNode* delete(ListNode* head, ListNode* pre) {
//	ListNode* removed = pre->link;	// h->N1,pre->N2,removed->N3->N4	(1)	
//	pre->link = removed->link;		// h->N1->N2,pre,removed->N3->N4	(2)
//	free(removed);		// h->N1->N2,pre->N4	(3)
//	return head;
//}
//
//// �湮 ���� 
//void print_list(ListNode* head) {
//	for (ListNode* p = head; p != NULL; p = p->link)
//		printf("%s->", p->data.name);
//	printf("\n");
//}
/////////////////////// List Code End /////////////////////
//
//int main()
//{
//	ListNode* head = NULL;
//	element data;
//	char str[][100] = {"APPLE", "KIWI", "BANANA"};
//
//	for (int i = 0; i < 3; i++) {
//		strcpy(data.name, str[i]);
//		head = insert_first(head, data);
//		print_list(head);
//	}
//
//	return 0;
//}