var maxprofit = (prices) => {
	let low = prices[0] < prices[1]? prices[0]:prices[1],
		high = prices[0] < prices[1]? prices[1]:prices[2];
	let maxprofit = high - low;
	let temp = low;

	for (let index = 2; index < prices.length; index++) {
		const sellPrice = prices[index];

		if (low > sellPrice) temp = prices[index];
		else {
			const profit = sellPrice - low;
			if (profit > maxprofit)
				(maxprofit = profit),
				(high = sellPrice),
				(low = temp);
		}
	}
	return [low, high];
}

console.log("產生最大利潤的最小買入跟最大賣出價格 : ");
console.log(maxprofit([ 24, 27, 32, 36, 45]));