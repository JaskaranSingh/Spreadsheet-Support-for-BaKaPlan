 
#include "main.h"

int main(void)
{
     cout<<"Content-type:text/html\r\n\r\n";
   cout << "<html>\n";
   cout << "<head>\n";
   cout << "<title>File Upload in CGI</title>\n";
   cout << "</head>\n";
   cout << "<body>\n";

    PARSER Parser;

    Parser.upload();
  	Parser.ConvertToCsv();
    Parser.CheckFormat();
    //Parser.InsertInDatabase();

    return 0;
}
