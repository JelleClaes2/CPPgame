# Weerwolven
## Basis
- [X] useful and correct class (explain why)
- [X] useful and correct abstraction (explain why)
- [X] useful and correct encapsulation (explain why)
- [X] useful and correct inheritance (explain why)
- [X] useful and correct polymorphism (explain why)
- [X] useful and correct object composition (explain why)
- [X] useful and correct base class
- [X] useful and correct abstract base class
- [X] useful and correct virtual function
- [X] no mistake in object-oriented programming

## Aanvullend
### Algemeen
- [X] clean main (i.e. nothing in the main that should be in a class)
- [X] no globals, but statics if needed
- [X] correct protections
- [X] maintainability by clean uniform code style and good function naming and/or comments everywhere
- [X] separate header files
- [X] one complete project that compiles and does not crash
- [ ] fully working project
- [X] sufficient git commits (+/- weekly)
- [X] correct files on git
- [X] working build manual as readme on GitHub (project must be possible to build from scratch on a clean PC)
### OOP
- [X] at least 2 default constructors 
```
Cupido():Burger("Cupido"){}//default constructor
Dief():Burger("Dief"){}//default constructor
```
- [X] at least 2 parameterized constructors
```
Cupido(std::string naam):Burger(naam){}//parameterized constructor
Dief(std::string naam):Burger(naam){}//parameterized constructor
```
- [X] at least 2 copy constructors
```
Burger(Burger &burger):Speler(burger.naam){ // coppy constructor
        this->setIsVermoord(burger.getIsVermoord());
        this->setBurgemeester(burger.getBurgemeester());
        this->setVerliefd(burger.getVerliefd());
    }
Weerwolf(Weerwolf &weerwolf): Speler(weerwolf.naam){}
```
- [X] at least 2 destructors
```
~Burger(){}//destructor
~Cupido(){}//destructor
```
- [X] member initialization in constructors (the stuff behind a colon)
```
Speler( std::string naam) : naam(naam) {}
```
- [X] constructor forwarding
```
Burger(std::string naam):Speler(naam){} //parameterized constructor
```
- [X] useful proven (dynamic) polymorphism
```
virtual void actieNacht(std::vector <Speler*> spelersVector)  =0;
```
- [X] useful usage of "this" (if the code does not work without it)
```
void Speler::setNaam(std::string naam){
    this->naam = naam;
}
```
- [X] useful member function
- [X] default values in function definition
```
void setBurgemeester(const bool burgemeester = 0);
```
- [X] useful member variabel
- [X] useful getters and setters for member variables
- [X] correct usage of inline function
```
static inline std::string displayRol(ROLLEN rol);
```
- [X] useful template function or class
- [ ] useful friend function or class
### C++
- [X] everything in one or more self-made namespace(s)
```
namespace SpelNS 
```
- [ ] 2 useful unsigned chars or other better usage of memory efficient type
- [X] at least 4 useful const references for variables
```
const int aantalSpecialeBurgers= std::min (aantalSpelers/3,5);
const int aantalBurgers = aantalSpelers - aantalWeerwolven - aantalSpecialeBurgers;
const int aantalOverGeblevenSpelers = aantalBurgers + aantalWeerwolven;
const bool isSpelerVerliefd = spelersVector[0]->getVerliefd();
```
- [X] at least 4 useful const references for functions
```
void setNaam(const std::string naam);
void setBurgemeester(const bool burgemeester = 0);
void setVerliefd(const bool isVerliefd = 0);
void setIsVermoord(const bool isVermoord = 0);
```
- [X] at least 4 useful bool
```
bool burgermeester;
bool isVerliefd;
bool isVermoord;
const bool isSpelerVerliefd = spelersVector[0]->getVerliefd();
```
- [X] dynamic memory allocation (new)
```
spelersVector.push_back(new Weerwolf(naamWeerwolven));
```
- [X] dynamic memory removing (delete)
```
delete(*it)
```
- [ ] 2 useful (modern) call-by-references
- [X] useful string class usage
```
std::string naam;
std::cout << "Wat is de naam van speler " << i << std::endl;
std::cin >> naam;
```
- [X] useful container class
```
std::vector<Speler*> spelersVector;
```
- [X] useful usage of nullptr
```
return nullptr;
```
- [ ] useful usage of (modern) file-I/O
- [X] useful exception handling
```
try {
            std::cin >> aantalSpelers;
            nieuwSpel = new Spel(aantalSpelers);
            std::cout << "Het spel wordt aangemaakt" << std::endl;
            nieuwSpel->voegSpelersToe(aantalSpelers);
            nieuwSpel->vulNamenIn();
            //nieuwSpel->nacht();
            nieuwSpel->toonRollen();
            nieuwSpel->eersteNacht();
            nieuwSpel->stemVoorBurgemeester();

            while(nieuwSpel->checkEindeSpel() == 1){
                nieuwSpel->nacht();
                nieuwSpel->dag();
            }

            return 0;
        } catch ( AantalSpelerException& e) {
            std::cout << e.what() << std::endl;

        } catch (...){
            std::cout << "Catch all exceptie" << std::endl;
        }
```
- [ ] useful usage of lambda function
- [ ] useful usage of threads
### Uitbreiding
- [ ] useful Qt class
- [ ] useful usage of signals/slots
- [ ] test-driven development (= written test plan or unit tests)
- [X] solve bug ticket (with pull request or commit message issue link and issue branch)
- [X] report a bug ticket on [another project](https://github.com/driesnuttin25/Mazerush.git) issue: #2
- [ ] usage of a GUI
- [ ] usage of OpenGL or other 3D engine
- [ ] useful usage of an external library (not Qt)
- [ ] project that communicates (e.g. UART, BT) with hardware
- [ ] a nice extra that you think that should deserve grading (stuff you put time in and is not rewarded by an item above)
