var CharCode = new Array();
CharCode = ['72','101','108','108','111','32','87','111','114','108','100'];
word="";

CharCode.forEach(function(letter)
{
  word+= String.fromCharCode(letter);
});

console.log(word);
