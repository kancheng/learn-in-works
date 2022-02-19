const pyramid = no => {
    let pictures = "";
    const mid = parseInt((2 * no - 1) / 2);

    for (let row = 0; row < no; row++) {
        let level = "";
        for (let column = 0; column < 2 * no - 1; column++){
            level += (mid - row <= column && column <= mid + row) ? "$" : " ";
        }
        pictures += level + "\n";
    }
    return pictures;
};
console.log(pyramid(15));