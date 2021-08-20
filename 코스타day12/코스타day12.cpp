#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <string.h>

const int students = 20;
int score()
{
	int i, j, k;
	double average, total;
	double kor[students], eng[students], mat[students];

	srand(time(NULL));
	for (i = 0; i < students; i++)
	{
		kor[i] = (double)((rand() % 1000) + 1) / 10.0; // rand : ���� �߻��� (����)  0 ~ 100.0   1 ~ 1000 0.1 ~ 100.0
		eng[i] = (double)((rand() % 1000) + 1) / 10.0; // rand : ���� �߻��� (����)  0 ~ 100.0   1 ~ 1000 0.1 ~ 100.0
		mat[i] = (double)((rand() % 1000) + 1) / 10.0; // rand : ���� �߻��� (����)  0 ~ 100.0   1 ~ 1000 0.1 ~ 100.0
	}
	//for (i = 0; i < students; i++)
	//{
	//	printf("%.1f  %.1f   %.1f\n", kor[i], eng[i], mat[i]);
	//}
	printf("�ڽ�Ÿ IoT ���� ���� ��Ȳ\n==============================\n\n�������� ����Ʈ:\n");
	total = 0.;
	for (i = 0; i < students; i++)
	{
		printf("%7.1f\n", kor[i]); // %7.1f  :  �Ǽ� ����� ��ü �ڸ����� 7�ڸ�, �Ҽ��� ���� 1�ڸ�
		total += kor[i];
	}
	average = total / students;

	printf("���� : %7.1f\n", total);
	printf("��� : %7.1f\n", average);

	return 0;
}
int Good()
{
	int i, j, k;
	char good[5] = "Good";
	char mon[] = "morning";
	char noon[] = "afternoon";
	char even[] = "evening";

	while (1)
	{
		printf("���� �����? "); scanf("%d", &k);
		if (k > 7 && k < 12)
		{
			printf("%s %s \n ", good, mon);
		}
		else if (k > 12 && k < 18)
		{
			printf("%s %s \n ", good, noon);
		}
		else if (k > 18 && k < 23)
		{
			printf("%s %s \n ", good, even);
		}
		else
		{
			printf("Hi!\n ");
			break;
		}
	}

	return 0;
}
int PointerTest()
{
	int a[3][2] = { 1, 2, 3, 4, 5, 6 };

	printf("a[0] : %x \n", a[0]);
	printf("a[1] : %x \n", a[1]);
	printf("a[2] : %x \n", a[2]);
	printf("a    : %x \n\n\n\n", a);

	printf("a   : %x \n", a);
	printf("a+1 : %x \n", a + 1);
	printf("a+2 : %x \n", a + 2);

	return 0;
}
// function define 
//     Prototype  :  int str_len(char *str)
// ���ڿ� str�� �޾Ƽ� �ش� ���ڿ��� ���̸� �ǵ��� ��.
int str_len(char* str)  // �迭�� �ƴ� �����ͷ� ����  [] == *
{
	//	return strlen(str);
	int ret = 0;
	//	while (*(str + ret++)); return ret;
	while (1)
	{
		if (str[ret] != 0) ret++;
		else break;
	}
	return ret;
}
int solution1()
{
	//��1) scanf �Լ��� �̿��Ͽ� ���ڿ��� �Է���
	//    �ش� ���ڿ��� �� ���ھ� ����(_)�� �����Ͽ�
	//	  ����Ͻÿ�.
	//    > 12345   ==>  1_2_3_4_5
	//��2) scanf �Լ��� �̿��Ͽ� ���ڿ��� �Է���
	//     getch() �Լ��� �̿��Ͽ� ���� Ű�� ������
	//	   �ش� ��ġ�� ���ڸ� ����Ͻÿ�

	char buf[100];  //	buffer : ���� : �迭 == ������
	int i, j, k;

	printf("���ڿ��� �Է��ϼ��� : "); scanf("%s", buf);

	j = str_len(buf);
	printf("�Է¹��ڿ� [%s] �� ���̴� %d �Դϴ� \n", buf, j);
	for (i = 0; i < j; i++)
	{
		printf("%c_", buf[i]);
	}

	while (1)
	{
		k = getch() - 0x30;   // 0 ~ 9 ����Ű (    ) �Է�
		if (k >= 0 && k <= 9)
		{
			printf("%c", buf[k]);
			continue;
		}
		break;
	}

	return 0;
}
// function define 
//     Prototype  :  void swap(int a, int b)
// ���� ���� a�� b�� ���� ��ȯ.
void swap(int* a, int* b)	// a,b�� �����ͷ� �����ϰ� ���޵� �Ű����� ������ ���� (�ʱ�ȭ)
{							// ������ ����� : �����Ͱ� ����Ű�� �ּ��� �� : *p
							//					 �ּ� ��ü : p
	int c = *a;
	//	printf("	Input  > a(%08x) : %d, b(%08x) : %d\n", a, *a, b, *b);
	*a = *b;
	*b = c;
	//	printf("	Result > a(%08x) : %d, b(%08x) : %d\n", a, *a, b, *b);
}

