using System;
class program
{
    static void Main()
    {
        bool flag = true;
        int L=0,R=0, n = Convert.ToInt32(Console.ReadLine());
        long[] arr=new long[n];
        string[] str=Console.ReadLine().Split(' ');
        for(int i = 0; i < n; i++)
        {
            arr[i] = Convert.ToInt64(str[i]);
        }
        for(int i = 0; i < arr.Length-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                L = i;
                break;
            }
        }
        for(int i= arr.Length-1; i>0; i--)
        {
            if (arr[i] < arr[i-1])
            {
                R = i;
                break;
            }
        }
        Array.Reverse(arr,L,R-L+1);
        // foreach(int i in arr)
        //   Console.WriteLine(i);
        for(int i= 0; i < arr.Length-1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            Console.WriteLine("yes");
            Console.WriteLine($"{L+1} {R+1}");
        }
        else
            Console.WriteLine("no");
    }
}