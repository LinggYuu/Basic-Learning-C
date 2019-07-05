//*运算符用来去出它右边的指针所指的变量

//结构类型
#include<stdio.h>

struct date
{
	int month;
	int  day;
	int year;
};// 将其放在上面，所有函数都能使用它




int main(int argc, char const *argv[])
{
	struct date today;//名字是today，类型是 struct date
	today.month = 06;
	today.day = 1;
	today.year = 2019;

}




//声明结构的形式


struct point
{
	int x;
	int y;
};

struct point p1, p2; //结构的名字前面再跟上一个struct，来作为一个类型的名字

//p1,p2都是point，里面都有x和y的值


struct
{
	int x;
	int y;
} p1, p2;
//p1和p2都是一种无名结构的两个变量,里面有x和y，估计不想再用这个结构类型


struct point //声明结构类型叫point
{
	int x;
	int y;
}p1, p2;//定义这种结构的两个变量

//第一和第三种形式，都声明了结构point。但是第二种形式没有声明point，只是定义了两个变量

//结构类型和结构变量是两种不同的东西
//和本地变量一样，在函数内部声明的结构类型只能在函数内部使用
//所以通常在函数外部声明结构类型，这样就可以被多个函数所使用


//结构的初始化 

//声明了结构就有了一个自己定义的结构类型,和int float一样

struct date today = { 06,1,2019 };
//struct date thismonth = { .month = 6, .year = 2019 }; 没赋的就是0，这里.XX用不了不知道为啥


//结构成员
//数组和结构有点像
//数组用[]运算符和下标访问其成员
//a[0] = 10;
//结构用.运算符和名字访问其成员
//today.day
//student.firstname
//p1.x;
//p2.y;
//出现 在.的左边的一定是个结构变量而不是结构类型


//结构运算
//要访问整个结构,直接用结构变量的名字
//对于整个结构,可以做赋值 、取地址,也可以传递给函数参数
//p1 = (struct point){5,10}//相当于p1.x=5; p1.y=10;
//p1 = p2;//相当于p1.x=p2.x;p1.y=p2.y;   数组不能这么做因为数组是const的

//结构指针
//和数组不同, 结构变量的名字并不是结构变量的地址(a[],a是数组a[10]的地址)
//必须使用&运算符

struct date* pDate = &today;


//定义函数时,结构作为函数参数

int numberofdays(struct date d)//参数是一个结构变量
//整个结构可以作为参数的值传入函数
//这时候实在函数内新建一个结构变量,并复制调用者的结构的值,而非原有的那个结构变量
//也可以返回一个结构
//这与数组完全不同


//& today.month 说明.的优先级高



//输入结构
//没有直接的方式可以一次scanf一个结构
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
//其output(y)将仍是0,0
//因为传入的y不是真正的y
//getStruct中只得到了y的值 而并没有跟y真的有联系,和数组不同



//记住c在函数调用时是传值的
//所以函数中的p与main中的y是不同的
//在函数读入了p的数值之后, 没有任何东西回到main, 所以y还是{ 0,0 };
//之前的方案,把一个结构传入了函数,然后在函数中操作,但是没有返回回去
//问题在于传入函数的是外面那个结构的克隆体 ,而不是指针,未指向外面的结构体
//(懂了,数组不同是因为数组的值就是它的指针(地址))


//可以:
//struct point getStruct(void)
//{
//	struct point p;
//	scanf("%d", &p.x);
//	scanf("%d", &p.y);
//	return p;
//}
//struct point y = getStruct();

;
//重点:
//结构指针作为参数

//指向结构的指针

struct date
{
	int month;
	int day;
	int year;

} myday;

//struct date *p = &myday;
//(*p).month = 12;//*p得到变量
//p->month = 12;//p是指针,念成p所指的那个结构的month,简称p所指的那个month,简称p arrow month
//用->表示指针所指的结构变量中的成员,左边一定是个指针

int main()
{
	struct point y = { 0,0 };
	getStruct(&y);
	output(y);
	output(*getStruct(&y));//*用来去出它右边的指针所指的变量
	print(getStruct(&y));
	//*getStruct(&y) = (struct point){1，2};//这都行
}

struct point* getStruct(struct point *p)//传了一个东西,处理之后又将这个东西传出去
{
	scanf("%d", &p->x);
	scanf("%d", &p->y);
	return p;
}
void output(struct point p)
{
	printf("%d,%d", p.x, p.y);
}

void print(const struct point* p) //用const表明在这个函数中传入的指针不会被修改
{
	printf("%d,%d", p->x, p->y);
}





//结构数组
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



//结构中的结构

struct dateAndTime
{
	struct date sdate;
	struct time stime;
};

//嵌套结构
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
//可以有
//r.p1.x;
//r.p2.x;
//r.p1.y;
//r.p2.y;

struct rectangle *rp = &r;
//r.p1.x;
//rp->p1.x;
//(r.p1).x;
//(rp->p1).x;
//四种等价
//没有re->p1->x,因为p1不是指针





//类型定义

//自定义数据类型(typedef)

//C提供 typedef功能来声明一个已有的数据类型的新名字

typedef int Length;
//使 length 成为int类型的别名

Length a, b, len;
Length numbers[10];


typedef struct ADate //ADate是原类型名.  struct ADate
{
	int month;
	int day;
	int year;
} Date;//Date是新类型名
//struct ADate 就是 Date

Date d = { 1,2,3 };
struct ADate c = { 2,3,4 };

typedef struct
{
	int month;
	int day;
	int year;
} Datee;


//typedef *char[10] Strings;//Strings是10个字符串的数组的类型
