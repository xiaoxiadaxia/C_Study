//插入结点--在链表第i个节点后插入新结点

void insert_node(struct Node*head,struct Node*p0,int i){

	struct Node*p;
	int j;
	p=head;
	for(j=1;j<i&&p->link!=NULL;++j)
		p=p->link;
	p0->link=p->link;
	p->link=p0;
	
} 
