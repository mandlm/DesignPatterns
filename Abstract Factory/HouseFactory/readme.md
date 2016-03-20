This project uses an abstract factory (HouseFactory) which specifies an interface to create 
abstract house objects (House) and provides two concrete factories (BungalowFactory and 
BlockOfFlatsFactory) which in turn create the concrete products (Bungalow and BlockOfFlats).

The client is a command line interface which lets the user choose between the two types of
houses. Then it instantiates the appropriate factory and uses it to create the corresponding
type of house.