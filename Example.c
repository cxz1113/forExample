#include <stdio.h>

int main()
{
	// Ctrl+ F ã��
	// Alt + ���콺 �巡��  �巡���� �κи� ����
	// Ctrl + H �ٲٱ� 
	// �ٲٷ��� ������ �������� Ctrl + rr
	// Ctrl + X �߶󳻱�
	// Shift + Delet ���� ���ֱ�
	// Shift + Home ���� �巡��
	// Ctrl + A ��ü����
	// Ctrl + Shift + Z �ٽ� ����
	// Ctrl + F4 ��â ����
	// 
	// printf : ���
	// scanf_s : �Է�

	// 0�� �Է��ϸ� "�ȳ��ϼ���"
	// 1�� �Է��ϸ� "�ȳ��� ������"
	// 2�� �Է��ϸ� "��"

	int n = 0;
	printf("���ڸ� �Է��ϼ���. : ");
	scanf_s(" %d", &n);
	
	if (n == 0)
	{
		printf("�ȳ��ϼ���");
	}
	else if (n == 1)
	{
		printf("�ȳ��� ������");
	}
	else if (n == 2)
	{
		printf("��");
	}

	int input = 0;
	reinput:
	scanf_s(" %d", &input);
	
	switch (input) // �ݺ����� ����
	{
	case 0:
		printf("�ȳ��ϼ���");
		break;
	case 1:
		printf("�ȳ��� ������");
		break;
	case 2:
		printf("��");
		break;
	default:
		printf("�������̿���?\n");
		goto reinput;
	}

	Example05();
}
int Example01()
{
	int input = 0;
reinput:
	scanf_s(" %d", &input);

	switch (input) // �ݺ����� ����
	{
	case 0:
		printf("�ȳ��ϼ���");
		break;
	case 1:
		printf("�ȳ��� ������");
		break;
	case 2:
	case 3:
		printf("��");
		break;
	default:
		goto reinput;
	}
	Example01();
	return 0;

}

int Example02()
{
	// ���ڸ� �Է¹޾ƶ�
	// 0 ~ 9 ���� ���ڸ� �Է��ϸ�
	// 0, 2, 4, 6, 8 �Է½� "¦��"
	// 1, 3, 5, 7, 9 �Է½� "Ȧ��"
	// 0 ~ 9 ���� ���ڰ� �ƴ϶��
	// "���� ������ ������ϴ�." ���

	int num = 0;
	printf("���ڸ� �Է��ϼ���. : ");
	reinput:
	scanf_s(" %d", &num);
	
	if (num >= 0 && num <= 9)
	
	switch (num % 2)
	{
	case 0:
		printf("¦��");
		break;
	case 1:
		printf("Ȧ��");
		break;
	}
	
	else
	{
		printf("���� ������ ������ϴ�.\n���ڸ� �ٽ� �Է��ϼ��� : ");
		goto reinput;
	}

	int input;
	reinput:
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s(" %d", &input);

	if (input >= 0 && input <= 9)
	{
		switch (input)
		{
		case 0: case 2: case 4: case 8:
			printf("¦��");
			break;
		default: // case 1: case 3: case 5: case 7: case 9:
			printf("Ȧ��");
			break;
		}
	}
	else
	{
		printf("���� ������ ������ϴ�.");
		goto reinput;
	}
	return 0;
}

int Example03()
{
	int input;
	printf("���� �Է� : ");
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
	//printf("���� ���̸� �Է����ּ��� : ");
	//scanf_s(" %d", &width);
	//
	//printf("���� ���̸� �Է����ּ��� : ");
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
	printf("�ﰢ�� ũ�⸦ �Է����ּ��� : ");
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
	printf("���ڸ� �Է����ּ��� : ");
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