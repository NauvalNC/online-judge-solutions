using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

// Problem: https://www.hackerrank.com/challenges/crush/problem?h_r=profile
class Result
{
    public static long arrayManipulation(int n, List<List<int>> queries)
    {
        long max = 0;
        int qLen = queries.Count;
        List<int> res = new List<int>();
        for (int i = 0; i <= n; i++) res.Add(0);
        
        int a, b, k;
        for (int i = 0; i < qLen; i++) {
            a = queries[i][0];
            b = queries[i][1];
            k = queries[i][2];
            
            res[a] += k;
            if ((b+1) <= n) res[b+1] -= k;
        }
        
        long temp = 0;
        for (int i = 1; i <= n; i++) {
            temp += res[i];
            if (temp > max) max = temp;
        }
        
        return max;
    }
}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        string[] firstMultipleInput = Console.ReadLine().TrimEnd().Split(' ');

        int n = Convert.ToInt32(firstMultipleInput[0]);

        int m = Convert.ToInt32(firstMultipleInput[1]);

        List<List<int>> queries = new List<List<int>>();

        for (int i = 0; i < m; i++)
        {
            queries.Add(Console.ReadLine().TrimEnd().Split(' ').ToList().Select(queriesTemp => Convert.ToInt32(queriesTemp)).ToList());
        }

        long result = Result.arrayManipulation(n, queries);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
