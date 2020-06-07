#include <stdio.h>

function(int a){
	return a
}

int main(int argc, char const *argv[])
{
	
	int a,b = 1;
	function(a,b);//error:invalid args
	return 0;
}