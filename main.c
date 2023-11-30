#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int ID; //학번
	char name[100]; //이름
	float score; //학점 
};

int main(int argc, char *argv[])
{
	//instance 선언
	struct student s1 = {123, "JUYEOP", 4.3};
	
	//다른 값 변경
	s1.ID = 123456;
	s1.name[0] = 'c';
	s1.score = 0.7;
	
	//출력
	printf("ID: %i\n", s1.ID);
	printf("name: %s\n", s1.name);
	printf("score: %f\n", s1.score); 
	
	strcpy(s1.name, "Bongjun");
	printf("name2 : %s\n");
	 
	return 0;
}
