/* eslint-disable no-unused-vars */
import React from 'react'
import { useState } from 'react'
import TextField from "@material-ui/core/TextField"
import Button from "@material-ui/core/Button"
import { withStyles } from "@material-ui/core/styles";
export default function Text() {

    const [text,setText]=useState('Write here');
    const upper=()=>
    {
        const newText=text.toUpperCase();
        console.log(newText);
setText(newText);
    }
   
    const clear=()=>
    {
       setText("");
    }
    const lower=()=>
    {
        const newText=text.toLowerCase();
        console.log(newText);
setText(newText);
    }
    const update=(event)=>
    {
// eslint-disable-next-line no-restricted-globals
const x1=event.target.value;
setText(x1);
    }
    // setText('Hello');
    return (
<>
        <div id="centre">
          
<TextField id="text1" fullWidth multiline value={text} size="small" variant="standard"  onChange={update}/>
<Button className="btn" onClick={upper}>UpperCase</Button>
<Button className="btn" onClick={lower}>LowerCase</Button>
<Button className="btn" onClick={clear}>Clear</Button>
        </div>
        <div className="extra">You have typed {text.length} characters </div>
        
        </>
    )
}
