const reverse1 = str =>
    str
        .split("")
        .reverse()
        .join("");

const reverse2 = str => {
    let result = "";
    for (let ch of str) result = ch + result;
    return result;
};

console.log(reverse1("abcdefg"));

console.log(reverse2("1234567"));