int SwapTest()
{
	int a = 50, b = 60;
	//	printf("Original> a(%08x) : %d,  b(%08x) : %d\n", &a, a, &b, b);

	swap(&a, &b);

	//	printf("After swap> a(%08x) : %d,  b(%08x) : %d\n", &a, a, &b, b);

	return 0;
}

void  sort(int* a, int n)
{
	int i, j, k;

	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (a[i] < a[j]) swap(a + i, a + j); // =swap(&a[i], &a[j]); 
		}
	}
}

void swapEx(double* a, double* b)
{
	double c = *a;
	*a = *b;
	*b = c;
}

void swapEx1(char* a, char* b)
{
	char c = *a;
	*a = *b;
	*b = c;
}

void swapEx2(const char** a, const char** b)
{
	const char* c = *a;
	*a = *b;
	*b = c;
}

//struct student {
//	int kor;
//	int eng;
//	char name[10];
//};
//typedef struct student STU;
typedef struct {
	char name[10];
	int kor;
	int eng;
	double tot;
	double avg;
} STU;

void SWAP(void* a, void* b, int op)
{
	if (op == 1)	// char
	{
		char c = *(char*)a;
		*(char*)a = *(char*)b;
		*(char*)b = c;
	}
	if (op == 4)	// int, flo
	{
		int c = *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = c;
	}
	if (op == 8)	// double
	{
		double c = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = c;
	}
	if (op == sizeof(STU))	// STU
	{
		STU c = *(STU*)a;
		*(STU*)a = *(STU*)b;
		*(STU*)b = c;
	}
}




// �������� : ������ �Լ����� ��� ����
const int nArr = 10;
int kor[] = { 67, 70, 77, 65, 68, 72, 79, 55, 85, 61 };
int eng[] = { 70, 75, 80, 60, 65, 55, 80, 95, 67, 84 };
char nam[] = "ABCDEFGHIJK";//���ڿ� �����ͷ� ���� : "ȫ�浿" "ȫ����" "ȫ���" "ȫ���" "ȫ���" "����" ��ĥ ���� �汸 
const char* name[] = { "ȫ�浿", "ȫ����", "ȫ���", "ȫ���", "ȫ���", "����", "����", "�ͻ�", "�ͻ�", "�Ϳ�" };
STU student[nArr];

