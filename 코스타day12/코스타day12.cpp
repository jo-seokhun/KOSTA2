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
		kor[i] = (double)((rand() % 1000) + 1) / 10.0; // rand : 貝呪 降持奄 (舛呪)  0 ~ 100.0   1 ~ 1000 0.1 ~ 100.0
		eng[i] = (double)((rand() % 1000) + 1) / 10.0; // rand : 貝呪 降持奄 (舛呪)  0 ~ 100.0   1 ~ 1000 0.1 ~ 100.0
		mat[i] = (double)((rand() % 1000) + 1) / 10.0; // rand : 貝呪 降持奄 (舛呪)  0 ~ 100.0   1 ~ 1000 0.1 ~ 100.0
	}
	//for (i = 0; i < students; i++)
	//{
	//	printf("%.1f  %.1f   %.1f\n", kor[i], eng[i], mat[i]);
	//}
	printf("坪什展 IoT 厩嬢 繊呪 薄伐\n==============================\n\n鯵昔繊呪 軒什闘:\n");
	total = 0.;
	for (i = 0; i < students; i++)
	{
		printf("%7.1f\n", kor[i]); // %7.1f  :  叔呪 窒径税 穿端 切軒呪研 7切軒, 社呪繊 戚馬 1切軒
		total += kor[i];
	}
	average = total / students;

	printf("恥繊 : %7.1f\n", total);
	printf("汝液 : %7.1f\n", average);

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
		printf("走榎 護獣倉? "); scanf("%d", &k);
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
// 庚切伸 str聖 閤焼辞 背雁 庚切伸税 掩戚研 鞠宜形 捜.
int str_len(char* str)  // 壕伸戚 焼観 匂昔斗稽 閤製  [] == *
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
	//庚1) scanf 敗呪研 戚遂馬食 庚切伸聖 脊径板
	//    背雁 庚切伸聖 廃 越切梢 因拷(_)聖 諮脊馬食
	//	  窒径馬獣神.
	//    > 12345   ==>  1_2_3_4_5
	//庚2) scanf 敗呪研 戚遂馬食 庚切伸聖 脊径板
	//     getch() 敗呪研 戚遂馬食 収切 徹研 刊牽檎
	//	   背雁 是帖税 庚切研 窒径馬獣神

	char buf[100];  //	buffer : 獄遁 : 壕伸 == 匂昔斗
	int i, j, k;

	printf("庚切伸聖 脊径馬室推 : "); scanf("%s", buf);

	j = str_len(buf);
	printf("脊径庚切伸 [%s] 税 掩戚澗 %d 脊艦陥 \n", buf, j);
	for (i = 0; i < j; i++)
	{
		printf("%c_", buf[i]);
	}

	while (1)
	{
		k = getch() - 0x30;   // 0 ~ 9 収切徹 (    ) 脊径
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
// 舛呪 痕呪 a人 b税 葵聖 嘘発.
void swap(int* a, int* b)	// a,b研 匂昔斗稽 識情馬壱 穿含吉 古鯵痕呪 葵生稽 竺舛 (段奄鉢)
{							// 匂昔斗 紫遂号狛 : 匂昔斗亜 亜軒徹澗 爽社税 葵 : *p
							//					 爽社 切端 : p
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




// 穿蝕痕呪 : 戚馬税 敗呪拭辞 紫遂 亜管
const int nArr = 10;
int kor[] = { 67, 70, 77, 65, 68, 72, 79, 55, 85, 61 };
int eng[] = { 70, 75, 80, 60, 65, 55, 80, 95, 67, 84 };
char nam[] = "ABCDEFGHIJK";//庚切伸 匂昔斗稽 痕井 : "畠掩疑" "畠掩戚" "畠掩誌" "畠掩紫" "畠掩神" "掩整" 掩張 掩独 掩姥 
const char* name[] = { "畠掩疑", "畠掩戚", "畠掩誌", "畠掩紫", "畠掩神", "戸析", "戸戚", "戸誌", "戸紫", "戸神" };
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
			if ((a + i)->avg < (a + j)->avg)	// 姥繕端 匂昔斗税 葵  ===> a[i].avg < a[j].avg
			{
				SWAP(a + i, a + j, sizeof(STU));
			}
		}
	}
}

