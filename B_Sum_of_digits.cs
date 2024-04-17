using System;
class program
{
    static void Main()
    {
        string s=Console.ReadLine();
        long temp = 0,ans=0;
        while (s.Length > 1)
        {
            temp = 0;
            ans++;
            for (int i = 0; i < s.Length; i++)
            {
                temp += s[i]-48;
            }
            s= Convert.ToString(temp);
        }
        Console.WriteLine(ans);
    }
}