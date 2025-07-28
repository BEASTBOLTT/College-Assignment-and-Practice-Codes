function showcommentform() {  
        var data="Name:<input type='text' name='name'><br>Comment:<br><textarea rows='5' cols='80'></textarea><br><input type='submit' value='Post Comment'>";  
        document.getElementById('mylocation').innerHTML=data;  
        }  
        document.write("<h1 style=\"color:magenta\">");
        document.write("Welcome Javascript"+"Programming!</h1>");

        var name;
        var regNo;
        name=window.prompt("Please enter your name");
        regNo=window.prompt("Please enter your registration no. ");
        document.writeln("<h1>helllo,"+name+",Welcome to Javascript</h1>");
        document.writeln("<h1>Your registration no. is :"+regNo)