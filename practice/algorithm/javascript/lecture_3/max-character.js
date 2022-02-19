const max_char = str => {
    const words = {};
    for (let ch of str)
        words[ch] = words[ch] + 1 || 1;

    let counter = 0;
    let most = null;

    for (let ch in words) {
        if ( words[ch]> counter) {
            counter = words[ch];
            most = ch;
        }
    }
    return most;
};
console.log(max_char("character"));