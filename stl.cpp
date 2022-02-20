//vector - dynamic size array
vector<int> v(10);     //10 elements all 0
vector<char> v(10, 'h');    //10 elements all h 
//can erase elements from end of the structure
v.clear(); //clears all elements
for (auto i = v.begin(); i != v.end(); i++){
    cout << *i << "\n"; 
}
for (auto i : v){
    cout << i << endl; 
}

//deque can be pushed and popped from both sides
//stack is essentially just vector without insert and erase funtions
//queue -- pushed from the back, popped from the front

sort();   //function
// mixture of 3 algorithms - O(nlogn) 
// quick sort, insertion sort and heap sort --- most optimized 
sort (a, a + n); 
sort (v.begin(), v.end());
/*   why is this not working ? 
sort (v.begin(), v.end()); 
for (auto i : v) {
    cout << v[i] << "\n"; 
}
*/

// PAIR
// composite data type
pair<int, int> p; 
pair<int, string> p; 
pair<int, pair<int, string>> p; 
pair<vector<int>, string> p; 
pair<string, int> p = {"hello", 6}; 
cout << p.first << " " << p.second << "\n"; 
//returning multiple values from a function
pair<int, int> f(){
    return {3, 4}; 
}

// Sorting arrays/vectors of Pairs
pair<int, int> p[5]; 
p[0] = {1, 2}; p[1] = {5, 2}; p[2] = {8, 1}; p[3] = {1,0}; p[4] = {3, 4}; 
sort(p, p + 5);     //sort first happens only for first element and then to second element.  
for (auto i = 0; i < 5; i++){
    cout << p[i].first << " " << p[i].second << "\n";
}

vector<pair<int, string>> v;       //!! 
v.push_back({5, "Ramana"}); 

//SET
//set is a container which stores unique copy of every element in sorted order 
set<int> s; set<string> s; 
s.insert(x);        //insert element x 
s.erase(x); //remove element
s.count(x); //returns 0 or 1 if element is present or not
s.clear();      //clears all elements
s.size();
//cannot access using s[i]; 
s.find(x); //returns iterator with value x, returns s.end() if not found
set<int> y = {3, 2, 2, 1, 7, 8}; 
for (auto i : y){
    cout << i << endl; 
}
 
//MAP
//special arrays in which indices can be anything. Python like dictionaries. 
map<keydatatype, valuedatatype> m; 
map<string, int> m; 
m["hello"] = 50; 
m["world"] = 12; 
cout << m["hello"] << " " << m["world"]; //50 12            //!!!
//mostly used for counting frequency of various objects
m[-234] = 49;       //negative integers are also valid as keys 
map <int, int> freq; 
freq[10]++; 
freq[10]++; 
freq[10]++; 
freq[4]++; 
cout << freq[10] << " " << freq[4]; 
//other functions processed exactly like sets. 