
/**
 * @param {number[]} prefixXorFromOriginalInput
 * @return {number[]}
 */
var findArray = function (prefixXorFromOriginalInput) {

    const originalInput = new Array(prefixXorFromOriginalInput.length);
    originalInput[0] = prefixXorFromOriginalInput[0];

    for (let i = 1; i < prefixXorFromOriginalInput.length; ++i) {
        originalInput[i] = prefixXorFromOriginalInput[i - 1] ^ prefixXorFromOriginalInput[i];
    }

    return originalInput;
};
