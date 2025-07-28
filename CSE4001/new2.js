var flag=true;  
    function commentform(){  
        var cform=<form action='Comment'>Enter Name:<input type='text' name='name'/><br/> Enter Email:<input type='email' name='email'/>Enter Comment:<br/>  
        <textarea rows= '5' cols='70'> </textarea>
        <input type='submit' value='Post Comment'/>
        </form>
        if(flag){  
        document.getElementById("mylocation").innerHTML=cform;  
        flag=false;  
        }
        else{  
        document.getElementById("mylocation").innerHTML="";  
        flag=true;  
        }
    }