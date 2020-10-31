#include <stdio.h>

void strmul(char s[], char t[], char n);
void strsum(char s[], char t[], char u[]);

int main() {
	char s[100], t[100], u[100];

	strmul(t, "abc", 2);
	strmul(u, "DE", 3);
	strsum(s, t, u);

	printf("t : %s\n", t);
	printf("u : %s\n", u);
	printf("s : %s\n", s);
	printf("l : %s\n", s);

	return 0;

}

void strmul(char s[], char t[], int n)
{

	int i, j, m;

	i = 0;
	m = 0;
	while (i < n)
	{
		j = 0;
		while (t[j] != '\0') {
			s[m] = t[j];
			m++;
			j++;
		}
		i++;
	}
	s[m] = '\0';
}


void strsum(char s[], char t[], char u[])
{
	int i, j;

	i = 0;
	while ((s[i] = t[i]) != '\0')
	{
		++i;
	}

	j = 0;
	while ((s[i] = u[j]) != '\0')
	{
		i++;
		j++;
	}
}