目的：编写函数int fun(int lim, int aa[MAX])，其功能是求出小于或等于lim的所有素数并放在aa数组中，并返回所求出的素数的个数。

方法：求素数方法
	for(i=2;i<=lim;i++)
	{
		for(j=2;j<=i;j++)
			if(i%j==0) break; //i不是素数 跳出
			if(j==i)
			aa[k++]=i; //i是素数 加入aa
	}