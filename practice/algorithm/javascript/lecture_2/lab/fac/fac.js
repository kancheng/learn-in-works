fac = 1;
const prompt = require('prompt-sync')();
const n = prompt ('Please enter n = ');
for (i = 0; i <= n; i++) {
    for ( j = i; j > 0; j--) {
        fac *= j; /* fac = fac * j */
    }
    console.log( i + '!=' + fac);
    fac = 1;
}