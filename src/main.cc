
#include "main.h"

PARSER :: PARSER()
{
    connect = mysql_init(NULL);
    if ( !connect )
    {
        cout << "MySQL Initialization Failed";
    }   

    connect = mysql_real_connect(connect, SERVER, USER, PASSWORD, DATABASE, 0,NULL,0);
    
    if ( connect )
    {
        cout << "Connection Succeeded\n";
    }
    
    else
    {
        cout << "Connection Failed\n";
    }

}


void PARSER :: upload()
{
   Cgicc cgi;
   
   ofstream outFile;

   outFile.open("upload.ods");

   // get list of files to be uploaded
    const_file_iterator file = cgi.getFile("userfile");
   
    if(file != cgi.getFiles().end())
       {
            file->writeToStream(outFile);
            outFile.seekp(0, ios::end);
        
	    if (outFile.tellp() == 0)
            cout<<"\nThe File is empty, choose another one";
        
	    else
            cout << "File uploaded successfully\n";
        }
    else
        cout<<"Kindly choose a file";
        outFile.close();
        cout << "</body>\n";
        cout << "</html>\n";
}

void PARSER::  ConvertToCsv()
{
    system("libreoffice --headless --convert-to csv upload.ods");
}

/**
 *--------------------------------------------------------------------
 *       Class:  MySQL
 *      Method:  MySQL :: ShowTables()
 * Description:  Show tables in database
 *--------------------------------------------------------------------
 */

void PARSER :: InsertInDatabase()
{

    fstream fin;
    fin.open("upload.csv");

    int a[100],large, small;
    string temp,cn,sn,sc,query,srn,ern,ni;
   
    char c[20];

     while (fin)
      {  
        int i=-1,x=0;
 
	while(!x)
	{     
 	    getline(fin,temp,',');
		     
	    if(temp.compare("Class_Name")!=0)
		{
		        if (!temp.empty())
                        {strcpy(c, temp.c_str());
			 cn = string(c);
			}

		    getline(fin,temp,',');
		    if (!temp.empty())
			{strcpy(c, temp.c_str());
			 sn = string(c);
			}

		    getline(fin,temp,',');
		    if (!temp.empty())
                        {strcpy(c, temp.c_str());
			 sc = string(c);
			}

		    getline(fin,temp,'\n');
		    if (!temp.empty())
                       {
			    strcpy(c, temp.c_str());
			    srn = string(c);
		    	    i++;
		   	    a[i] = atoi(srn.c_str());
			}

		    else
			x=1;
		}
		
	    else
		getline(fin,temp,'\n');
	}

  
    for (int m=1;m<i ; m++ )
	{ 
	    for( int j=0; j<i-1; j++) 
		{ if(a[j] > a[j+1]) 
		    { 
			int tem; 
		        tem = a[j];
			a[j] = a[j+1]; 
			a[j+1] = tem;
		     } 
		}
	 } 

    small = a[0];
    large = a[i];
  
    ostringstream convert, convert1, nistring;
    convert << small;
    srn = convert.str(); 

    convert1 << large;
    ern = convert1.str();


    for (int z=0; z<=i; z++)
	{
	    if (a[z] != small)
	    while( small < a[z] )
	        {
		    nistring << small <<",";
		    small++;
		}
		small++;
	}

    ni = nistring.str();

    query = "insert into csv(Class_Name,Subject_Name,Subject_Code,Start_Roll_No";
    query += ",End_Roll_No,Not_Included)";
    query += "values(\"" + cn + "\", \""+ sn +"\",\""+ sc + "\" ,\"" +srn+ "\" , ";
    query += "\"" +ern+ "\" , \"" +ni + "\");";
    mysql_query (connect,query.c_str());

}

fin.close();
}

/**
 *--------------------------------------------------------------------
 *       Class:  MySQL
 *      Method:  MySQL :: ~MySQL()
 * Description:  Destructor of MySQL class for closing mysql
 *               connection
 *--------------------------------------------------------------------
 */

PARSER :: ~PARSER()
{
    mysql_close (connect);
}
