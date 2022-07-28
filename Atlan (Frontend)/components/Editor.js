import Image from 'next/image';
import Link from 'next/link';
import React, { useState } from 'react';

const Editor = (props) => {

    const [ showEmployees, setShowEmployees ] = useState(false);
    const [ submitQuery, setSubmitQuery ] = useState(0);
    const [ query, setQuery ] = useState('');
    const [ code, setCode ] = useState('');
    const [ qno, setQno ] = useState(0);

    const toggle = () => {
        setShowEmployees(true);
        props.show(true);
    }

    const toggle2 = () => {
        setShowEmployees(false);
        props.show(false);
    }

    const displayQuery = () => {
        if(code === 'select * from customers'){
            setQno(1);
            props.qno(1);
        }
        else if(code === 'select * from customers where contactTitle= \'Owner\''){
            setQno(2);
            props.qno(2);
        }
        else if(code === 'select * from customers where country= \'Mexico\''){
            setQno(3);
            props.qno(3);
        }
        else if(code === 'select * from customers where contactTitle= \'Owner\' and city=\'Mexico D.F.\''){
            setQno(4);
            props.qno(4);
        }
        else if(code === 'select * from customers where city=\'London\''){
            setQno(5);
            props.qno(5);
        }
        else if(code === 'select * from customers where contactTitle= \'Owner\' or city=\'London\''){
            setQno(6);
            props.qno(6);
        }
        else{
            setQno(7);
            props.qno(7);
        }
    }
    const handleChange = (e) => {
        setCode(e.target.value);
    }


    const handleSubmit = (e) => {
        e.preventDefault();
        setSubmitQuery(query);
    } 
    let queries;
    if(!props.showEmployees){
        queries = [
            {
             label : "select * from customers",
             value: 1
            },
            {
             label : "select * from customers where contactTitle= 'Owner'",
             value: 2
            },
            {
             label : "select * from customers where country= 'Mexico'",
             value: 3
            },
         ]
    } else{
        queries = [
            {
             label : "select * from products",
             value: 1
            },
            {
             label : "select * from products where productName= 'Paper Clip'",
             value: 2
            },
            {
             label : "select * from products where supplierID= 87",
             value: 3
            },
        ]
    }


    return (
        <div className='flex justify-between  border-b-4 border-gray-600'>
            {/* Toggle */}
            <div className='px-5 mt-2' >
                <Link href='/' className='w-full font-bold flex items-center justify-center border-2 py-1 px-3 border-sky-400'><span style={{color:'#2026d2'}}>SQL Editor</span></Link>
                <div className='mt-5 mb-2 font-bold uppercase tracking-widest'>Select Table</div>
                <div className='flex flex-col space-y-2 font-semibold'>
                    <div className='cursor-pointer text-center px-4 py-1 border bg-white hover:bg-slate-700 hover:text-white border-gray-400 hover:shadow-sm shadow-slate-300' onClick={toggle2}>Customers</div>
                    <div className='cursor-pointer text-center px-4 py-1 border bg-white hover:bg-slate-700 hover:text-white border-gray-400 hover:shadow-sm shadow-slate-300' onClick={toggle}>Products</div>
                </div>
            </div>

            <div className='border-2 border-slate-600'></div>

            {/* option selector */}
            <div className='w-[550px] mt-2'>
                <div className='mb-2 font-semibold font-montserrat text-xl text-center'>Select your query form here</div>
                <div className='overflow-y-scroll h-64 '>
                    {queries.map(query => (
                        <button className='w-full border flex items-center hover:bg-slate-300 bg-white border-slate-300 text-left py-2 px-5 my-1 font-medium rounded-full text-base truncate' key={query.value} onClick={() => {
                            setQuery(query.label);
                            setSubmitQuery(query.value);
                            props.parentData(query);
                        }}><Image src="/Images/play.svg" alt='play' width='18px' height='18px' /><span className='ml-2'>{query.label}</span></button>
                    ))}
                </div>
            </div>

            {/* input here */}
            <div className='w-[600px] flex flex-col pt-2 border-l-4 border-slate-600'>
                <div className='mb-2 font-semibold font-montserrat text-xl text-center'>Write your query here</div>
                <textarea className='h-56 bg-slate-700 text-slate-100 px-5 py-2 focus:outline-none' type='text' placeholder='select * from customer' onChange={handleChange}></textarea>
                <button className='bg-gray-600 text-white py-2 font-medium tracking-widest border-b border-b-slate-50' onClick={displayQuery}>Submit</button>
            </div>
        </div>
    )
}

export default Editor