//Drill for Chapter 4

#include "std_lib_facilities.h"
#include "math.h"

int main()
{
    double smallest;
    double largest;
    double current_value;
    vector<double> in_values;

    bool went_already = false;
    string in_units;

    double conversion_factor = 0;
    double sum_total = 0;

    constexpr char exit = '|';
    string exit_string = "|";
    vector<string> units_allowed = {"cm","m","in","ft"};
    vector<double> units_m = {0.01,1.0,0.0254,12*0.0254};

    while(cin >> current_value >> in_units){
        if ((current_value != int(exit))&& (in_units != exit_string)){
            //A beírt mértékegység alapján kikeressük a az átváltáshoz szükséges adatot (units_m[i])
            for (int i = 0; i < units_m.size(); i++){
                if (in_units == units_allowed[i])
                    conversion_factor = units_m[i];
            }

            // Ha a beírt mértékegység egyenlő nullával (nem található meg az units_allowed-ben), írjunk ki hibaüzenetet
            if (conversion_factor == 0){
                cout << "You gave me bad units!\n";
                return 1;
            }

            // A beírt számot szorozzuk meg az átváltáshoz szükséges számmal
            current_value *= conversion_factor;

            //Az eredményt adjuk hozzá a vector-hoz
            in_values.push_back(current_value);

            //Adjuk meg a legkisebb értéket az első ciklusnál
            if (went_already == false)
                smallest = current_value;
            
            cout << current_value << " m";

            //Nézzük meg, hogy kisebb vagy nagyobb-e a beírt adat az előző számnál
            if (current_value > largest){
                largest = current_value;
                cout << " the largest so far.";
            }
            else if (current_value < smallest) {
                smallest = current_value;
                cout << " the smallest so far.";
            }

            cout << '\n';

            went_already = true;

            sum_total += current_value;
        }
        else
            return 0;
    }

    cout << "The smallest value is: " << smallest << " m.\n";
    cout << "The largest value is: " << largest << " m.\n";
    cout << "There are " << in_values.size() << " values total.\n";
    cout << "All values sum to: " << sum_total << ".\n";

    cout << "The values you entered in meters are: \n";
    sort(in_values);
    for (int i = 0; i < in_values.size(); i++){
        cout << in_values[i] << " \n";
    }
}