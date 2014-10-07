Voter-Reg.-Checker
==================

A program to cross check a list of voters to see if they are registered or have voted.

                                     --List of possible URL's--
-Mark Chilton = https://www.ncsbe.gov/webapps/voter_search/default.aspx?lname=Chilton&lname_snd=False&fname=Mark&fname_snd=False&mname=&county=0&status=%27A%27,%27I%27&bdate=

-Quaker Harmon = https://www.ncsbe.gov/webapps/voter_search/default.aspx?lname=harmon&lname_snd=False&fname=Quaker&fname_snd=False&mname=&county=0&status=%27A%27,%27I%27&bdate=

-Andrew Chilton = https://www.ncsbe.gov/webapps/voter_search/default.aspx?lname=Chilton&lname_snd=False&fname=Andrew&fname_snd=False&mname=&county=0&status=%27A%27,%27I%27&bdate=

-John Smith = https://www.ncsbe.gov/webapps/voter_search/default.aspx?lname=Smith&lname_snd=False&fname=John&fname_snd=False&mname=&county=0&status=%27A%27,%27I%27&bdate=


https://www.ncsbe.gov/webapps/voter_search/default.aspx?lname=harmon&lname_snd=False&fname=Quaker&fname_snd=False&mname=&county=0&status=%27A%27,%27I%27&bdate=

https://www.ncsbe.gov/webapps/voter_search/default.aspx?lname=Chilton&lname_snd=False&fname=Mark&fname_snd=False&mname=&county=0&status=%27A%27,%27I%27&bdate=

https://www.ncsbe.gov/webapps/voter_search/default.aspx?lname=Chilton&lname_snd=False&fname=Andrew&fname_snd=False&mname=&county=0&status=%27A%27,%27I%27&bdate=

Takes the name and enters it into the URL template. Goes and downloads the HTML code. Parses the HTML and finds where the name is a tests if it has voted. If it has voted changes to or deleats the name.

-Requires no key imput.
-Requires parse as well as a cashe.
-Find a way to make sure it is the right person?

Way to download HTML code: http://curl.haxx.se/libcurl/c/simple.html
What does it return? Where does it return it to? Is it in the format of an HTML file or is it just a text doc?
