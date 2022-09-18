/*Package weather implements a function to update and print
the current forecast given 2 parameters, the city and the condition.
*/
package weather

//CurrentCondition is the Current weather condition.
var CurrentCondition string

//CurrentLocation is the Current weather location.
var CurrentLocation string

//Forecast function update and print the Forecast.
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}
