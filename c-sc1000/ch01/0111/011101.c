// file: 011101.c
// desc: 删除数组中位于4的倍数位置元素

int main() {
	int i; // counter
	int a[] = {
		1,2,3,4,5,
		6,7,8,9,10,
		11,12,13,14,15,
		16,17,18,19,20		
	};

	// 删除数组中位于4的倍数位置的元素
	for(i = 0; i < 20; i++)
		a[i] = a[i + i/3];
	
	// 显示删除元素后的数组
	for( i = 0; i < 20-20/(3+1); i++)
		printf("%d ", a[i]);
	printf("\n");
}
