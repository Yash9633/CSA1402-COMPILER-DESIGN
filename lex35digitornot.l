%option noyywrap
%{
%}

%%
[0-9]+ {printf("Valid Digit\n");}
.* {printf("Invalid\n");}
%%
int main()
{
	printf("Enter input: ");
	yylex();
}