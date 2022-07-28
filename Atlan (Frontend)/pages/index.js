import React, { useState } from 'react';
import Editor from '../components/Editor';
import FilterData from '../components/FilterData';
import Head from 'next/head';

function Index() {

  const [query, setQuery] = useState(1);
  const [ownQno, setOwnQno] = useState('');
  const [data, setData] = useState('');
  const [ showEmployees, setShowEmployees ] = useState(false);

  const toggle = (data) => {
    setShowEmployees(data);
    setQuery(1);
  }

  const dataPass = (childData) => {
    setQuery(childData.value);
    setData(childData.label);
  }

  const qno = (qno) => {
    setOwnQno(qno);
  }

  return (
    <>
      <Head>
        <meta charset="utf-8" />
        <meta name="viewport" content="width=device-width, initial-scale=1" />
        <meta name="theme-color" content="#000000" />
        {/* fonts */}
        <link rel="preconnect" href="https://fonts.googleapis.com" />
        <link rel="preconnect" href="https://fonts.gstatic.com" crossOrigin />
        <link href="https://fonts.googleapis.com/css2?family=Open+Sans:wght@300;400;500;600;700;800&display=swap" rel="stylesheet" />

        {/* Primary Meta Tags */}
        <title>SQL Editor Atlan</title>
        <meta name="title" content="SQL Editor Atlan"/>
        <meta name="description" content="SQL Editor Atlan - Frontend project giving by atlan for evaluation"/>
        <meta name="author" content="Ankit Raj" />
        <meta name="keywords" content="Editor, SQL, Atlan, Developers, Query"/>

        {/* Open Graph / Facebook */}
        <meta property="og:type" content="website"/>
        <meta property="og:url" content="https://sql-editor-atlan.vercel.app/"/>
        <meta property="og:title" content="SQL Editor Atlan"/>
        <meta property="og:description" content="SQL Editor Atlan"/>
        <meta property="og:image" content="https://imgur.com/EOmjOeF.png"/>
        <meta property="og:site_name" content="SQL Editor Atlan" />

        {/* Twitter */}
        <meta property="twitter:card" content="summary_large_image"/>
        <meta property="twitter:url" content="https://sql-editor-atlan.vercel.app/"/>
        <meta property="twitter:title" content="SQL Editor Atlan"/>
        <meta property="twitter:description" content="SQL Editor Atlan"/>
        <meta property="twitter:image" content="https://imgur.com/EOmjOeF.png"/>
        <meta name="twitter:site" content="https://sql-editor-atlan.vercel.app/" />
        <meta name="twitter:creator" content=" @AnkitRajCode" />
      </Head>
      <div>
        <Editor qno={qno} showEmployees={showEmployees} parentData={dataPass} show={toggle} />
      </div>

      <div>
        <FilterData qno={ownQno} showEmployees={showEmployees} showText={data} query={query}/>
      </div>

    </>
  );
}

export default Index;