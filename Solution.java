
public class Solution {

    public int[] findArray(int[] prefixXorFromOriginalInput) {

        int[] originalInput = new int[prefixXorFromOriginalInput.length];
        originalInput[0] = prefixXorFromOriginalInput[0];

        for (int i = 1; i < prefixXorFromOriginalInput.length; ++i) {
            originalInput[i] = prefixXorFromOriginalInput[i - 1] ^ prefixXorFromOriginalInput[i];
        }

        return originalInput;
    }
}
