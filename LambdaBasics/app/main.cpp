#include <iostream>

using namespace std;

int main()
{
    // [capture list] (parameter list) {function body}

    // store into variable and fire later
    auto func = [](){
        cout<< "Hello World" << endl;
    };

    func();

    // stright call,
    [](){
        cout<< "Also Runs" << endl;
    }();

    // Define a lambda function that takes parameters
    auto makeSum = [](int a, int b)
    {
        cout << a + b << endl;
    };

    makeSum(1,2);

    // stright call
    [](int a, int b)
    {
        cout << a + b << endl;
    }
    (1,2);

    // Define a lambda that returns something;
    int cache = [](int a, int b)->int
    {
        return a + b;
    }(2, 3);

    cout << cache << endl;

    // does the same thing.
    cout <<
            [](int a, int b)->int{
                return a + b;
            }(2, 3)
    << endl;

    // captured list
    int a = 7;
    int b = 3;

    // passing the context to lambda function
    [a,b, func]()
    {
        func();
        cout << a + b << endl;
    }();

    // Capturing by value
    int c = 42;
    auto lmdFuncByCopy = [c](){
        cout << "The inner value of c is: " << c << endl;
    };

    for(int i = 1 ; i < 5; i++)
    {
        cout << "The outer value of c is: " << c << endl;
        lmdFuncByCopy();
        c = c + 1;
    }

    // Capturing by reference
    c = 0;
    auto lmdFuncByRef = [&c](){
        cout << "The inner value of c is: " << c << endl;
    };

    for(int i = 1 ; i < 5; i++)
    {
        cout << "The outer value of c is: " << c << endl;
        lmdFuncByRef();
        c = c + 1;
    }

    // Capture everything by value
    cout << "Capture everything by value" << endl;
    c = 0;
    auto lmdFuncCaptureAllByValue = [=](){
        // func(); // can access this as well. // because we used '=' sign.
        cout << "The inner value of c is: " << c << endl;
    };

    for(int i = 1 ; i < 5; i++)
    {
        cout << "The outer value of c is: " << c << endl;
        lmdFuncCaptureAllByValue();
        c = c + 1;
    }

    // Capture everything by reference
    cout << "Capture everything by value" << endl;
    c = 0;
    auto lmdFuncCaptureAllByRef = [&](){
        // func(); // can access this as well. // because we used '&' sign.
        // modification here will effect outer value scope.
        cout << "The inner value of c is: " << c << endl;
    };

    for(int i = 1 ; i < 5; i++)
    {
        cout << "The outer value of c is: " << c << endl;
        lmdFuncCaptureAllByRef();
        c = c + 1;
    }


    return 0;
}

// FIle operation class related to Raisehand.io software

// In Our Software we need.
// Json Manainance
// Network Work
// Actor Connections
// I/O Operation via enrgy QR
// Billing
// Transaction
// Payment
// Marketing
// Products listing
// Messaging
// Appointment Booking
// Notice Board Access
// Backup
// Ofline work i.e. no network, make entire clone on local and later sync.
// Ads Poll Connection