void  sortEx(double* a, int n)
{
	int i, j, k;

	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if (a[i] < a[j])
			{
				//swapEx(a + i, a + j); // =swap(&a[i], &a[j]);  // tot : double
				//swap(kor + i, kor + j);
				//swap(eng + i, eng + j);
				//swapEx2(name + i, name + j);
				SWAP(a + i, a + j, 8);
				SWAP(student + i, student + j, 18);
				//SWAP(kor + i, kor + j, 4);
				//SWAP(eng + i, eng + j, 4);
				//SWAP(name + i, name + j, 4);
			}
		}
	}
}
void  sortSTU(STU* a, int n)
{
	int i, j, k;

	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			if ((a + i)->avg < (a + j)->avg)	// ����ü �������� ��  ===> a[i].avg < a[j].avg
			{
				SWAP(a + i, a + j, sizeof(STU));
			}
		}
	}
}

void sortTest()	//  �迭�� �̿��� ����ó��
{
	double f_kor = 0.3, f_eng = 0.7;
	double tot[nArr];
	int i, j, k;

	for (i = 0; i < nArr; i++)
	{
		tot[i] = kor[i] * f_kor + eng[i] * f_eng;
	}
	printf("Original :\n");
	printf("�̸� : "); for (int i = 0; i < nArr; i++) printf("%7s ", name[i]); printf("\n\n");
	printf("���� : "); for (int i = 0; i < nArr; i++) printf("%7d ", kor[i]); printf("\n\n");
	printf("���� : "); for (int i = 0; i < nArr; i++) printf("%7d ", eng[i]); printf("\n\n");
	printf("�հ� : "); for (int i = 0; i < nArr; i++) printf("%7.2f ", tot[i]); printf("\n\n");

	sortEx(tot, nArr);

	printf("Sorted :\n");
	printf("�̸� : "); for (int i = 0; i < nArr; i++) printf("%7s ", name[i]); printf("\n\n");
	printf("���� : "); for (int i = 0; i < nArr; i++) printf("%7d ", kor[i]); printf("\n\n");
	printf("���� : "); for (int i = 0; i < nArr; i++) printf("%7d ", eng[i]); printf("\n\n");
	printf("�հ� : "); for (int i = 0; i < nArr; i++) printf("%7.2f ", tot[i]); printf("\n\n");
}

void sortTestNew()		// ����ü�� �̿��� ����ó��
{
	double f_kor = 0.3, f_eng = 0.7;
	double tot1[nArr];
	double* tot = (double*)malloc(sizeof(double) * nArr);
	int i, j, k;

	for (i = 0; i < nArr; i++)
	{
		student[i].kor = kor[i];
		student[i].eng = eng[i];
		strcpy(student[i].name, name[i]);

		tot[i] = student[i].kor * f_kor + student[i].eng * f_eng;
	}
	printf("Original :\n");
	printf("�̸� : "); for (int i = 0; i < nArr; i++) printf("%7s ", student[i].name); printf("\n\n");
	printf("���� : "); for (int i = 0; i < nArr; i++) printf("%7d ", student[i].kor); printf("\n\n");
	printf("���� : "); for (int i = 0; i < nArr; i++) printf("%7d ", student[i].eng); printf("\n\n");
	printf("�հ� : "); for (int i = 0; i < nArr; i++) printf("%7.2f ", tot[i]); printf("\n\n");

	sortEx(tot, nArr);

	printf("Sorted :\n");
	printf("�̸� : "); for (int i = 0; i < nArr; i++) printf("%7s ", student[i].name); printf("\n\n");
	printf("���� : "); for (int i = 0; i < nArr; i++) printf("%7d ", student[i].kor); printf("\n\n");
	printf("���� : "); for (int i = 0; i < nArr; i++) printf("%7d ", student[i].eng); printf("\n\n");
	printf("�հ� : "); for (int i = 0; i < nArr; i++) printf("%7.2f ", tot[i]); printf("\n\n");
}

