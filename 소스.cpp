#include<iostream>
#include<string>
using namespace std;

void main()
{
	int m, j, i,z,a;
	
	string b;

	while (cin >> b){


		cout << "\n소문자 영단어를 입력해주세요.(그만두려면 ! 입력) : ";

		
		
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
		
	if(a==0)		cout << "소문자만 입력할것 ";
	else { cout << '\n' << "영단어" << b << " 중에 " << "모음은" << m << "개," << "자음은 " << j << "개 이다.\n"; }

	}
}
