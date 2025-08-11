#include<stdio.h>

void main(){

	int x = 4;
	int y = 5;
	int ans1;

	ans1 = ++x & ++y;
	printf("%d\n",ans1);

	int a = 4;
        int b = 5;
        int ans2;

        ans2 = a-- | ++b;
        printf("%d\n",ans2);
}