void sortTestEx()		// ����ü�� �̿��� ����ó�� - ���� �����
{
	double f_kor = 0.3, f_eng = 0.7;
	//double tot[nArr], avg[nArr];
	int i, j, k;

	//******************************************************************
	//*******************************************************************
	//*******************************************************************
	int num;	// file���� read
	STU* students;  // malloc ���� �޸� Ȯ��
	//*******************************************************************
	//*******************************************************************
	//*******************************************************************

	FILE* fin = fopen("C:\\Users\\hulklee1\\table1.txt", "r");
	FILE* fout = fopen("C:\\Users\\hulklee1\\table1.rpt", "w+b");
	fscanf(fin, "%d", &num);
	students = (STU*)malloc(sizeof(STU) * num);
	for (i = 0; i < num; i++) fscanf(fin, "%s", students[i].name);
	for (i = 0; i < num; i++) fscanf(fin, "%d", &students[i].kor);
	for (i = 0; i < num; i++) fscanf(fin, "%d", &students[i].eng);
	for (i = 0; i < num; i++)
	{
		students[i].tot = students[i].kor + students[i].eng;
		students[i].avg = students[i].tot / 2;
	}

	fprintf(fout, "Original :\n");
	fprintf(fout, "%-7s %-7s %-7s %-7s %-7s\n", "  �̸�", "  ����", "  ����", "  ����", "  ���");
	for (int i = 0; i < num; i++)
	{
		fprintf(fout, "%7s %7d %7d %7.2f %7.2f\n",
			students[i].name, students[i].kor, students[i].eng, students[i].tot, students[i].avg);
	}

	sortSTU(students, num);

	fprintf(fout, "\n\nSorted :\n");
	for (int i = 0; i < num; i++)
	{
		fprintf(stdout, "%7s %7d %7d %7.2f %7.2f\n",
			(students + i)->name, (students + i)->kor, (students + i)->eng, (students + i)->tot, (students + i)->avg);
	}
	//fcloseall();
	fclose(fout);
	fclose(fin);
}

void VoidPrint(void* p, int i)
{
	if (i == 1)
	{
		char* cp = (char*)p;
		printf("%c\n", *cp);
	}
	if (i == 2)	printf("%d\n", *(int*)p);
	if (i == 3)	printf("%f\n", *(double*)p);
}

void VoidTest()
{
	char c = 'z';
	int  n = 10;
	double a = 1.414;

	void* vp;
	VoidPrint(&c, 1);
	VoidPrint(&n, 2);
	VoidPrint(&a, 3);
}

void StreamTest()
{
	int m;
	float d;
	char buf[1024];
	FILE* fin = fopen("C:\\Users\\hulklee1\\aa", "r");  // ���� ������ �������� ������ NULL ��ȯ
	FILE* fout = fopen("C:\\Users\\hulklee1\\aa.o", "w+b");
	if (fin != NULL)
	{
		fscanf(fin, "%d %f %s", &m, &d, buf);
		fprintf(fout, "���� : %d\n�Ǽ� : %f\n���ڿ� : %s\n", m, d, buf);
		printf("���� : %d\n�Ǽ� : %f\n���ڿ� : %s\n", m, d, buf);
		//while (1)
		//{
		//	if(fgets(buf, 1024, f) == NULL) break;
		//	fputs(buf, stdout);
		//	fputs(buf, fout0);
		//	fputs(buf, fout1);
		//	fputs(buf, fout2);
		//}
	}
	else printf("�Է� ������ �������� �ʽ��ϴ�\n");
}

#define KBD_BUF_SIZE 20
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x>y)?y:x

