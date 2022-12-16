import React, { useEffect, useState } from 'react'

const bajaj = () => {
    const [data, setData] = useState([]);

    useEffect(async() => {
        
        const response =  await fetch('https://hiring.bajajfinservhealth.in/api/renderM')

        const json = await response.json();
        setData(json);

        
    }, []);
  return (
    <div className = "App">
 			<h1> Fetch data from an api in react </h1> {
 				data?.map((item) => (
 				<ol>
 					User_Name: { item.login }
 					</ol>
 				))
 			}
 		</div>
  )
}


export default bajaj