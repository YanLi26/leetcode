#vector
http://www.cplusplus.com/reference/vector/vector/

##initial
vector\<int\>vec;

##insert
1. vec.push_back(a); //insert element in tail
2. vec.insert(vec.begin()+i, a); //insert a behind i+1 element
3. s

##delete
1. vec.erase(vec.begin()+2); //delete the third element
2. vec.earse(vec.begin()+i, vec.end()+j); //delete[i, j-1]
3. vec.clear(); //delete all

##access
vector\<int\>::iterator it;
for(it = vec.begin(); it != vec.end(); it++){

cout << *it;

}

##size
vec.size()
