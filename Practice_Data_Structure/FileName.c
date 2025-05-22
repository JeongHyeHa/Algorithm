//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct {
//	char name[100];
//}element;
//typedef struct ListNode {	// 노드 구조체 정의
//	element data;
//	struct ListNode* link;	// 자기참조 
//} ListNode;
//
//// 오류 처리 함수
//void error(char* message) {
//	fprintf(stderr, "%s\n", message);
//	exit(1);
//}
//
//// 삽입연산
//ListNode* insert_first(ListNode* head, element value) {
//	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
//	p->data = value;
//	p->link = head;		// h->N1->N2  => h,p->N1->N2
//	head = p;			// h->p->N1->N2	
//	return head;
//}
//
//	// 노드 pre 뒤에 새로운 노드 삽입 
//ListNode* insert(ListNode* head, ListNode* pre, element value) {
//	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
//	p->data = value;
//	p->link = pre->link;
//	pre->link = p;	
//	return head;
//}
//
//// 삭제 연산
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
//	// pre가 가리키는 노드의 다음 노드를 삭제함 
//ListNode* delete(ListNode* head, ListNode* pre) {
//	ListNode* removed = pre->link;	// h->N1,pre->N2,removed->N3->N4	(1)	
//	pre->link = removed->link;		// h->N1->N2,pre,removed->N3->N4	(2)
//	free(removed);		// h->N1->N2,pre->N4	(3)
//	return head;
//}
//
//// 방문 연산 
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