void sortTest()	//  壕伸聖 戚遂廃 失旋坦軒
{
	double f_kor = 0.3, f_eng = 0.7;
	double tot[nArr];
	int i, j, k;

	for (i = 0; i < nArr; i++)
	{
		tot[i] = kor[i] * f_kor + eng[i] * f_eng;
	}
	printf("Original :\n");
	printf("戚硯 : "); for (int i = 0; i < nArr; i++) printf("%7s ", name[i]); printf("\n\n");
	printf("厩嬢 : "); for (int i = 0; i < nArr; i++) printf("%7d ", kor[i]); printf("\n\n");
	printf("慎嬢 : "); for (int i = 0; i < nArr; i++) printf("%7d ", eng[i]); printf("\n\n");
	printf("杯域 : "); for (int i = 0; i < nArr; i++) printf("%7.2f ", tot[i]); printf("\n\n");

	sortEx(tot, nArr);

	printf("Sorted :\n");
	printf("戚硯 : "); for (int i = 0; i < nArr; i++) printf("%7s ", name[i]); printf("\n\n");
	printf("厩嬢 : "); for (int i = 0; i < nArr; i++) printf("%7d ", kor[i]); printf("\n\n");
	printf("慎嬢 : "); for (int i = 0; i < nArr; i++) printf("%7d ", eng[i]); printf("\n\n");
	printf("杯域 : "); for (int i = 0; i < nArr; i++) printf("%7.2f ", tot[i]); printf("\n\n");
}

void sortTestNew()		// 姥繕端研 戚遂廃 失旋坦軒
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
	printf("戚硯 : "); for (int i = 0; i < nArr; i++) printf("%7s ", student[i].name); printf("\n\n");
	printf("厩嬢 : "); for (int i = 0; i < nArr; i++) printf("%7d ", student[i].kor); printf("\n\n");
	printf("慎嬢 : "); for (int i = 0; i < nArr; i++) printf("%7d ", student[i].eng); printf("\n\n");
	printf("杯域 : "); for (int i = 0; i < nArr; i++) printf("%7.2f ", tot[i]); printf("\n\n");

	sortEx(tot, nArr);

	printf("Sorted :\n");
	printf("戚硯 : "); for (int i = 0; i < nArr; i++) printf("%7s ", student[i].name); printf("\n\n");
	printf("厩嬢 : "); for (int i = 0; i < nArr; i++) printf("%7d ", student[i].kor); printf("\n\n");
	printf("慎嬢 : "); for (int i = 0; i < nArr; i++) printf("%7d ", student[i].eng); printf("\n\n");
	printf("杯域 : "); for (int i = 0; i < nArr; i++) printf("%7.2f ", tot[i]); printf("\n\n");
}

void sortTestEx()		// 姥繕端研 戚遂廃 失旋坦軒 - 督析 脊窒径
{
	double f_kor = 0.3, f_eng = 0.7;
	//double tot[nArr], avg[nArr];
	int i, j, k;

	//******************************************************************
	//*******************************************************************
	//*******************************************************************
	int num;	// file拭辞 read
	STU* students;  // malloc 生稽 五乞軒 溌左
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
	fprintf(fout, "%-7s %-7s %-7s %-7s %-7s\n", "  戚硯", "  厩嬢", "  慎嬢", "  恥繊", "  汝液");
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
	FILE* fin = fopen("C:\\Users\\hulklee1\\aa", "r");  // 幻鉦 督析戚 糎仙馬走 省生檎 NULL 鋼発
	FILE* fout = fopen("C:\\Users\\hulklee1\\aa.o", "w+b");
	if (fin != NULL)
	{
		fscanf(fin, "%d %f %s", &m, &d, buf);
		fprintf(fout, "舛呪 : %d\n叔呪 : %f\n庚切伸 : %s\n", m, d, buf);
		printf("舛呪 : %d\n叔呪 : %f\n庚切伸 : %s\n", m, d, buf);
		//while (1)
		//{
		//	if(fgets(buf, 1024, f) == NULL) break;
		//	fputs(buf, stdout);
		//	fputs(buf, fout0);
		//	fputs(buf, fout1);
		//	fputs(buf, fout2);
		//}
	}
	else printf("脊径 督析戚 糎仙馬走 省柔艦陥\n");
}

