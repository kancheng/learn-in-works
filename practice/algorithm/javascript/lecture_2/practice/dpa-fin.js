var fib = (n) => {
    var output = new Array();
    if (n == 0) return 0;
    if (n == 1) return 1;
    else {
        output[0] = 0;
        output[1] = 1;
        for ( i = 2; i <= n; i++) {
            output[i] = output[i-1] + output[i-2];
        }
        return output[n];
    }
}

show = fib (8);
console.log(show);