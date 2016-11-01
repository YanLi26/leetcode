#Hash Map

##header
\#include\<unordered_map\>

##intial
unordered_map\<int, string\> map;

##type
pair\<int, string\>

##insert
map.insert(make_pair(1, "a");

##traverse
for (auto it = m.begin(); it != m.end(); ++it){}

for(unordered_map\<int, int\>::iterator iter = map.begin(); iter != map.end(); iter++){}

unordered_map<int, string>::iterator it;

it -> first; or (*it).first; //the key value

it -> second; or (*it).second; //the mapped value

(*it); //the element value(type: pair\<int, string\>)

##access
map.find(6);

map.end();

map.begin();