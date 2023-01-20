#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/socket.h>
#include <sys/types.h>


int main() {
    FILE *html_data;
    html_data  = fopen("index.html","r");

    char response_data[1024];
    fgets(response_data,1024,html_data);

    char http_header[2048] = "HTTP/1.1 200 OK\r\n\n";



    return 0;
}