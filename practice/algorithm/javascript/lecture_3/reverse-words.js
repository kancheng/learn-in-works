const change = str => {
    const answer = [];

    str.split(" ").forEach(
        word => {
            let temp = "";
            for (let i = word.length - 1; i >= 0; i--) {
                temp += word[i];
            }
            answer.push(temp);
        }
    );
    return answer.join(" ");
};

text = "The greatest test of courage on earth is to bear defeat without losing heart.";
console.log("原句 : ");
console.log(text);
console.log("反轉 : ");
console.log(change(text));