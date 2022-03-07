string pigLatin(string word)
{
    if (word[0]== 'u' || word[0] == 'e' || word[0]== 'o' || word[0] =='a' || word[0]== 'i')
    {
        word.push_back('w');
        word.push_back('a');
        word.push_back('y');

    }
    else
    {
        char t =word[0];
        word.erase(0,1);
        word.push_back(t);
        word.push_back('a');
        word.push_back('y');

    }
    return word;
}
