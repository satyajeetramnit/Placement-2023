import React, {useState, useEffect} from 'react'

const display = () => {
    const [items, setItems] = useState([]);

useEffect(() => {
  const items = JSON.parse(localStorage.getItem('items'));
  if (items) {
   setItems(items);
  }
}, []);
  return (
    <div>
        <div>{items}</div>
    </div>
  )
}

export default display