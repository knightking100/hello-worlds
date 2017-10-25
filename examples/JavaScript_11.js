const arr = ['hello', 'moon', 'farewell', 'world'];

const oddLengths = (arr) => {
  return arr.filter(el => el.length % 2 !== 0).join(' ');
};

console.log(oddLengths(arr));
