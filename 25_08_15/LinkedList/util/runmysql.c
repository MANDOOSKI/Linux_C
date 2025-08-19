#include <stdio.h>
#include <stdlib.h>
#include <mysql/mysql.h>
#include "db.h"

int run_mysql(){
	MYSQL* conn;
	MYSQL_RES *res;
	MYSQL_ROW row;

	const char* server = "localhost";
	const char* user = "root";
	const char* password = "root1";
	const char* database = "testdb";

	conn = mysql_init(NULL);

	if(conn == NULL){
		fprintf(stderr, "mysql_init() failed\n");
		exit(EXIT_FAILURE);
	}

	if(mysql_real_connect(conn, server, user, password, database, 0, NULL, 0) == NULL){
		fprintf(stderr, "mysql_real_connect() filed\nError: %s\n", mysql_error(conn));
		mysql_close(conn);
		exit(EXIT_FAILURE);
	}

	if(mysql_query(conn, "SELECT * FROM product")){
		fprintf(stderr, "mysql_stor_result() failed. Error: %s\n", mysql_error(conn));
		mysql_close(conn);
		exit(EXIT_FAILURE);
	}

	int num_fields = mysql_num_fields(res);
	while(row = mysql_fetch_row(res)){
		for(int i = 0; i < num_fields; ++i){
			printf("%s ", row[i] ? row[i] : "NULL");
		}
		printf("\n");
	}
	mysql_free_result(res);
	mysql_close(conn);

	return 0;
}
