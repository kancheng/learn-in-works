var factorial = (i) => {
    if (i == 0) return 1
    else ans = i * factorial ( i-1);
    return ans;
}

show = factorial (8);
console.log(show);