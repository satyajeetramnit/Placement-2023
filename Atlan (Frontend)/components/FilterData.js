import React, { useState } from 'react';
import OwnQuery from './OwnQuery';

function FilterData(props){

  const [ code, setCode ] = useState('');
  const [ qno, setQno ] = useState(0);
  
  const displayQuery = () => {
    if(code === 'select * from customers'){
        setQno(1);
    }
    else if(code === 'select * from customers where contactTitle= \'Owner\''){
        setQno(2);
    }
    else if(code === 'select * from customers where country= \'Mexico\''){
        setQno(3);
    }
    else if(code === 'select * from customers where contactTitle= \'Owner\' and city=\'Mexico D.F.\''){
        setQno(4);
    }
    else if(code === 'select * from customers where city=\'London\''){
        setQno(5);
    }
    else if(code === 'select * from customers where contactTitle= \'Owner\' or city=\'London\''){
        setQno(6);
    }
    else{
        setQno(7);
    }
  }
  const handleChange = (e) => {
    setCode(e.target.value);
  }

  const customers = [        
    {
      "customerID" : "1906534",
      "companyName" : "Atlan",
      "contactName" : "Ankit Raj",
      "contactTitle" : "Web Developer",
      "address" :  "Lower River Street",
      "city" : "London",
      "postalCode" : "854301",
      "country" : "India",
      "phone" : "9431231375",
    },
    {
      "customerID" : "1906535",
      "companyName" : "Google",
      "contactName" : "Tejash Pradhan",
      "contactTitle" : "React Developer",
      "address" :  "Tim Berguve road",
      "city" : "Berguvsvägen",
      "postalCode" : "854345",
      "country" : "Sweden",
      "phone" : "9921123465",
    },
    {
      "customerID" : "1906536",
      "companyName" : "Microsoft",
      "contactName" : "Aryan Raj",
      "contactTitle" : "App Developer",
      "address" :  "57. Forsterstr",
      "city" : "Berguvsvägen",
      "postalCode" : "554345",
      "country" : "Mexico",
      "phone" : "9084603488",
    },
    {
      "customerID" : "1906537",
      "companyName" : "Netflix",
      "contactName" : "Shubham Singh",
      "contactTitle" : "Owner",
      "address" :  "Blondesddsl père",
      "city" : "Strasbourg",
      "postalCode" : "670003",
      "country" : "Mexico",
      "phone" : "7784603488",
    },
    {
      "customerID" : "1906552",
      "companyName" : "Amazon",
      "contactName" : "Aman Raza",
      "contactTitle" : "Owner",
      "address" :  "67C Araquil",
      "city" : "Madrid",
      "postalCode" : "258023",
      "country" : "Russia",
      "phone" : "8877846034",
    },
    {
      "customerID" : "1906538",
      "companyName" : "Jio pvt. Ltd.",
      "contactName" : "Anupam Singh",
      "contactTitle" : "co-founder",
      "address" :  "Araquil Marseille",
      "city" : "UAE",
      "postalCode" : "600700",
      "country" : "Dubai",
      "phone" : "6200846000",
    },
    {
      "customerID" : "1906539",
      "companyName" : "Nextgenui",
      "contactName" : "Ashish Mishra",
      "contactTitle" : "Employee",
      "address" :  "Quilwe Trujillo",
      "city" : "México D.F.",
      "postalCode" : "256700",
      "country" : "Mexico",
      "phone" : "7722485690",
    },
    {
      "customerID" : "1906540",
      "companyName" : "Code Dynamics",
      "contactName" : "Satyajeet Ramnit",
      "contactTitle" : "Owner",
      "address" :  "Quilwe Paredados",
      "city" : "México D.F.",
      "postalCode" : "256701",
      "country" : "Brazil",
      "phone" : "2248569012",
    },
    {
      "customerID" : "1906541",
      "companyName" : "Ocean pvt.",
      "contactName" : "Shiv shina",
      "contactTitle" : "Investor",
      "address" :  "Nichols Lane",
      "city" : "Hartford",
      "postalCode" : "500047",
      "country" : "United Kingdom",
      "phone" : "4856901240",
    },
    ]

  const employees = 
  [
    {
      "productID" : 1,
      "supplierID" : 34,
      "quantityPerUnit" : "17 - 500g pkgs.",
      "unitPrice" : 38,
      "unitsInStock" : 53,
      "reorderLevel" : 0,
      "discontinued" : "false",
      "name" : "Kissan Tomato Ketchup",
    },
    {
      "productID" : 2,
      "supplierID" : 61,
      "quantityPerUnit" : "36 Pieces",
      "unitPrice" : 40,
      "unitsInStock" : 0,
      "reorderLevel" : 0,
      "discontinued" : "true",
      "name" : "Paper Clip"
    },
    {
      "productID" : 3,
      "supplierID" : 12,
      "quantityPerUnit" : "24 Big pack",
      "unitPrice" : 25,
      "unitsInStock" : 120,
      "reorderLevel" : 25,
      "discontinued" : "false",
      "name" : "Bread"
    },
    {
      "productID" : 4,
      "supplierID" : 95,
      "quantityPerUnit" : "115 units",
      "unitPrice" : 30,
      "unitsInStock" : 15,
      "reorderLevel" : 10,
      "discontinued" : "false",
      "name" : "mobile"
    },
    {
      "productID" : 5,
      "supplierID" : 64,
      "quantityPerUnit" : "12 - 1 kg pkgs.",
      "unitPrice" : 35,
      "unitsInStock" : 6,
      "reorderLevel" : 0,
      "discontinued" : "false",
      "name" : " Cranberry Sauce"
    },
    {
      "productID" : 6,
      "supplierID" : 77,
      "quantityPerUnit" : "56 pieces",
      "unitPrice" : 97,
      "unitsInStock" : 29,
      "reorderLevel" : 0,
      "discontinued" : "true",
      "name" : "Paper Clip"
    },
    {
      "productID" : 7,
      "supplierID" : 4,
      "quantityPerUnit" : "24 units",
      "unitPrice" : 31,
      "unitsInStock" : 31,
      "reorderLevel" : 0,
      "discontinued" : "false",
      "name" : "Mouse"
    },
    {
      "productID" : 8,
      "supplierID" : 87, 
      "quantityPerUnit" : "48 - 550 ml bottles",
      "unitPrice" : 99,
      "unitsInStock" : 13,
      "reorderLevel" : 25,
      "discontinued" : "false",
      "name" : "Syrup"
    },
    {
      "productID" : 9,
      "supplierID" : 95,
      "quantityPerUnit" : "75 units",
      "unitPrice" : 21,
      "unitsInStock" : 22,
      "reorderLevel" : 30,
      "discontinued" : "false",
      "name" : "Toy Car"
    },
    {
      "productID" : 10,
      "supplierID" : 22,
      "quantityPerUnit" : "75 kg",
      "unitPrice" : 22,
      "unitsInStock" : 86,
      "reorderLevel" : 0,
      "discontinued" : "false",
      "name" : "Mangoes"
    },
  ]

  if(!props.showEmployees){
    var data = customers
    var rows = []

    if(props.query === 1){
      rows = customers
    }
    else if(props.query === 2){
      for(let i =0; i<data.length; i++){
        if(data[i].contactTitle === 'Owner'){
          rows.push(data[i])
        }
      }
    }
    else if(props.query === 3){
      for(let i =0; i<data.length; i++){
        if(data[i].country === 'Mexico'){
          rows.push(data[i])
        }
      }
    }
    else if(props.query === 4){
      for(let i =0; i<data.length; i++){
        if(data[i].contactTitle === 'Owner' && data[i].city === 'México D.F.'){
          rows.push(data[i])
        }
      }
    }
    else if(props.query === 5){
      for(let i =0; i<data.length; i++){
          if(data[i].city === 'London'){
            rows.push(data[i])
          }
      }
    }
    else if(props.query === 6){
      for(let i =0; i<data.length; i++){
        if(data[i].contactTitle === 'Owner' || data[i].city === 'London'){
          rows.push(data[i])
        }
      }
    }
  }
  else{
    var data = employees
    var rows = []

    if(props.query === 1){
      rows = employees
    }
    else if(props.query === 2){
      for(let i =0; i<data.length; i++){
        if(data[i].name === 'Paper Clip'){
          rows.push(data[i])
        }
      }
    }
    else if(props.query === 3){
      for(let i =0; i<data.length; i++){
        if(data[i].supplierID === 87){
          rows.push(data[i])
        }
      }
    }
  }

  return (
    <div>
      <div className='text-xl py-1 font-medium text-center bg-gray-600 text-white'>Below Result is from Query that you select from given options</div>
      <div className='flex justify-center items-center mt-10'>
        {!props.showEmployees ?
          <table className='md:table-fixed border-collapse text-xs'>
            <thead>
              <tr className='bg-slate-600 text-slate-50'>
                <th className='border border-l-slate-600 border-slate-50 text-center'>Customer ID</th>
                <th className='border border-slate-50 text-center '>Company Name</th>
                <th className='border border-slate-50 text-center '>Contact Name</th>
                <th className='border border-slate-50 text-center '>Contact Title</th>
                <th className='border border-slate-50 text-center '>Address</th>
                <th className='border border-slate-50 text-center '>City</th>
                <th className='border border-slate-50 text-center '>Postal Code</th>
                <th className='border border-slate-50 text-center '>Country</th>
                <th className='border border-slate-600 border-y-slate-50 text-center'>Phone</th>
              </tr>
            </thead>
            <tbody>
            {rows.map(row => (
              <tr key={row.customerID}>
                <td className='border border-slate-700 '>{row.customerID}</td>
                <td className='border border-slate-700 '>{row.companyName}</td>
                <td className='border border-slate-700 '>{row.contactName}</td>
                <td className='border border-slate-700 '>{row.contactTitle}</td>
                <td className='border border-slate-700 '>{row.address}</td>
                <td className='border border-slate-700 '>{row.city}</td>
                <td className='border border-slate-700 '>{row.postalCode}</td>
                <td className='border border-slate-700 '>{row.country}</td>
                <td className='border border-slate-700 '>{row.phone}</td>
              </tr>
            ))}
            </tbody>
          </table>
          :
          <table className='md:table-fixed border-collapse text-xs'>
            <thead>
              <tr className='bg-slate-600 text-slate-50'>
                <th className='border border-l-slate-600 border-slate-50 text-center'>Product ID</th>
                <th className='border border-slate-50 text-center '>Supplier ID</th>
                <th className='border border-slate-50 text-center '>Quantity/unit</th>
                <th className='border border-slate-50 text-center '>Unit Price</th>
                <th className='border border-slate-50 text-center '>Stock Left</th>
                <th className='border border-slate-50 text-center '>Reorder Level</th>
                <th className='border border-slate-50 text-center '>Discontinued</th>
                <th className='border border-slate-600 border-y-slate-50 text-center'>Product Name</th>
              </tr>
            </thead>
          <tbody>
            {rows.map(row => (
              <tr key={row.productID}>
                <td className='border border-slate-700 '>{row.productID}</td>
                <td className='border border-slate-700 '>{row.supplierID}</td>
                <td className='border border-slate-700 '>{row.quantityPerUnit}</td>
                <td className='border border-slate-700 '>{row.unitPrice}</td>
                <td className='border border-slate-700 '>{row.unitsInStock}</td>
                <td className='border border-slate-700 '>{row.reorderLevel}</td>
                <td className='border border-slate-700 '>{row.discontinued}</td>
                <td className='border border-slate-700 '>{row.name}</td>
              </tr>
            ))}
          </tbody>
        </table>
        }
      </div>
    <div className='text-xl mt-10 mb-5 py-1 font-medium text-center bg-gray-600 text-white'>Below Result is from Query that you put in Code Editor</div>
    {props.qno != 0 && <OwnQuery queryNo={props.qno} customers={customers} />}

  </div>
  );
}

export default FilterData
