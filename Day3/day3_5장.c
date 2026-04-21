//[[[[[[[[[5장]]]]]]]]]]]]]]]]]]]]]
//#include <stdio.h>
//
//int main(void)
//{
//	int x, y, result;
//	printf("두 개의 정수를 입력하시오: ");
//	scanf_s("%d %d", &x, &y);
//
//	result = x + y; //덧셈
//	printf("%d + %d = %d\n", x, y, result);
//
//	result = x - y;// 뺄셈
//	printf("%d - %d = %d\n", x, y, result);
//
//	result = x * y; //곱셈
//	printf("%d * %d = %d\n", x, y, result);
//
//	result = x / y; //나눗셈
//	printf("%d/ %d = %d\n", x, y, result);
//
//	result = x % y;  //나머지
//	printf("%d %% %d = %d\n", x, y, result);
//
//	return 0;
//	
//}
//-----------------------------------------------------------------------
//#include <stdio.h>
//int main(void)
//{
//	int user, change = 0;
//	int price, c5000, c1000, c500, c100;
//
//	printf("물건 값을 입력하시오.");
//	scanf_s("%d", &price);   //물건 값을 입력받는다.
//	printf("사용자가 낸 돈");
//	scanf_s("%d", &user);
//	change = user - price; //거스름돈을 change에 저장
//
//	c5000 = change / 5000;
//	change = change % 5000;
//
//	c1000 = change / 1000;
//	change = change % 1000;
//
//	c500 = change / 500;
//	change = change % 500;
//
//	c100 = change / 100;
//	change = change % 100;
//
//	printf("오천원권: %d장\n", c5000);
//	printf("천원권: %d장\n", c1000);
//	printf("오백원동전: %d개\n", c500);
//	printf("백원동전: %d개\n", c100);
//	return 0;
//
//}
/////////////////////////////
//#include <stdio.h>
//int main(void)
//{
//	int x = 3;
//	int y;
//	int a = 3;
//	int b;
//
//	y = x++;
//	printf("x++ : %d\n", x);
//	printf("y=x++ : %d\n", y);
//
//	y = ++x;
//	printf("++x : %d\n", x);
//	printf("y= ++x : %d\n", y);
//
//	y = ++x + x++;
//	printf("%d\n", x);
//	printf("%d\n", y);
//
//	b = (1 + a++) + 10;
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//}
//--------------------------------------------------------------------------------
///*복합 대입 연산자 프로그램  p37*/
//#include <stdio.h>
//
//int main(void)
//{
//	int x = 10, y = 10, z = 33;
//
//	x += 1;
//	y *= 2;
//	z%= 10 + 20;
//
//	printf("x=%d y =%d z = %d\n", x, y, z);
//	return 0;
//
//
//
//
//}
//-----------------------------------------------------------------------------
/*42p 예제*/
//#include <stdio.h>
//int main(void)
//{
//	int x, y;
//
//	printf("두 개의 정수를 입력하시오: ");
//	scanf_s("%d %d", &x, &y);
//
//	printf("x==y의 결과값: %d\n", x == y);
//	printf("x!=y의 결과값: %d\n", x != y);
//	printf("x > y의 결과값: %d\n", x > y);
//	printf("x < y의 결과값: %d\n", x < y);
//	printf("x >= y의 결과값: %d\n", x >= y);
//	printf("x <= y의 결과값: %d\n", x <= y);
//
//	return 0;
//
//}
//----------------------------------------------------------------------------
/*46p 예제*/
//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//{
//	double a, b;
//	a = (0.3 * 3) + 0.1;
//	b = 1;
//	printf("a==b의 결과: %d\n", a == b);
//
//	printf("fans(a-b)<0.00001의 결과: %d\n", fabs(a - b) < 0.0001);
//
//	return 0;
//
//}
//-------------------------------------------------------------------------------
/* p55예제*/

//#include <stdio.h>
//
//int main(void)
//{
//	int x, y;
//
//	printf("두 개의 정수를 입력하시오: ");
//	scanf_s("%d %d", &x, &y);
//
//	printf("%d && %d의 결과값: %d\n",x,y,x&&y);
//	printf("%d || %d의 결과값: %d\n", x, y, x || y);
//	printf("!%d의 결과값: %d\n", x, !x);
//
//	return 0;
//
//
//}
//----------------------------------------------------------------
/*p59   윤년*/

//#include <stdio.h>
//
//int main(void)
//{
//	int year, result;
//
//	printf("연도를 입력하시오: ");
//	scanf_s("%d", &year);
//
//	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
//	printf("result=%d\n", result);
//
//	return 0;
//}
//---------------------------------------------------------------------------------
/*p61 예제*/
//#include <stdio.h>
//
//int main(void)
//{
//	int x,y;
//
//	printf("정수 2개:");
//	scanf_s("%d %d", &x, &y);
//
//	printf("큰수 = %d\n", (x > y) ? x : y);
//	printf("작은 수=%d\n", (x < y) ? x : y);
//
//	return 0;
//}
//------------------------------------------------------------------------------
/*p73 예제: 비트 연산자*/
//#include <stdio.h>
//
//int main(void)
//{
//	printf("AND: %08X\n", 0x9 & 0xA);
//	printf("OR: %08X\n", 0x9 | 0xA);
//	printf("XOR: %08X\n", 0x9 ^ 0xA);
//	printf("NOT: %08X\n", ~0x9);
//	printf("<<: %08X\n", 0x4 << 1);
//	printf(">>: %08X\n", 0x4 >> 1);
//
//	return 0;
//
//}
//-------------------------------------------------------------------
/*예제: 비트 연산자로 2의 보수 만들기*/
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 32;
//	a = ~a;
//	a = a + 0x01;
//	printf("a=%d\n", a);
//
//	return 0;
//}
//------------------------------------------------------------------------
/* XOR를 이용한 암호화*/
//#include <stdio.h>
//int main(void)
//{
//	char data = 'a';
//	char key = 0xff;
//	char encrpted_data, orig_data;
//
//	printf("원래의 문자=%c\n", data);
//
//	encrpted_data = data ^ key;
//	printf("암호화된 문자=%c\n", encrpted_data);
//
//	orig_data = encrpted_data ^ key;
//	printf("복원된 문자=%c\n", orig_data);
//
//	return 0;
//
//}
//-----------------------------------------------------------------------------
/*예제: 자동적 형변환과 명시적 형변환을 이용한 계산 출력*/
//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	double f;
//
//	f = 5 / 4;
//	printf("%.3lf\n", f);
//
//	f = (double)5 / 4;
//	printf("%.3lf\n", f);
//
//	f = 5.0 / 4;
//	printf("%.3lf\n", f);
//
//	f = (double)5 / (double)4;
//	printf("%.3lf\n", f);
//
//	i = 1.3 + 1.8;
//	printf("%d\n", i);
//
//	i = (int)1.3 + (int)1.8;
//	printf("%d\n", i);
//
//	return 0;
//
//}
//-------------------------------------------------------------
/*화씨온도를 섭씨로 바꾸기*/
//#include <stdio.h>
//int main(void)
//{
//
//	double f_temp;
//	double c_temp;
//
//	printf("화씨온도를 입력하시오: ");
//	scanf_s("%lf", &f_temp);
//	c_temp = 5 / 9 * (f_temp - 32);
//	printf("섭씨온도는 %lf입니다", c_temp);
//
//	return 0;
//}
