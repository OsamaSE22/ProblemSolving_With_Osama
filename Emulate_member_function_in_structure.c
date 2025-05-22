#include <stdio.h>

typedef struct Rect
{
	int w, h;
	void (*set)(struct Rect*, int, int);
	int (*area)(struct Rect*);
	void (*show)(struct Rect*);
}Rect;

int area(Rect *r)
{
	return r->w * r->h;
}

void show(Rect *r)
{
	printf("Rectangle's width: %d, "
		"Hieght: %d\n", r->w, r->h);
}
void set(Rect *r, int w, int h)
{
	r->w = w;
	r->h = h;
}

void constructRect(Rect *r)
{
	r->w = 0;
	r->h = 0;
	r->set = set;
	r->area = area;
	r->show = show;
}
int main(void)
{
	Rect r;
	constructRect(&r);

	r.set(&r, 10, 5);
	r.show(&r);
	printf("Rectangle Area %d\n", r.area(&r));
	return (0);
}
