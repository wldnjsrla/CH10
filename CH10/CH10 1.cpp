#include <stdio.h>
#pragma warning(disable:4996)

double change(int a);

int main()
{
	double inch;
	printf("��ġ�� �Է��ϼ���: ");
	scanf("%lf", &inch);
	printf("%f��ġ�� %.2fcm�Դϴ�.\n", inch, change(inch));

	return 0;
}
double change(int a)
{
double cm;
cm = (a * 2.54);
return (cm);
}