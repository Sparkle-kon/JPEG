#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "jpeg_encoder.h"
#include <stdlib.h>


//-------------------------------------------------------------------------------
int main()
{

	char fname[50]; //用于存放文件名

	printf("输入文件名：");

	scanf("%s", fname);
	JpegEncoder encoder;
	//输入的文件必须是24bit的bmp文件，尺寸必须是8的倍数
	encoder.readFromBMP(fname);

	char foutput[50];//用于存放输出文件名
	printf("输出文件名：");

	scanf("%s", foutput);
	//第二个参数在1~199之间，代表文件压缩程度，数字越大，压缩后的文件体积越小
	encoder.encodeToJPG(foutput, 99);
	

	return 0;
}
