import { useState, useEffect } from "react";
import BlogList from "./BlogList";

const Home = () => {
  //this "useState" is a hook
  const [blogs, setBlogs] = useState([
    { title: "My new website", body: "lorem ipsum...", author: "mario", id: 1 },
    { title: "Welcome party!", body: "lorem ipsum...", author: "yoshi", id: 2 },
    {
      title: "Web dev top tips",
      body: "lorem ipsum...",
      author: "mario",
      id: 3,
    },
  ]);

  const [name, setName] = useState("mario");

  const handelDelete = (id) => {
    const newBlogs = blogs.filter((blog) => blog.id !== id);
    //this filter doesnt change the original blogs data
    setBlogs(newBlogs);
    //this changes the state in the ui
  };

  //this is also a hook
  useEffect(() => {
    console.log("fsfsf");
  }, []); //this [] is a dependency array and when this is empty it only runs the hook function once when the ui is rendered for the first time

  // let name ="mario";

  //   const [name, setName] = useState("mario");
  //   const [age, setAge] = useState(20);

  //   const handelClick = () => {
  //     setName("jump");
  //     setAge(100);
  //     // name ="jump";

  //     console.log(name);
  //   };

  //   const againClick = (name,e) => {
  //     console.log("hello " + name,e.target);
  //   };

  return (
    <div className="home">
      {/* blogs={blogs}this is a prop  */}
      <BlogList blogs={blogs} title="All Blogs!" handelDelete={handelDelete} />
      {/* filter creates a new array */}
      <BlogList
        blogs={blogs.filter((blog) => blog.author === "mario")}
        title="Mario's. Blogs!"
        handelDelete={handelDelete}
      />

      <h2>{name}</h2>
      <button onClick={() => setName("jump")}>change name</button>
      <p>{name}</p>
      {/* <h2>Home Page</h2> */}
      {/* <p>
        {name} is {age} years old{" "}
      </p>
      <button onClick={handelClick}>Click me</button> */}
      {/* <button
        onClick={(e) => {
          againClick("aryaman",e);
        }}>
        Click me
      </button> */}
    </div>
  );
};

export default Home;
