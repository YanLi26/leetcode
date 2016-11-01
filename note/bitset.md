#bitset
http://blog.163.com/lixiangqiu_9202/blog/static/53575037201251121331412/

##header
\#include\<bitset\>

##initial
bitset\<32\> bitvec; //all of them are 0

bitset\<32\> bitvec(23);

bitset\<32\> bitvec("123");

##operation
bitvec.count(); //the number of 1

bitvec.test(pos); //pos position is 1 or not

...