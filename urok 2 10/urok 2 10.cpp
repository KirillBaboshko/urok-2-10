#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
struct Item 
{
	char title[20];
	unsigned int qty;
	float price;
};
using namespace std;
int main()
{
	srand(time(NULL));

	FILE* out;
	if ((out = fopen("D:\\example\\outfile.txt", "w")) == NULL)
		{
			cout<< "Файл не был создан";
		}
	else 
	{
		cout << "OK!";
	}

	const int n = 159;
	int arr[n];
	FILE* out;
	const char* path = "D:\\example\\deadinsade.txt";
	int y = 1000;
	for (int i = 0; y > 0; i++)
	{
		arr[i] = y - 7;
		y=y- 7;

	}
	if ((fopen_s(&out,path, "w")) != NULL)
		{
			cout<< "Файл не был создан";
		}
	else 
	{
		for (int i = 0; i < n; i++)
		{
			fprintf(out,"%ld",arr[i]);
			fprintf(out, "\n");
		}
		if (fclose(out) == EOF)
		{
			cout << "Файл не закрыт";
		}
		else
		{
			cout << "Файл закрыт";
		}
	}

	float a;
	FILE* in;
	const char* path = "D:\\example\\infile.txt";

	if(fopen_s(&in, path, "r") != NULL)
	{
		cout << "Файл был открыт";
	}
	else 
	{
		while(!feof(in)) 
		{
			fscanf_s(in, "%f", &a);
			cout << a << " ";
		}
	}
	
	const char* path = "D:\\example\\tekst.txt";
	int c;
	int len = 0, cnt = 0;
	char buf[128];
	FILE* in;
	if (fopen_s(&in, path, "r") != NULL)
	{
		cout << "Файл был открыт";
	}
	else
	{
		while (!feof(in))
		{
			c = fgetc(in);                          // fgetc - считывает символ в виде айски кода
			if(c=='\n')
			{
				cnt++;
				cout << "string  " << cnt << " length= " << len << endl;
				len = 0;
			}
			else
			{
				len++;
			}
		}
		if (len)
		{
			cnt++;
			cout << "string  " << cnt << " length= " << len << endl;
		}
			fgets(buf, 127, in);                                 // fgets - построчное считывание , считывает строку-
			len = strlen(buf);
			if (buf[len - 1] == '\n')
			{
				buf[len - 1] == '\0';
			}
			puts(buf);
		}

	}
const int n = 5;
int arr[n];
FILE* out;
const char* path = "D:\\example\\b_data.dat";
if ((fopen_s(&out, path, "wb")) != NULL)
	{
		cout<< "Файл не был создан";
	}
else 
{
	for (int i = 0; i < n; i++)
	{
		fwrite(&arr[i], sizeof(int), 1, out);
	}
}
	return 0;
}