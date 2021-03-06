#include <iostream>
#include <cassert>
#include "string.hpp"

int main(){
	{
		String one(" abcdefg hijkl 123");
		assert(one.nextchar(0)==1);
		assert(one.nextblank(1)==8);
		assert(one.nextblank(9)==14);
		assert(one.nextchar(8)==9);
		std::cout<<"Next blank and Next char test passed"<<std::endl;
	}	
	
	{
		String one("Hello! My name is nick! I'm not a fan of the justify function.");
		int initlen=one.length();
		one.justify(2);
		//if the justify length is shorter than the length of the string
		//then it shouldn't change anything
		assert(one.length()==initlen);	
		one.justify(100);	
		assert(one=="Hello!     My     name    is    nick!    I'm    not    a    fan    of    the    justify    function.");
	}
	std::cout<<"justify function passed"<<std::endl;


}
