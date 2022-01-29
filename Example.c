#include <stdio.h>

int main()
{
	// Ctrl+ F 찾기
	// Alt + 마우스 드래그  드래그한 부분만 선택
	// Ctrl + H 바꾸기 
	// 바꾸려는 변수를 선택한후 Ctrl + rr
	// Ctrl + X 잘라내기
	// Shift + Delet 한줄 없애기
	// Shift + Home 한줄 드래그
	// Ctrl + A 전체선택
	// Ctrl + Shift + Z 다시 실행
	// Ctrl + F4 탭창 끄기
	// 
	// printf : 출력
	// scanf_s : 입력

	// 0을 입력하면 "안녕하세요"
	// 1을 입력하면 "안녕히 가세요"
	// 2를 입력하면 "뭐"

	int n = 0;
	printf("숫자를 입력하세요. : ");
	scanf_s(" %d", &n);
	
	if (n == 0)
	{
		printf("안녕하세요");
	}
	else if (n == 1)
	{
		printf("안녕히 가세요");
	}
	else if (n == 2)
	{
		printf("뭐");
	}

	int input = 0;
	reinput:
	scanf_s(" %d", &input);
	
	switch (input) // 반복문의 원리
	{
	case 0:
		printf("안녕하세요");
		break;
	case 1:
		printf("안녕히 가세요");
		break;
	case 2:
		printf("뭐");
		break;
	default:
		printf("무슨말이에요?\n");
		goto reinput;
	}

	Example05();
}
int Example01()
{
	int input = 0;
reinput:
	scanf_s(" %d", &input);

	switch (input) // 반복문의 원리
	{
	case 0:
		printf("안녕하세요");
		break;
	case 1:
		printf("안녕히 가세요");
		break;
	case 2:
	case 3:
		printf("뭐");
		break;
	default:
		goto reinput;
	}
	Example01();
	return 0;

}

int Example02()
{
	// 숫자를 입력받아라
	// 0 ~ 9 범위 숫자를 입력하면
	// 0, 2, 4, 6, 8 입력시 "짝수"
	// 1, 3, 5, 7, 9 입력시 "홀수"
	// 0 ~ 9 범위 숫자가 아니라면
	// "숫자 범위를 벗어났습니다." 출력

	int num = 0;
	printf("숫자를 입력하세요. : ");
	reinput:
	scanf_s(" %d", &num);
	
	if (num >= 0 && num <= 9)
	
	switch (num % 2)
	{
	case 0:
		printf("짝수");
		break;
	case 1:
		printf("홀수");
		break;
	}
	
	else
	{
		printf("숫자 범위를 벗어났습니다.\n숫자를 다시 입력하세요 : ");
		goto reinput;
	}

	int input;
	reinput:
	printf("숫자를 입력하세요 : ");
	scanf_s(" %d", &input);

	if (input >= 0 && input <= 9)
	{
		switch (input)
		{
		case 0: case 2: case 4: case 8:
			printf("짝수");
			break;
		default: // case 1: case 3: case 5: case 7: case 9:
			printf("홀수");
			break;
		}
	}
	else
	{
		printf("숫자 범위를 벗어났습니다.");
		goto reinput;
	}
	return 0;
}

int Example03()
{
	int input;
	printf("숫자 입력 : ");
	scanf_s(" %d", &input);

	int cnt = 0;
	while (cnt < input)
	{
		printf("%d\n", cnt);
		cnt++;
	}
	
	for (int i = 0; i < input; i++)
	{
		printf("%d\n", i);
	}
	
	int input = 2;
	for (int standard = 2; standard <= 9; standard++)
	{
		for (int i = 1; i <= 9; i++)
		{
			printf("%d * %d = %d\n", standard, i, input * i);
		}
	}
	return 0;
}

int Example04()
{
	//int width, height;
	//printf("가로 길이를 입력해주세요 : ");
	//scanf_s(" %d", &width);
	//
	//printf("세로 길이를 입력해주세요 : ");
	//scanf_s(" %d", &height);
	//
	//for (int y = 0; y < height; y++)
	//{
	//	for (int x = 0; x < width; x++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	
	int size;
	printf("삼각형 크기를 입력해주세요 : ");
	scanf_s(" %d", &size);
	
	for (int line = 0; line < size; line++)
	{
		for (int draw = 4; draw - line < size; draw++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for (int line = 0; line < size; line++)
	{
		for (int draw = 0; draw < size - line; draw++)
		{
			printf("*");
		}
		printf("\n");
	}

}

int Example05()
{
	int size;
	printf("숫자를 입력해주세요 : ");
	scanf_s(" %d", &size);

	for (int i = 0; i < size; i++)
	{
		int blankCount = i - size / 2;
		if (blankCount < 0)
			blankCount *= -1;
		int fillCount = size - blankCount * 2;
		
		for (int blank = 0; blank < blankCount; blank++)
		{
			printf(" ");
		}
		for (int fill = 0; fill < fillCount; fill++)
		{
			printf("*");
		}
		printf("\n");
	}
}