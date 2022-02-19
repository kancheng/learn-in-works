const rev = integer =>
    Math.sign(integer)*parseInt(
        integer
        .toString()
        .split("")
        .reverse()
        .join("")
    );

console.log(rev(987654321));

console.log(rev(-980210000));