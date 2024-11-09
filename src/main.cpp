#include <iostream>
#include <lab.hpp>

int main(){
    std::string song_text = //All star - Smash Mouth
R"(
Somebody once told me
The world is gonna roll me
I ain't the sharpest tool in the shed
She was looking kind of dumb
With her finger and her thumb
In the shape of an "L" on her forehead

Well, the years start coming
And they don't stop coming
Fed to the rules and I hit the ground running
Didn't make sense not to live for fun
Your brain gets smart, but your head gets dumb
)";

    {
        std::vector<int> vt = {1,2,3,4,5};
        auto it = Find(vt.begin(),vt.end(),2);
        std::cout << *it << std::endl;
    }
    {
        std::vector<int> v = {1, 2, 3, 4, 5};
        std::vector<int>::iterator it = findInSorted(v.begin(), v.end(), 2);
        std::cout << *it << std::endl;
    }
    {
        int words = wordsCounter("Hello World");
        std::cout << words << std::endl;
    }
    {
        auto words_map = wordsMapCounter(song_text);
        for(auto [key, val] : words_map){
            std::cout << key << ": " << val << std::endl;
        }
        for(auto word : uniqueWords(song_text)){
            std::cout << word << std::endl;
        }
        std::cout << diffWordsCounter(song_text) << std::endl;
    }
    {
        std::list<int> nums = {1, 5, 4, -3};
        reverseNum(nums);
        for(auto i : nums){
            std::cout << i << " ";
        }
        std::cout << std::endl;

        std::vector vec(nums.begin(),nums.end());
        plusesDeleter(vec);
        for(auto i : vec){
            std::cout << i << " ";
        }
        std::cout << std::endl;

        Sort(nums);
        for(auto i : nums){
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    
}