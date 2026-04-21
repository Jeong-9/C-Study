//1. 


//2.반환형o, 매개변수x
//int input(void)
//{
//	int x;
//	printf("점수한개입력");
//	scanf_s("%d", & x);
//
//	return x;
//}
//int main(void)
//{
//	int x, y, sum;
//	x = input();
//	y = input();
//
//	sum = x + y;
//	printf("두 수의 합=%d", sum);
//}
////3.반환형x, 매개변수o
//void add(int x, int y)
//{
//	int sum;
//	sum = x + y;
//	printf("두 수의 합=%d", sum);
//
//}
//
//int main(void)
//{
//	int x, y;
//	printf("두 개 정수 입력:");
//	scanf("%d %d", &x, &y);
//	add(x, y);
//}
////4. 반환형 x  매개변수 x
//void print(void)
//{
//	printf("=====");
//}
//
//int main(void)
//{
//	print();
//	int x, y, sum;
//	printf("두 정수 입력: ");
//	scanf("%d %d", &x, &y);
//	print();
//	sum = x + y;
//	printf("두수의 합=%d", sum);
//	print();
//
//}
//--------------------------------------------------------------------
//p20 매개 변수와 반환값
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//}
//-----이거 좀 어렵,,,,-----------------------------------------------------------------------
// 
//예제 p22
// print_stars() 함수를 2번 호출 하여서 다음과 같이 출력하는 프로그램을 작성해보자 
//#include<stdio.h>
//void print_stars()
//{
//	for (int i = 0; i < 30; i++)
//		printf("*");
//
//
//}
//
//int main(void)
//{
//	print_stars();
//	printf("\nHello World!\n");
//	print_stars();
//	printf("\n");
//
//	return 0;
//
//}
//---------------------------------------------------------------
// 정수 2개 입력하여 더 큰 값을 구하시오.
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int max(int x ,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//
//}
//int main(void)
//{
//	int x, y, larger;
//
//	printf("정수 2개를 입력하시오: ");
//	scanf("%d %d", &x, &y);
//
//	larger = max(x, y);
//	printf("더 큰 값은 %d입니다. \n", larger);
//	return 0;
//
//}
//----------------------------------------------------------------
//p41 예제
//수학적인 조합 값을 구하는 예제
//#include<stdio.h>
//
////팩토리얼 값을 반환
//int factorial(int n)
//{
//	int i, result = 1;
//
//	for (i = 1; i <= n; i++)
//		result *= i;
//	return result;
//
//
//}
////팩토리얼 값을 이용하여서 조합값을 계산
//int combination(int n, int r)
//{
//	return (factorial(n) /( factorial(r) * factorial(n - r)));
//
//}
//// 사용자로부터 값을 입력받아서 반환
//int get_integer(void)
//{
//	int n;
//
//	printf("정수를 입력하시오: ");
//	scanf_s("%d", &n);
//	return n;
//
//}
//int main(void)
//{
//	int a, b;
//	a = get_integer();
//	b = get_integer();
//
//	printf("C(%d, %d) = %d\n", a, b, combination(a, b));
//	return 0;
//}
//--------------------------------------------------------------------------
//39p 예제

//#include<stdio.h>
//
//void printMenu()
//{
//	printf("=========================================\n");
//	printf("'c'섭씨온도에서 화씨온도로 변환\n");
//	printf("'f'화씨온도에서 섭씨온도로 변환\n");
//	printf("'q'종료\n");
//	printf("=======================================\n");
//
//
//}
//double C2F(double c_temp)
//{
//	return 9.0 / 5.0 * c_temp + 32;
//
//}
//double F2C(double f_temp)
//{
//	return (f_temp - 32.0) * 5.0 / 9.0;
//}
//
//int main(void)
//{
//	char choice;
//	double temp;
//
//	while (1) {
//		printMenu();
//		printf("메뉴에서 선택하세요: ");
//		choice = getchar();
//		if (choice == 'q')break;
//		else if (choice == 'c') {
//			printf("섭씨온도: ");
//			scanf_s("%lf", &temp);
//			printf("화씨온도: %lf\n\n", C2F(temp));
//
//		}
//		else if (choice == 'f') {
//			printf("화씨온도: ");
//			scanf_s("%lf", &temp);
//			printf("섭씨온도: %lf \n\n", F2C(temp));
//		}
//		getchar();
//	}
//	return 0;
//}
//-----------------------------------------------------------------------------
//lab소수찾기43p
//#include<stdio.h>
//
//int get_integer(void)
//{
//	int n;
//
//	printf("정수를 입력하시오: ");
//	scanf_s("%d", &n);
//	return n;
//
//}
//
//int is_prime(int n)
//{
//	int i;
//
//	for (i = 2; i < n; i++) {
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main(void)
//{
//	int n;
//	n = get_integer();
//
//	if (is_prime(n) == 1)
//		printf("%d은 소수입니다/\n", n);
//	else
//		printf("%d은 소수기 아닙니다.\n", n);
//	return 0;
//}
//
//----------------------------------------------------------------------
/*매번 난수를 다르게 생성하려면 시드를 다르게 하여야 한다*///<--- 약간 로또 번호 느낌
//#include <stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//#define MAX 45
//int main(void)
//{
//	int i;
//
//	srand((unsigned)time(NULL));
//	for (i = 0; i < 6; i++)
//		printf("%d\n", 1+rand() % MAX);
//	return 0;
//}
//-----------------------------------------------------------------------
//동전 던지기 게임--> 동전을 100번 던져서 앞면이 나오는 횟수와 뒷면이 나오는 횟수를 출력한다.
//#include<stdlib.h>
//#include<stdio.h>
//#include<time.h>
//int coin_toss(void);
//
//int main(void)
//{
//	int toss;
//	int heads = 0;
//	int tails = 0;
//
//	srand((unsigned)time(NULL));
//
//	for (toss = 0; toss < 100; toss++) {
//		if (coin_toss() == 1)
//			heads++;
//		else
//			tails++;
//	}
//	printf("동전의 앞면: %d\n", heads);
//	printf("동전의 뒷면: %d\n", tails);
//	return 0;
//}
//int coin_toss(void)
//{
//	int head = rand() % 2;
//	return head;
//}
//---------------------------------------------------------------------------
//floor와ceil()함수
//#include<stdio.h>
//#include<math.h>
//
//int main(void)
//{
//	double result, value = 2.3;
//
//	result = floor(value);
//	printf("%lf\n", result);
//
//	result = ceil(value);
//	printf("%lf\n", result);
//
//
//}
//----------------------------------------------------------------------------------
/*사인, 코사인, 탄젠트*/
// 삼각 함수 라이브러리
//#include<math.h>
//#include<stdio.h>
//
//int main(void)
//{
//	double pi = 3.1415926535;
//	double x, y;
//
//	x = pi / 2;
//	y = sin(x);
//	printf("sin(%lf)= %lf\n", x, y);
//	y = cos(x);
//	printf("cos( %lf ) = %lf\n", x, y);
//	y = tan(x);  //90도일때 무한대로 커지는 값
//	printf("tan( %lf ) = %lf\n", x, y);
//}
//----------------------------------------------------------------------------------------
//시간 맞추는 게임
// 사용자에게 정확한 시간을 예측하게 하는 게임을 만들어보자. 사용자에게 10초가
//지나면 엔터키를 누르라고 한 후에 정확한 시간과 얼마나 차이가 나는지를 출력한다
//#include <stdio.h>
//#include <time.h>
//int main(void)
//{
//	time_t start, end;
//	start = time(NULL);
//	printf("10초가 되면 엔터키를 누르세요\n");
//	while (1) {
//		if (getchar())
//			break;
//	}
//	printf("종료되었습니다.\n");
//	end = time(NULL);
//	printf("경과된 시간은 %1d초 입니다\n", end - start);
//	return 0;
//}
//----------------------------------------------------------------------------------------
//문제풀이1
// 사용자로부터 입력받은 실수를 제곱하여 반환하는 함수 double square(double)을 작성한다
//square()함수를 main()에서 호출하여 테스트하는 프로그램을 작성하시오.
//#include <stdio.h.>
//#include<stdlib.h>
//
//
//double square(double x){
//	double
//
//}
///--------------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 코드 받기
//문제풀이2
/*전달된 문자가 알파펫 문자인지 아닌지를 검사하는 함수 check_alpha()를 작성하소 조건문에서 함수를 호출하여
사용자가 입력한 문자가 알파벳('A~Z,a~z)인지를 판단하여 1또는 0을 반환하여 main에서 알파벳입니다 또는 알파벳 문자가 아닙니다를
출력하는 프로그램을 작성하시오*/
//#include<stdio.h>
//
//int check_alpha(char a) {
//	if ((a >= 'A') && (a <= 'Z') || (a >= 'a') && (a <= 'z'))
//		return 1;
//	else
//		return 0;
//
//}
//int main(void)
//{
//	char a;
//	printf("문자를 입력하세요: ");
//	scanf_s("%c", &a);
//	if (check_alpha(a) == 1)
//		printf("알파벳입니다");
//	else
//		printf("알파벳이 아닙니다");
//
//
//}
//--------------------------------------------------------------------------------
//문제풀이3
/*사용자로부터 2개의 정수를 입력받아
1-> 두 수를 더하는 함수 add(), 반환형은 있고 매개변수도 있는 함수
2-> 두 수 중 큰 값을 찾는 함수 max(), 반환형은 있고 매개변수도 있는 함수
3-> 두수 중 작은 값을 찾는 함수를 작성하여 min(), 반환형은 있고 매개변수고 있는 함수
4-> 두수를 입력받는 함수를 작성하여 get_int()반환형은 있고 매개변수는 없는 함수
main에서 각각의 함수를 호출한 뒤 출력을 main에서 하도록 작성하시오*/

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//	int main(void)
//	{
//
//	}
//
//}/////////////////////////////////////////////////////////////////////////////////
////아침퀴즈
//#include <stdio.h>
//int main(void)
//{
//	int win_num=29;
//	int user_n1;
//	int user_n2;
//
//	printf("정수 2개입력: ");
//	scanf_s("%d %d", &user_n1, &user_n2);
//	if (user_n1 == win_num && user_n2 == win_num)
//	{
//		printf("당첨입니다");
//		return 0;
//	}
//
//
//
//}
//----------------------------------------------------------
#include<stdio.h>
int main(void)
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum += i;
		
	}

			printf("1부터 100까지의 합: %d\n", sum);
			return 0;
		
}