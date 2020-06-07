#include <stdio.h>

function( string a){
	return a
}

int main(int argc, char const *argv[])
{
	
	string a = "11";
	function(a);//No error:invalid args
	return 0;
}