import React, { useState, useEffect } from 'react';
const App = () => {
  const [name, setName] = useState('World');
  useEffect(() => {
    document.title = `Hello, ${name}`;
  });
  return (
    <div className="App">
      <h1>Hello, {name}!</h1>
    </div>
  );
}
