
#include "header.h"
#include "database-detail.h"

class PARSER
{
    protected:
        /** MySQL connectivity Variables */
        MYSQL *connect;
        MYSQL_RES *res_set;
        MYSQL_ROW row;

        unsigned int i;

    public:
        /** PARSER Constructor */
        PARSER();

        /** Functions**/
        void InsertInDatabase();
        void ConvertToCsv();
        void CheckFormat();
	    void upload();

        /** Destructor */
        ~PARSER();
};
