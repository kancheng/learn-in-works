const bigletter = sentence => {
    const words = [];
    for (let word of sentence.split(" "))
        words.push(word[0].toUpperCase() + word.slice(1));

    return words.join(" ");
};

text = "Genius is an infinite capacity for taking pains.";
console.log("原句 : ");
console.log(text);
console.log("首字大寫 : ");
console.log(bigletter(text));