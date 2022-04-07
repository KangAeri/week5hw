#include "header.h"		//header.h 헤더파일을 include 

int main(){
	int num, page, i,j;
	int countarr[10] ={0,0,0,0,0,0,0,0,0,0}; 
	printf("Put the number of testcase : ");
	scanf("%d", &num);  
	for(i=0 ; i<num ; i++){		//페이지수 입력받아 계산하는 과정을 test case의 개수만큼  반복 
		printf("put in the number of pages : ");
		scanf("%d", &page); 
		numofeach(page, countarr);		//계산을 실행하는 numofeach 함수 호출, 인자로 page와 countarr배열을 넘김 
		printnum(countarr);				//계산된 결과를 저장한 배열의 내용을 출력하는 함수 printnum 함수 호출  
		printf("\n"); 					//다음 입력을 위해 줄바꿈 
		for(j=0 ; j<10 ; ){			
			countarr[j]=0;
			j++; 
		}
	}
	return 0;
}


 
