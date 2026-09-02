import { useState } from 'react'
import './App.css'
import Counter from './counter'
import Card from './Card.jsx';

function App() {

  return (
    <div>
      {/*------------------------------------
       <Counter/> 
      --------------------------------------*/}
      
      <Card name="vishal mishra">
        {/* this is children of card component */}
       <h1>first software engineer of their family</h1>
        <p>trying to give their best</p>
      </Card>
    </div>
  )
}
export default App