/*fgets�� Ű���� �Է¹����� ���͸� ������ ��ٸ���/���Ͽ��� �о�ö� ���/(buf,length,file*)���͸� ������ ��ٸ���
�� fgets�� ���͸� �ľ߸� �Ѿ�µ� scanf�� ���ͱ��� ���� ����?
but �����̽��� �̷���� �� ���ڿ� �� ������ ������ ������ �̷��� ������*/
int getint()
{
	char buf[KBD_BUF_SIZE];
	fgets(buf, KBD_BUF_SIZE, stdin); //stdin: Get something from keyboard
	return(atoi(buf));
}
double getdouble()
{
	char buf[KBD_BUF_SIZE];
	fgets(buf, KBD_BUF_SIZE, stdin); //stdin: Get something from keyboard
	return (atof(buf));
}
void Stringparse()
{
	while (1)
	{
		//int k;
		char b[20];
		printf("\n\n\n===���ڿ� ��ȯ �׽�Ʈ===\n"); printf("1.���� (int)\n"); printf("2.�Ǽ� (double)\n"); printf("3.���ڿ� (��������)\n"); printf("4. ��ũ���Լ� �׽�Ʈ\n");
		printf("================\n"); printf("Select Menu: ");

		//scanf("%d", &k); ���� keyborad buffer�� [Enter]Ű ó�� �ʿ�
		fgets(b, 20, stdin);

		if (b[0] == '1')
		{
			char buf[KBD_BUF_SIZE];
			printf("������ �Է��ϼ��� : ");
			int n = getint();
			//scanf("%s", buf);
			//fgets(buf, KBD_BUF_SIZE, stdin); //stdin: Get something from keyboard
			//int n = atoi(buf);
			printf("��ȯ�� �������� %d �Դϴ�.\n\n ", n);
		}
		else if (*b == '2')
		{
			char buf[KBD_BUF_SIZE];
			printf("�Ǽ��� �Է��ϼ��� : ");
			double n = getdouble();
			//scanf("%s", buf);
			//fgets(buf, KBD_BUF_SIZE, stdin); //stdin: Get something from keyboard
			//double n = atof(buf);
			printf("��ȯ�� �Ǽ����� %f �Դϴ�.\n\n ", n);
		}
		else if (*b == '3')
		{
			char buf[KBD_BUF_SIZE];
			printf("���ڿ��� �Է��ϼ��� : ");
			//scanf("%s", buf);
			fgets(buf, KBD_BUF_SIZE, stdin); //stdin: Get something from keyboard
			printf("��ȯ�� �������� %s �Դϴ�.\n\n ", buf);
		}
		else if (*b == '4')
		{
			int x, y;
			printf("ù ��° ������ �Է��ϼ��� : ");
			x = getint();
			printf("�� ��° ������ �Է��ϼ��� : ");
			y = getint();
			printf("�� ���� ���� %d�� %d �� ū ���� %d�Դϴ�.\n\n\n ", x, y, MAX(x, y));

			float x1, y1;
			printf("ù ��° �Ǽ��� �Է��ϼ��� : ");
			x1 = getdouble();
			printf("�� ��° ������ �Է��ϼ��� : ");
			y1 = getdouble();
			printf("�� ���� �Ǽ� %.2f�� %.2f �� ���� ���� %.2f�Դϴ�.\n\n\n ", x1, y1, MIN(x1, y1));
		}
		else if (*b == '0') break;
	}
}


int main()
{
	while (1)
	{

		printf("\n\n\n ====================\n"
			"	1.score();\n"
			"	2.Good();\n"
			"	3.PointerTest();\n"
			"	4.solution1();\n"
			"	5.SwapTest();\n"
			"	6.sortTestNew();\n"
			"	7.VoidTest();\n"
			"	8.StreamTest();\n"
			"	9.sortTestEx();\n"
			"	10.stringparse();\n"
			"	0. Exit\n\n"
			" ====================\n"
			"	Select Menu  ");
		int k = getint();

		switch (k)
		{
		case 1: score();		break;	// 1.
		case 2: Good();			break;	// 2.
		case 3: PointerTest();	break;	// 3.
		case 4: solution1();	break;	// 4.
		case 5: SwapTest();		break;	// 5.
		case 6: sortTestNew();	break;	// 6.
		case 7: VoidTest();		break;	// 7.
		case 8: StreamTest();	break;	// 8.
		case 9: sortTestEx();	break;	// 9.
		case 10: Stringparse();	break;	// 10.
		default: return 0;
		}
	}
}