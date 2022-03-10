const isPalindrome = str =>
    str
        .split("")
        .every((ch, index) => ch === str[str.length - 1 - index]);

console.log("判斷是否為迴文",isPalindrome("PKU|UKP"));