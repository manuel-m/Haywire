#include "http_request.h"
#include "http_parser.h"
#include "http_server.h"

int http_request_on_message_begin(http_parser* parser)
{
    return 0;
}

int http_request_on_headers_complete(http_parser* parser)
{
    http_server_write_response(parser);    
    return 0;
}

int http_request_on_url(http_parser *parser, const char *at, size_t length)
{
	return 0;
}

int http_request_on_message_complete(http_parser* parser)
{
    return 0;
}