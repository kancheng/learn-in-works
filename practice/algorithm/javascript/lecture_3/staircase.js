const draw = no => {
    let pictures = "";
    for (let row = 0; row < no; row++) {
    	str = "";
    	for (let column = 0; column < no; column++) {
    		str += column <= row ? "$" : " "; 
    	}
    	pictures += str + "\n";
    }
    return pictures;
};

console.log(draw(15));

