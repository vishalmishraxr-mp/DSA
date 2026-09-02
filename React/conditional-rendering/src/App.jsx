import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from './assets/vite.svg'
import heroImg from './assets/hero.png'
import './App.css'
import LoginBtn from './loginBtn'
import LogoutBtn from './logoutBtn'

function App() {
  const [loggedIn,setLoggedIn] = useState(true)


  return (
    <div>
      {loggedIn ? <LogoutBtn/> : <LoginBtn/>}
    </div>
  )
  // if(loggedIn){
  //   return (
  //     <LoginBtn/>
  //   )
  // }
  //   else{
  //     return (
  //       <LogoutBtn/>
  //     )

  //   }
  }

export default App
