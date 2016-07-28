#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int n = 1;
	char s[20];

	while(scanf("%s",s)){
		if(strcmp(s,"*")==0) return 0;
		if(strcmp(s,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",n++);
		else if(strcmp(s,"Umrah")==0)
		 printf("Case %d: Hajj-e-Asghar\n",n++);
	}

	return 0;
}
