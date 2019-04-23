#include<iostream>
#include<vector>

using namespace std;

void insertIntoVector(vector<int> &vIn, int loc, int a);

int main() {
    vector<int> vectorInts;
    vector<int>::iterator it;
    cout<<"size of vector: "<<vectorInts.size()<<" elements\n";

    vectorInts.resize(5);
    cout<<"size of vector: "<<vectorInts.size()<<" elements\n";
    vectorInts.assign(3,4);

    vectorInts.push_back(23);

    cout<<"vector has following elements:\n";

    for(it = vectorInts.begin(); it!= vectorInts.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<"\n";

      //insert an element after the first element
  it  = vectorInts.begin() + 1;
  vectorInts.insert(it, -1);
  std::cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";
    
  //insert an element after the third element
  it  = vectorInts.begin();
  vectorInts.insert(it + 3, -2);
  std::cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  //insert an element after the third element
  it  = vectorInts.begin();
  vectorInts.insert(it + 5, -3);

  std::cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";
    cout<<"\n";
    cout<<"size of vector: "<<vectorInts.size()<<" elements\n";


    cout<<"\n**\n";
    insertIntoVector(vectorInts, 2, 2548);
    cout<<"\n**\n";
    std::cout<<"\n\nAfter the functional insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";
    cout<<"\n";
    cout<<"size of vector: "<<vectorInts.size()<<" elements\n";

   
  //insert an element after the first element
  it  = vectorInts.begin() + 1;
  vectorInts.emplace(it, -1);
  std::cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";
    
  //insert an element after the third element
  it  = vectorInts.begin();
  vectorInts.emplace(it + 3, -2);
  std::cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  //insert an element after the third element
  it  = vectorInts.begin();
  vectorInts.emplace(it + 5, -3);
  std::cout<<"\n\nAfter the insert\n";
for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

    return 0;
}


void insertIntoVector(vector<int> &vIn, int loc, int a) {
    vector<int>:: iterator iit;
    iit = vIn.begin();
    vIn.insert(iit+loc, a);

}