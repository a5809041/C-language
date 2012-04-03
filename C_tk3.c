#include <stdio.h>
#include <stdlib.h>

char in[81];
int  pos, P,Q,R;

int get(){ return in[pos++]; }

int parse()
{
	int c = get(), ope, d;

	if( c == 'P' ) return P;
	if( c == 'Q' ) return Q;
	if( c == 'R' ) return R;
	if( c == '-' ) return 2-parse();
	if(isdigit(c)) return c-'0';

	c   = parse();
	ope = get();
	d   = parse();
	get();

	return ope == '+' ? (c>d?c:d) : (c<d?c:d);
}

int main(void)
{
	for(;;)
	{
		int ans = 0;
		fgets(in,sizeof(in), stdin);
		if( in[0] == '.' ) break;

		for( P = 0; P <= 2; ++P )
			for( Q = 0; Q <= 2; ++Q )
				for( R = 0; R <= 2; ++R )
					if( pos = 0, parse() == 2 )
						++ans;

		printf("%d\n",ans);
	}

	return 0;
}
