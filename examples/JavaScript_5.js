const reCamelCase = /[a-zA-Z][a-z]+/g;
const pascalCase = word => word[0].toUpperCase() + word.substr(1, word.length)
const humanize = text => text.match(reCamelCase).map(pascalCase).join(' ')

function helloWorld() {}

console.log(humanize(helloWorld.name))
