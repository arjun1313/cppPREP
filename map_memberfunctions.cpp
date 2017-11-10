#include <iostream>
#include <map>

using namespace std;

int main ()
{
  map<int,int> m{{1,2} , {2,3} , {3,4} };

  m.insert( pair<int,int> (4,5));
  /* inserts a new entry of key = 4 and value = 5 in map m */

  /* make_pair() can also be used for creating a pair */
  m.insert( make_pair(5, 6));
  /* inserts a new entry of key = 5 and value = 6 */


  map::iterator i , j;
  i = m.find(2);    // points to entry having key =2
  j = m.find(5);    // points to entry having key =5

  map<int,int> new_m;

  new_m.insert(i,j);
   /* insert all the entries which are pointed
     by iterator i to iterator j*/

  m.insert( make_pair(3,6));
   // do not insert the pair as map m already contain key = 3 */

  m.insert_or_assign( make_pair(3,6));  // assign value = 6 to key =3
}

/*
begin() – Returns an iterator to the first element in the map
end() – Returns an iterator to the theoretical element that follows last element in the map
size() – Returns the number of elements in the map
max_size() – Returns the maximum number of elements that the map can hold
empty() – Returns whether the map is empty
pair insert(keyvalue,mapvalue) – Adds a new element to the map
   eg:-
     m.insert(pair <int, int> (key,value));
erase(iterator position) – Removes the element at the position pointed by the iterator
   eg:-
    m.erase(m.find(key));
    (or)
    m.erase(key);
    (or)
    m.erase(m.find(key),m.find(key1)) or m.erase(m.find(key),m.end()) or m.erase(m.begin()m.find(key))
    **** remember above erases [m.find(key),m.find(key1))


clear() – Removes all the elements from the map
     *** don't foget to do it ***
key_comp() / value_comp() – Returns the object that determines how the elements in the map are ordered (‘<' by default)
find(const g) – Returns an iterator to the element with key value ‘g’ in the map if found, else returns the iterator to end
    eg:-
    m.find(key);
count(const g) – Returns the number of matches to element with key value ‘g’ in the map
lower_bound(const g) – Returns an iterator to the first element that is equivalent to mapped value with key value ‘g’
points to element with key value ‘g’ in the map

upper_bound(const g) – Returns an iterator to the first element that is equivalent to mapped value with key value ‘g’
points to element after the element with key value ‘g’ in the map

*/
