// Ejemplo en C++ de conexion con MongoDB

// Std
#include <cstdint>
#include <iostream>
#include <vector>
// mongocxx
#include <mongocxx/client.hpp>
#include <mongocxx/stdx.hpp>
#include <mongocxx/uri.hpp>
#include <mongocxx/instance.hpp>
#include <bsoncxx/json.hpp>
// bson
#include <bsoncxx/builder/stream/helpers.hpp>
#include <bsoncxx/builder/stream/document.hpp>
#include <bsoncxx/builder/stream/array.hpp>


using bsoncxx::builder::stream::close_array;
using bsoncxx::builder::stream::close_document;
using bsoncxx::builder::stream::document;
using bsoncxx::builder::stream::finalize;
using bsoncxx::builder::stream::open_array;
using bsoncxx::builder::stream::open_document;

int
main(int argc, char* argv[])
{
    mongocxx::instance instance{}; // This should be done only once.
mongocxx::client client{mongocxx::uri{}};


}