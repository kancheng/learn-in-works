const compare = str => {
    const table = {};

    for (let char of str.replace(/\W/g, "").toLowerCase())
        table[char] = table[char] + 1 || 1;
    return table;
};

const anagrams = ( strA, strB) => {
    const charA = compare(strA);
    const charB = compare(strB);

    if (Object.keys(charA).length !== Object.keys(charB).length)
        return false;

    for (let char in charA)
        if (charA[char] !== charB[char]) return false;

    return true;
}

console.log(anagrams( "play", "play"));
console.log(anagrams( "happy", "thank"));