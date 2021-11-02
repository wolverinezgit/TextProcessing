import React from 'react'
import PropTypes from 'prop-types'
export default function Navbar(props) {
    return (
        <div>
            Hello {props.name} who reads in {props.class} I am a navbar 
        </div>
    )
}
Navbar.propTypes={
name:PropTypes.string,
class:PropTypes.string
}