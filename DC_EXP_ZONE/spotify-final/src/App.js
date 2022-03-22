import React, { useEffect, useState } from 'react';
import './App.css';
import Login from './Login';
import { getTokenfromUrl } from './spotify';
import SpotifyWebApi from 'spotify-web-api-js';
import Player from './Player';
import { useDataLayerValue } from './DataLayer';


const spotify = new SpotifyWebApi();

function App() {
  const [token, setToken] = useState(null);
  const [{ user }, dispatch] = useDataLayerValue();
  
  
  // run code based on a condition
  useEffect(() => {
    const hash = getTokenfromUrl();         // grab the token as soon as the login is finished and redirected back to our website
    window.location.hash = "";
    const _token = hash.access_token;

    if(_token){
      setToken(_token);

      spotify.setAccessToken(_token);     

      spotify.getMe().then(user => {
        dispatch({
          type:'SET_USER',
          user: user
        })
      })
    }
    
    console.log("I HAVE A TOKEN 👉", token); 
  }, []); 
  
  console.log('🙂', user);
  
  return (
    // BEM convention
    <div className="app">
      {
        token ? (
          <Player />
          // <h1>I am logged in</h1>
        ) : (
          <Login />
        )
      }
    </div>
  );
}

export default App;
