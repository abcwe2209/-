#include<iostream>
#include<string>
using namespace std;

void main()
{
	int m, j, i,z,a;
	
	string b;

	while (cin >> b){


		cout << "\n�ҹ��� ���ܾ �Է����ּ���.(�׸��η��� ! �Է�) : ";

		
		
		i = 0;
		m = 0;
		j = 0;
		z = 1;
		a = 1;
		if (b[0]== '!') {
			break;
		}

		do
		{

			if (((b[i] >= 'a') && (b[i] <= 'z')) || b[i] == '\0')
			{

				if (b[i] == 'a' || b[i] == 'o' || b[i] == 'e' || b[i] == 'i' || b[i] == 'u')
				{
					m++;

				}
				else
				{
					j++;
				}
			}
			else
			{
				a = 0;
				break;

			}
			i++;

		} while (b[i] != '\0');
		
	if(a==0)		cout << "�ҹ��ڸ� �Է��Ұ� ";
	else { cout << '\n' << "���ܾ�" << b << " �߿� " << "������" << m << "��," << "������ " << j << "�� �̴�.\n"; }

	}
}
