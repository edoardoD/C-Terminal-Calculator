#include "functions.h"
#include "main.h"
#include <iostream>
#include <string>
#include <string.h>
#include <cmath>
using namespace std;

void exit_ask(){
    string respond;
    cout<<'\n';
            cout<<"Want to proceed with other operations or exit from the app?"<<endl;
            cout<<"1. To continue in this classical physics field, type 'continue'"<<endl;
            cout<<"2. To continue with other calculations in different field, type 'continue with others'"<<endl;
            cout<<"3. To exit from everything, type 'quit'"<<endl;           
            cout<<"Choose the option: ";getline(cin, respond);
            if (respond=="continue")
            {
                cout<<'\n';
                cout<<"Here you go, <Classical Physics>"<<endl;
                classical_physics();
            }
            else if (respond=="continue with others")
            {
                cout<<'\n';
                cout<<"Here you are, <main>"<<endl;
                main();
            }
            else if(respond=="quit"){
                cout<<"Goodbye!"<<endl;
            }
            else{
                cout<<"Please select the right option!"<<endl;
                exit_ask();
            }
}

// physics
void classical_physics(){
        double num1, num2, force, force1, force2, totforce, acceleration, mass, gravity, elastic_force, spring_const, movement, weightforce, friction_f, f_f_static, f_f_dynamic,
            pressing_force, parallel_f, mu_s, mu_d, height, length, base, delta_v, delta_t, delta_s, velocity_m, arch_f, density, volume, sa, sb, ta, tb;

        cout << "Select your operation: ";
        string input;
        getline(cin,input);
        
        if (input=="total force"){
            cout << "Enter Force1: ";
            cin >> force1;
            cout << "Enter Force2: ";
            cin >> force2;
            totforce = force1 + force2;
            cout << "Your total force is -> " << totforce << "N" << endl;  
            exit_ask();          
        }
        else if (input=="total force using sqrt")
        {
            cout << "Enter Force1: ";
            cin >> force1;
            cout << "Enter Force2:";
            cin >> force2;
            totforce = sqrt(force1 + force2);
            cout << "Your Total force with sqrt is -> " << totforce << "N" << endl;
            exit_ask();
        }
        else if (input=="weight force")
        {
            cout << "Enter Mass: ";
            cin >> mass;
            cout << "Enter Gravity (Earth's 9.8 N/Kg): ";
            cin >> gravity;
            weightforce = mass * gravity;
            cout << "Your Weight force is -> " << weightforce << "N" << endl;
            exit_ask();
        }
        else if (input=="mass using weight force")
        {
            cout << "Enter Weight Force: ";
            cin >> weightforce;
            cout << "Enter Gravity (Earth's 9.8 N/kg): ";
            cin >> gravity;
            if (gravity != 0)
            {
                mass = weightforce / gravity;
                cout << "Your mass is -> " << mass << "kg" << endl;
                exit_ask();
            }
            else
            {
                cout << "Can't divide with 0" << endl;
                exit_ask();
            }
        }
        else if (input=="gravity")
        {
            cout << "Enter Weight force: ";
            cin >> weightforce;
            cout << "Enter Mass: ";
            cin >> mass;
            if (mass != 0)
            {
                gravity = weightforce / mass;
                cout << "Your Gravity is -> " << gravity << "N/kg" << endl;
                exit_ask();
            }
            else
            {
                cout << "Can't divide with 0" << endl;
                exit_ask();
            }            
        }
        else if (input=="elastic force")
        {
            cout << "Enter Spring Constant: ";
            cin >> spring_const;
            cout << "Enter Movement: ";
            cin >> movement;
            elastic_force = spring_const * movement;
            cout << "Your elastic force is -> " << elastic_force << "N" << endl;  
            exit_ask();          
        }
        else if (input=="spring constant")
        {
            cout << "Enter elastic force: ";
            cin >> elastic_force;
            cout << "Enter movement: ";
            cin >> movement;
            if (movement != 0)
            {
                spring_const = elastic_force / movement;
                cout << "Your spring constant is -> " << spring_const << "N/m" << endl;
                exit_ask();
            }
            else
            {
                cout << "Can't divide with 0" << endl;
                exit_ask();
            }            
        }
        else if (input=="movement")
        {
            cout << "Enter elastic force: ";
            cin >> elastic_force;
            cout << "Enter spring constant: ";
            cin >> spring_const;
            if (spring_const != 0)
            {
                movement = elastic_force / spring_const;
                cout << "Your movement is -> " << movement << "m" << endl;
                exit_ask();
            }
            else
            {
                cout << "Can't divide with 0" << endl;
                exit_ask();
            }            
        }
        else if (input=="force")
        {
            cout << "Enter Mass: ";
            cin >> mass;
            cout << "Enter acceleration: ";
            cin >> acceleration;
            force = mass * acceleration;
            cout<<"You're mass is "<<mass<<" ";
            cout<<"and the acceleration is "<<acceleration<<endl;
            cout<<"The formula to calculate the force: F = m * a"<<'\n'<<'\n';
            cout << "Your force is -> " << force << "N" << endl;         
            exit_ask();   
        }
        else if (input=="mass using acceleration")
        {
            cout << "Enter Force: ";
            cin >> force;
            cout << "Enter Acceleration: ";
            cin >> acceleration;
            if (acceleration != 0)
            {
                mass = force / acceleration;
                cout << "Your mass is -> " << mass << "kg" << endl;
                exit_ask();
            }
            else
            {
                cout << "Can't divide with 0" << endl;
                exit_ask();
            }
        }
        else if (input=="acceleration")
        {
            cout << "Enter ?v: ";
            cin >> delta_v;
            cout << "Enter ?t: ";
            cin >> delta_t;
            if (delta_t != 0)
            {
                acceleration = delta_v / delta_t;
                cout << "Your acceleration is -> " << acceleration << "m/s2" << endl;
                exit_ask();
            }
            else
            {
                cout << "Can't divide with 0" << endl;
                exit_ask();
            }
        }
        else if (input=="fric force s")
        {
             cout << "Enter Mu (static): ";
            cin >> mu_s;
            cout << "Enter Pressing Force: ";
            cin >> pressing_force;
            f_f_static = mu_s * pressing_force;
            cout << "Your Friction Force (Static) -> " << f_f_static << "N" << endl;
            exit_ask();
        }
        else if (input=="fric force d")
        {
            cout << "Enter Mu (dynamic): ";
            cin >> mu_d;
            cout << "Enter Pressing force: ";
            cin >> pressing_force;
            f_f_dynamic = mu_d * pressing_force;
            cout << "Your friction force (dynamic) -> " << f_f_dynamic << "N" << endl;
            exit_ask();
        }
        else if (input=="pressing force")
        {
            cout << "Enter weight force: ";
            cin >> weightforce;
            cout << "Enter parallel force: ";
            cin >> parallel_f;
            pressing_force = sqrt(pow(weightforce, 2) - pow(parallel_f, 2));
            cout << "Your pressing force is -> " << pressing_force << "N" << endl;
            exit_ask();
        }
        else if (input=="parallel force")
        {
            cout << "Enter weight force: ";
            cin >> weightforce;
            cout << "Enter height ";
            cin >> height;
            cout << "Enter length: ";
            cin >> length;
            if (length != 0)
            {
                parallel_f = weightforce * height / length;
                cout << "Your parallel force is -> " << parallel_f << "N" << endl;
                exit_ask();
            }
            else
            {
                cout << "Can't divide with 0" << endl;
                exit_ask();
            }
        }
        else if (input=="length of triangle")
        {
            cout << "Enter the value of Base: ";
            cin >> base;
            cout << "Enter the value of Height: ";
            cin >> height;
            length = pow(base, 2) + pow(height, 2);
            cout << "Your Length of triangle is " << length << "^2" << endl;
            exit_ask();
        }
        else if (input=="base")
        {
            cout << "Enter the value of Length: ";
            cin >> length;
            cout << "Enter the value of Height: ";
            cin >> height;
            base = sqrt(pow(length, 2) - pow(height, 2));
            cout << "Your Base is " << base << endl;
            exit_ask();
        }
        else if (input=="length")
        {
            cout << "Enter the value of Height: ";
            cin >> height;
            cout << "Enter the value of base: ";
            cin >> base;
            length = sqrt(pow(height, 2) + pow(base, 2));
            cout << "Your Length is " << length << endl;
            exit_ask();
        }
        else if (input=="delta s")
        {
            cout << "Enter S(a): ";
            cin >> sa;
            cout << "Enter S(b): ";
            cin >> sb;
            delta_s = sb - sa;
            cout << "Your ?s is -> " << delta_s << "m" << endl;
            exit_ask();
        }
        else if (input=="delta t")
        {
             cout << "Enter t(a): ";
            cin >> ta;
            cout << "Enter t(b): ";
            cin >> tb;
            delta_t = tb - ta;
            cout << "Your ?t is -> " << delta_t << "s" << endl;
            exit_ask();
        }
        else if (input=="velocity media")
        {
            cout << "Enter ?s: ";
            cin >> delta_s;
            cout << "Enter ?t: ";
            cin >> delta_t;
            if (delta_t != 0)
            {
                velocity_m = delta_s / delta_t;
                cout << "Your velocity media is -> " << velocity_m << "m/s" << endl;
                exit_ask();
            }
            else
            {
                cout << "Can't divide with 0" << endl;
                exit_ask();
            }
        }
        else if (input=="archimedes force")
        {
            cout << "Enter density: ";
            cin >> density;
            cout << "Enter volume: ";
            cin >> volume;
            cout << "Enter gravity (e.g. Earth's gravity 9.8N/kg): ";
            cin >> gravity;
            arch_f = density * volume * gravity;
            cout << "Your Archimede force is -> " << arch_f << "N" << endl;
            exit_ask();
        }
        else if (input=="mass using density")
        {
            cout << "Enter density: ";
            cin >> density;
            cout << "Enter volume: ";
            cin >> volume;
            mass = density * volume;
            cout << "Your mass is -> " << mass << "kg" << endl;
            exit_ask();
        }
        else if (input=="volume")
        {
            cout << "Enter density: ";
            cin >> density;
            cout << "Enter mass: ";
            cin >> mass;
            volume = density * mass;
            cout << "Your volume is -> " << volume << "m^3" << endl;
            exit_ask();
        }
        else if (input=="density")
        {
            cout << "Enter mass: ";
            cin >> mass;
            cout << "Enter volume: ";
            cin >> volume;
            if (volume != 0)
            {
                density = mass / volume;
                cout << "Your density is -> " << density << "kg/m^3" << endl;
                exit_ask();
            }
            else
            {
                cout << "Can't divide with 0" << endl;
                exit_ask();
            }
        }
        
        else{
            cout<<"Wrong command,"<<" Try again!"<<endl;
            classical_physics();
        }

}

void basic_calculator(){
    char normop;
    double num1, num2, result;

    cout << "Select an operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    cin >> normop;

    switch (normop) {
    case '1':
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = "  << result << endl;
        break;
    case '2':
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = "  << result << endl;
        break;
    case '3':
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = "  << result << endl;
        break;
    case '4':
        cout << "Enter dividend: ";
        cin >> num1;
        cout << "Enter divisor: ";
        cin >> num2;
        if (num2 != 0) {
            result = num1 / num2;
            cout << num1 << " / " << num2 << "=" << result << endl;
        }
        else {
            cout << "Error: Cannot divide by zero." << endl;
        }
        break;
    default:
        cout << "Invalid operation selected." << endl;
        break;
    }

}

// expressions
void expressions(){}

// use c++ provided formula file to calculate
void follow_formula_calc(){}