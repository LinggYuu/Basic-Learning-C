//*���������ȥ�����ұߵ�ָ����ָ�ı���

//�ṹ����
#include<stdio.h>

struct date
{
	int month;
	int  day;
	int year;
};// ����������棬���к�������ʹ����




int main(int argc, char const *argv[])
{
	struct date today;//������today�������� struct date
	today.month = 06;
	today.day = 1;
	today.year = 2019;

}




//�����ṹ����ʽ


struct point
{
	int x;
	int y;
};

struct point p1, p2; //�ṹ������ǰ���ٸ���һ��struct������Ϊһ�����͵�����

//p1,p2����point�����涼��x��y��ֵ


struct
{
	int x;
	int y;
} p1, p2;
//p1��p2����һ�������ṹ����������,������x��y�����Ʋ�����������ṹ����


struct point //�����ṹ���ͽ�point
{
	int x;
	int y;
}p1, p2;//�������ֽṹ����������

//��һ�͵�������ʽ���������˽ṹpoint�����ǵڶ�����ʽû������point��ֻ�Ƕ�������������

//�ṹ���ͺͽṹ���������ֲ�ͬ�Ķ���
//�ͱ��ر���һ�����ں����ڲ������Ľṹ����ֻ���ں����ڲ�ʹ��
//����ͨ���ں����ⲿ�����ṹ���ͣ������Ϳ��Ա����������ʹ��


//�ṹ�ĳ�ʼ�� 

//�����˽ṹ������һ���Լ�����Ľṹ����,��int floatһ��

struct date today = { 06,1,2019 };
//struct date thismonth = { .month = 6, .year = 2019 }; û���ľ���0������.XX�ò��˲�֪��Ϊɶ


//�ṹ��Ա
//����ͽṹ�е���
//������[]��������±�������Ա
//a[0] = 10;
//�ṹ��.����������ַ������Ա
//today.day
//student.firstname
//p1.x;
//p2.y;
//���� ��.����ߵ�һ���Ǹ��ṹ���������ǽṹ����


//�ṹ����
//Ҫ���������ṹ,ֱ���ýṹ����������
//���������ṹ,��������ֵ ��ȡ��ַ,Ҳ���Դ��ݸ���������
//p1 = (struct point){5,10}//�൱��p1.x=5; p1.y=10;
//p1 = p2;//�൱��p1.x=p2.x;p1.y=p2.y;   ���鲻����ô����Ϊ������const��

//�ṹָ��
//�����鲻ͬ, �ṹ���������ֲ����ǽṹ�����ĵ�ַ(a[],a������a[10]�ĵ�ַ)
//����ʹ��&�����

struct date* pDate = &today;


//���庯��ʱ,�ṹ��Ϊ��������

int numberofdays(struct date d)//������һ���ṹ����
//�����ṹ������Ϊ������ֵ���뺯��
//��ʱ��ʵ�ں������½�һ���ṹ����,�����Ƶ����ߵĽṹ��ֵ,����ԭ�е��Ǹ��ṹ����
//Ҳ���Է���һ���ṹ
//����������ȫ��ͬ


//& today.month ˵��.�����ȼ���



//����ṹ
//û��ֱ�ӵķ�ʽ����һ��scanfһ���ṹ
//main(){
//struct point y = { 0,0 };
//getStruct(y);
//output(y);
//}
//void getStruct(struct point p) 
//{
//	scanf("%d", &p.x);
//	scanf("%d", &p.y);
//	printf("%d,%d", p.x, p.y);
//
//	void output(struct point p)
//	{
//		printf("%d,%d", p.x, p.y);
//	}
//}
//��output(y)������0,0
//��Ϊ�����y����������y
//getStruct��ֻ�õ���y��ֵ ����û�и�y�������ϵ,�����鲻ͬ



//��סc�ں�������ʱ�Ǵ�ֵ��
//���Ժ����е�p��main�е�y�ǲ�ͬ��
//�ں���������p����ֵ֮��, û���κζ����ص�main, ����y����{ 0,0 };
//֮ǰ�ķ���,��һ���ṹ�����˺���,Ȼ���ں����в���,����û�з��ػ�ȥ
//�������ڴ��뺯�����������Ǹ��ṹ�Ŀ�¡�� ,������ָ��,δָ������Ľṹ��
//(����,���鲻ͬ����Ϊ�����ֵ��������ָ��(��ַ))


//����:
//struct point getStruct(void)
//{
//	struct point p;
//	scanf("%d", &p.x);
//	scanf("%d", &p.y);
//	return p;
//}
//struct point y = getStruct();

;
//�ص�:
//�ṹָ����Ϊ����

//ָ��ṹ��ָ��

struct date
{
	int month;
	int day;
	int year;

} myday;

//struct date *p = &myday;
//(*p).month = 12;//*p�õ�����
//p->month = 12;//p��ָ��,���p��ָ���Ǹ��ṹ��month,���p��ָ���Ǹ�month,���p arrow month
//��->��ʾָ����ָ�Ľṹ�����еĳ�Ա,���һ���Ǹ�ָ��

int main()
{
	struct point y = { 0,0 };
	getStruct(&y);
	output(y);
	output(*getStruct(&y));//*����ȥ�����ұߵ�ָ����ָ�ı���
	print(getStruct(&y));
	//*getStruct(&y) = (struct point){1��2};//�ⶼ��
}

struct point* getStruct(struct point *p)//����һ������,����֮���ֽ������������ȥ
{
	scanf("%d", &p->x);
	scanf("%d", &p->y);
	return p;
}
void output(struct point p)
{
	printf("%d,%d", p.x, p.y);
}

void print(const struct point* p) //��const��������������д����ָ�벻�ᱻ�޸�
{
	printf("%d,%d", p->x, p->y);
}





//�ṹ����
struct date
{
	int a;
	int b;
	int c;
};
struct time
{
	int d;
	int e;
	int f;
};
struct date dates[100];
struct date dates[] = {
	{4,5,2000},{2,4,2020}
};



//�ṹ�еĽṹ

struct dateAndTime
{
	struct date sdate;
	struct time stime;
};

//Ƕ�׽ṹ
struct point
{
	int x;
	int y;
};

struct rectangle
{
	struct point p1;
	struct point p2;
};

struct rectangle r;
//������
//r.p1.x;
//r.p2.x;
//r.p1.y;
//r.p2.y;

struct rectangle *rp = &r;
//r.p1.x;
//rp->p1.x;
//(r.p1).x;
//(rp->p1).x;
//���ֵȼ�
//û��re->p1->x,��Ϊp1����ָ��





//���Ͷ���

//�Զ�����������(typedef)

//C�ṩ typedef����������һ�����е��������͵�������

typedef int Length;
//ʹ length ��Ϊint���͵ı���

Length a, b, len;
Length numbers[10];


typedef struct ADate //ADate��ԭ������.  struct ADate
{
	int month;
	int day;
	int year;
} Date;//Date����������
//struct ADate ���� Date

Date d = { 1,2,3 };
struct ADate c = { 2,3,4 };

typedef struct
{
	int month;
	int day;
	int year;
} Datee;


//typedef *char[10] Strings;//Strings��10���ַ��������������
