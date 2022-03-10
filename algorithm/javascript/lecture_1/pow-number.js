var Pow = (x, y) => {
    let p = 1;
    for (i = 0; i < y ; i++) {
        p *= x;
    }
    return p;
    // X ^ Y
}

show = Pow (3,2);
console.log(show);