#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

typedef int type;
int main()
{
	type a, b;
	type result = 0;
	std::cout << "�� ���� ���� �Է� : ";
	std::cin >> a >> b;

	if (a < b) {
		for (int i = a + 1; i < b; i++) {
			result += i;
		}
	}
	else {
		for (int i = b + 1; i < a; i++) {
			result += i;
		}
	}
	std::cout << "�� �� ������ ���� ��: " << result << std::endl;

	return 0;
}

