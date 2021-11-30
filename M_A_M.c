#include<stdio.h>
#define WIDTH1 151
#define WIDTH2 189
#define WIDTH3 11
#define WIDTH4 7
#define WIDTH5 13

char origin_data[]="filename.csv";
char data_1[]="data1.txt";
char data_2[]="data2.txt";
char data_3[]="data3.txt";
char data_4[]="data4.txt";
char MAF_data[]="filenameM_A_M.csv";

double buff1[WIDTH1];
double buff2[WIDTH2];
double buff3[WIDTH3];
double buff4[WIDTH4];
double buff5[WIDTH5];

int bp1=0;
int bp2=0;
int bp3=0;
int bp4=0;
int bp5=0;

int ky1=0;
int ky2=0;
int ky3=0;
int ky4=0;
int ky5=0;
int i,j;
int x,y1,y2,y3,y4,y5;
int xx,yy1,yy2,yy3,yy4,yy5;

int caly1=0;
int caly2=0;
int caly3=0;
int caly4=0;
int caly5=0;

int main(void)
{
	FILE *data1;
	FILE *data2;

	data1=fopen(origin_data,"r");
	for(i=0;fscanf(data1,"%d,%d,%d,%d,%d,%d",&x,&y1,&y2,&y3,&y4,&y5)!=EOF;i++){
		ky1=ky1-buff1[bp1];

		buff1[bp1]=y1;

		ky1=ky1+y1;

		bp1++;

		if(bp1>=WIDTH1){
			bp1=0;
		}
		data2=fopen(data_1,"a");
		caly1=ky1/WIDTH1;

		fprintf(data2,"%d %d %d %d %d %d\n",x,caly1,y2,y3,y4,y5);
		fclose(data2);
	}
	fclose(data1);

	data1=fopen(data_1,"r");
	for(i=0;fscanf(data1,"%d %d %d %d %d %d",&x,&y1,&y2,&y3,&y4,&y5)!=EOF;i++){
		ky2=ky2-buff2[bp2];

		buff2[bp2]=y2;

		ky2=ky2+y2;

		bp2++;

		if(bp2>=WIDTH2){
			bp2=0;
		}
		data2=fopen(data_2,"a");
		caly2=ky2/WIDTH2;

		fprintf(data2,"%d %d %d %d %d %d\n",x,y1,caly2,y3,y4,y5);
		fclose(data2);
	}
	fclose(data1);

	data1=fopen(data_2,"r");
	for(i=0;fscanf(data1,"%d %d %d %d %d %d",&x,&y1,&y2,&y3,&y4,&y5)!=EOF;i++){
		ky3=ky3-buff3[bp3];

		buff3[bp3]=y3;

		ky3=ky3+y3;

		bp3++;

		if(bp3>=WIDTH3){
			bp3=0;
		}
		data2=fopen(data_3,"a");
		caly3=ky3/WIDTH3;

		fprintf(data2,"%d %d %d %d %d %d\n",x,y1,y2,caly3,y4,y5);
		fclose(data2);
	}
	fclose(data1);

	data1=fopen(data_3,"r");
	for(i=0;fscanf(data1,"%d %d %d %d %d %d",&x,&y1,&y2,&y3,&y4,&y5)!=EOF;i++){
		ky4=ky4-buff4[bp4];

		buff4[bp4]=y4;

		ky4=ky4+y4;

		bp4++;

		if(bp4>=WIDTH4){
			bp4=0;
		}
		data2=fopen(data_4,"a");
		caly4=ky4/WIDTH4;

		fprintf(data2,"%d %d %d %d %d %d\n",x,y1,y2,y3,caly4,y5);
		fclose(data2);
	}
	fclose(data1);

	data1=fopen(data_4,"r");
	for(i=0;fscanf(data1,"%d %d %d %d %d %d",&x,&y1,&y2,&y3,&y4,&y5)!=EOF;i++){
		ky5=ky5-buff5[bp5];

		buff5[bp5]=y5;

		ky5=ky5+y5;

		bp5++;

		if(bp5>=WIDTH5){
			bp5=0;
		}
		data2=fopen(MAF_data,"a");
		caly5=ky5/WIDTH5;

		fprintf(data2,"%d,%d,%d,%d,%d,%d\n",x,y1,y2,y3,y4,caly5);
		fclose(data2);
	}
	fclose(data1);

	return 0;
}
