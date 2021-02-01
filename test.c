//30个人围坐在一起轮流表演节目，他们按顺序从1到3依次不重复地报数，数到3的人出来表演节目，并且表演过的人不再参加报数
#include "Counting.h"

int main()
{
	Link L = malloc(sizeof(Linklist));
	if (!L)return 0;
	L->next = L;
	L->a = 1;
	printf("请输入总人数:\n");//接受人数 和  间隔报数的人数
	int num;
	scanf("%d", &num);
	printf("请输入报数间隔人数:\n");
	int key;
	scanf("%d", &key);
	//Link LL = L;
	for (int i = num; i >1; i--)
	{
		Link p= malloc(sizeof(Linklist));
		if (!p)return 0;
		p->a = i;
		p->next = L->next;
		L->next = p;
	}

	Link ppre = L;
	Link pnext = L;
	while (ppre->next!=L)
	{
		ppre = ppre->next;
	}
	for (int i=1;;i++)
	{
		if (ppre==pnext)
		{
			break;//只剩一个结点结束
		}
	
	  if (i%key==0)
	  {
		  Link p = pnext;
		  pnext = pnext->next;
		  ppre->next = pnext;
		 
		 // pnext = pnext->next;
		  free(p);
		  p = NULL;
	  }
	  else
	  { 
		  ppre = ppre->next;
		  pnext = pnext->next;
	  }
	  
	}

	printf("剩下人的编号是:%d", pnext->a);

	free(ppre);
	ppre = NULL;
	

	return 0;
}