import Navbar from "./Navbar";
import Home from "./home";

function App() {
  // const title = "Welcome to the blog";
  // const likes = 50;
  // const link = "https://www.google.com";
  return (
    <div className="App">
      <Navbar></Navbar>
      <div className="content">
        <Home></Home>
        
        
        
        
        
        
        {/* <h1>{title}</h1>
        <p>Likes: {likes}</p>
        <p>10</p>
        <p>{"hello fsfs"}</p>
        <p>{[1, 2, 3, 4, 5]}</p>
        <p>{Math.random() * 10}</p> */}
        {/* <p>{{name:"John",age:}}</p> */}
        {/* <a href={link}>Google</a> */}
      </div>
    </div>
  );
}

export default App;
