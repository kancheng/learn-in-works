
const rev1 = dim => {
    for (let i = 0; i < dim.length / 2; i++) {
        const temp = dim[i];
        dim[i] = dim[dim.length - 1 - i];
        dim[dim.length - 1 - i] = temp;
    }
    return dim;
};

const rev2 = dim => {
    for (let i = 0; i < dim.length / 2; i++) {
        [dim[i], dim[dim.length - 1 - i]] = [
            dim[dim.length - 1 - i],
            dim[i]
        ];
    }
  return dim;
};


console.log("['a', 'e', 'i', 'o', 'u'] - Reverse Array", rev1(['a', 'e', 'i', 'o', 'u']));

console.log("[ 2, 4, 6, 8, 10] - Reverse Array", rev2([ 2, 4, 6, 8, 10]));
