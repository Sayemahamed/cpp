using System;
class program
{
    static void Main()
    {
        string[] str = Console.ReadLine().Split('|');
        string ans1, ans2, str2 = Console.ReadLine();
        ans1 = str[0];
        ans2 = str[1];
        while (str2.Length > 0)
        {
            if (ans1.Length > ans2.Length)
            {
                ans2 = ans2 + str2[0];
                str2=str2.Substring(1);
            }
            else
            {
                ans1 = str2[0] + ans1;
                str2 = str2.Substring(1);
            }
        }
        if (ans1.Length == ans2.Length)
            Console.WriteLine(ans1 + "|" + ans2);
        else
            Console.WriteLine("Impossible");
    }
}