
using System;

public class Solution
{
    public int[] FindArray(int[] prefixXorFromOriginalInput)
    {
        int[] originalInput = new int[prefixXorFromOriginalInput.Length];
        originalInput[0] = prefixXorFromOriginalInput[0];

        for (int i = 1; i < prefixXorFromOriginalInput.Length; ++i)
        {
            originalInput[i] = prefixXorFromOriginalInput[i - 1] ^ prefixXorFromOriginalInput[i];
        }

        return originalInput;
    }
}