#define KBD_BUF_SIZE 20
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x>y)?y:x

/*fgets澗 徹左球 脊径閤聖凶 殖斗研 魁猿走 奄陥鍵陥/督析拭辞 石嬢臣凶 紫遂/(buf,length,file*)殖斗研 魁猿走 奄陥鍵陥
聡 fgets澗 殖斗研 団醤幻 角嬢亜澗汽 scanf澗 殖斗猿走 葵拭 級嬢亜辞?
but 什凪戚什稽 戚欠嬢遭 延 庚切伸 聡 ししし ししし ししし 戚訓闇 公石製*/
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
		printf("\n\n\n===庚切伸 痕発 砺什闘===\n"); printf("1.舛呪 (int)\n"); printf("2.叔呪 (double)\n"); printf("3.庚切伸 (因拷匂敗)\n"); printf("4. 五滴稽敗呪 砺什闘\n");
		printf("================\n"); printf("Select Menu: ");

		//scanf("%d", &k); 置曽 keyborad buffer税 [Enter]徹 坦軒 琶推
		fgets(b, 20, stdin);

		if (b[0] == '1')
		{
			char buf[KBD_BUF_SIZE];
			printf("舛呪研 脊径馬室推 : ");
			int n = getint();
			//scanf("%s", buf);
			//fgets(buf, KBD_BUF_SIZE, stdin); //stdin: Get something from keyboard
			//int n = atoi(buf);
			printf("痕発吉 舛呪葵精 %d 脊艦陥.\n\n ", n);
		}
		else if (*b == '2')
		{
			char buf[KBD_BUF_SIZE];
			printf("叔呪研 脊径馬室推 : ");
			double n = getdouble();
			//scanf("%s", buf);
			//fgets(buf, KBD_BUF_SIZE, stdin); //stdin: Get something from keyboard
			//double n = atof(buf);
			printf("痕発吉 叔呪葵精 %f 脊艦陥.\n\n ", n);
		}
		else if (*b == '3')
		{
			char buf[KBD_BUF_SIZE];
			printf("庚切伸聖 脊径馬室推 : ");
			//scanf("%s", buf);
			fgets(buf, KBD_BUF_SIZE, stdin); //stdin: Get something from keyboard
			printf("痕発吉 舛呪葵精 %s 脊艦陥.\n\n ", buf);
		}
		else if (*b == '4')
		{
			int x, y;
			printf("湛 腰属 舛呪研 脊径馬室推 : ");
			x = getint();
			printf("砧 腰属 舛呪研 脊径馬室推 : ");
			y = getint();
			printf("砧 鯵税 舛呪 %d人 %d 掻 笛 呪澗 %d脊艦陥.\n\n\n ", x, y, MAX(x, y));

			float x1, y1;
			printf("湛 腰属 叔呪研 脊径馬室推 : ");
			x1 = getdouble();
			printf("砧 腰属 舛呪研 脊径馬室推 : ");
			y1 = getdouble();
			printf("砧 鯵税 叔呪 %.2f人 %.2f 掻 拙精 呪澗 %.2f脊艦陥.\n\n\n ", x1, y1, MIN(x1, y1));
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