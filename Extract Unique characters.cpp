/*
PROBLEM:
Given a string, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same.
Input format :
String S
Output format :
Output String
Constraints :
1 <= Length of S <= 50000
Sample Input 1 :
ababacd
Sample Output 1 :
abcd
Sample Input 2 :
abcde
Sample Output 2 :
abcde

CODE:
*/
    #include <bits/stdc++.h>
char* uniqueChar(char *str){
char *ch=new char[100];
    int j=0;
    unordered_map<char,bool> m;
    for(int i=0;str[i]!='\0';i++)
    {
        if(m.count(str[i])>0)
            continue;
        else
        {
            ch[j] = str[i];
            j++;
            m[str[i]]=true;
        }
        
    }
    return ch;


}
