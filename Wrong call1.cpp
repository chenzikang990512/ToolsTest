#include <stdio.h>

function(int a){
	return a
}

int main(int argc, char const *argv[])
{
	
	int a = 1;
	function(a);//error:invalid args
	return 0;
}