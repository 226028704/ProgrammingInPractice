#include <stdio.h>
int main(){
	int mark1;
	int mark2;
	int mark3;
	int studentID1;
	int studentID2;
	int studentID3;
	char name1[10];
	char name2[10];
	char name3[10];
		printf("Enter a mark:");
		scanf("%d",&mark1);
		printf("Enter a mark:");
		scanf("%d",&mark2);
		printf("Enter a mark:");
		scanf("%d",&mark3);
		printf("Enter a ID1:");
		scanf("%d",&studentID1);
		printf("Enter a ID2:");
		scanf("%d",&studentID2);
		printf("Enter a ID3:");
		scanf("%d",&studentID3);
		printf("Enter a mark:");
		scanf("%d",&mark1);
		printf("Enter a name:");
		scanf("%10s",&name1);
		printf("Enter a name:");
		scanf("%10s",&name2);
		printf("Enter a name:");
		scanf("%10s",&name3);
		printf("--------------------------Student's Reports--------------------------\n");
		printf("Student ID:%d and Student name:%s and Mark=%d\n ",studentID1,name1,mark1);
		printf("Student ID:%d and Student name:%s and Mark=%d\n ",studentID2,name2,mark2);
		printf("Student ID:%d and Student name:%s and Mark=%d\n ",studentID3,name3,mark3);
		printf("-----------------------------------------------------------------------");
	return 0;
}