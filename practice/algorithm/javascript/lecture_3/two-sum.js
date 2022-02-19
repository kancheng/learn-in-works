const twototal = (num,total) => {
	const subpair = [];
	const ans = [];

	for (let a of num) {
		const b = total - a;
		if (ans.indexOf(b) !== -1) {
			subpair.push([a, b]);
		}
		ans.push(a);
	}
	return subpair;
};

test1 = [ 1, 2, 2, 3, 4];
test2 = [ 2, 3, 5, 1, 5, 1, 3, 4];
key1 = 4;
key2 = 6

console.log("The raw data (1): The key is ", key1);
console.log(test1);
console.log(twototal(test1, key1));

console.log("The raw data (2): The key is ", key2);
console.log(test2);
console.log(twototal(test2, key2));