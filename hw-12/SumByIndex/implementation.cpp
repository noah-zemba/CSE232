// WRITE YOUR CODE HERE
#include<vector>
#include<numeric>
using std::vector;

vector<int> SumByIndex(const vector<vector<int>> & v){
  if(v.size()==1)
    return v[0];
  else{
    int max_size = 0;
    for(vector<int>vector: v){
      int size = vector.size();
      if(size > max_size){
        max_size = size;
      }
    }
    vector<int> return_v(max_size);
    for(vector<int>vector: v){
      for(int i = 0; i < max_size; i++){
        try{
          return_v.at(i) += vector.at(i);
        }
        catch(...){
          continue;
        }
      }
    }
    return return_v;
  }
}