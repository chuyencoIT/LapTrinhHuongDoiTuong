#include"Cpolygon.h"

int main()
{
	CRectangle rect;
	CTriangle trgl;
	CPolygon * ppoly1 = &rect;
	CPolygon * ppoly2 = &trgl;
	ppoly1->set_values(4, 5);
	ppoly2->set_values(4, 5);
	cout << ppoly1->area() << endl;
	cout << ppoly2->area() << endl;
	

	cout << "\n\n";
	system("pause");
	return 0; 
}