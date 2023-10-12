#include <stdio.h>

 int n = 1000000007;

long long Pow(int a, int b)
{
	if(b==0)
		return 1;
	if(b==1)
		return a;
	if(b%2==0)
		return (Pow(a,b/2)*Pow(a,b/2))%n;
	else
		{
			long long value1 = a;
			long long value2 = (Pow(a,b/2)*Pow(a,b/2))%n;

			return (value1*value2)%n;
		}
}

int main(void) {

	int t;
	scanf("%d", &t);

	while(t--){
		int a,b;
		scanf("%d %d", &a, &b);
		printf("%lld\n", Pow(a,b));
	}
}

