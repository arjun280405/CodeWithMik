class Solution {
public:
    bool isVowel(char &ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' || ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return true;
        else return false;
    }
    string reverseVowels(string s) {
        //let solve by help of Two Pointer 
        //when i is not vowel so i++ and when j is not vowel so swap i and j andj-- else i++ j--
        int n=s.size();
        int i=0,j=n-1;
        while(i<j){
            if(!isVowel(s[i]))i++;
            else if(!isVowel(s[j]))j--;
            else{
                swap(s[i],s[j]);
                i++,j--;
            }
        }
        return s;
    }
};
