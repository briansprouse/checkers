#include <exception>

namespace checkers {

class MoveException : public std::exception
{
public:
    MoveException( const char *e ) :
        exception_(e) {}

    const char *what () const throw ()
    {
        return exception_;
    }

private:
    const char *exception_;
};

} //checkers namespace
