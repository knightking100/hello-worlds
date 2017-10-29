function toProperCase(str)
{
    return str.replace(/\w\S*/g, function(txt){return txt.charAt(0).toUpperCase() + txt.substr(1).toLowerCase();});
}

var uncapitalized = 'hello world';
var properCase = toProperCase(uncapitalized);
console.log(properCase);
