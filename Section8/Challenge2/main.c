/* Avarage precipitation Schiphol Airport, Netherlands (2014 - 2018)
 * Data provided by: ROYAL NETHERLANDS METEOROLOGICAL INSTITUTE
 *  https://cdn.knmi.nl/knmi/map/page/klimatologie/gegevens/maandgegevens/mndgeg_240_rh24.txt
 *
 *  All values below are in centimeters.
 */
#include <stdio.h>

int main() {
    double rainfall[5][12] =
            {
                    { 8.31,6.64,3.30,3.91,8.36,1.98,12.57,15.59,1.28,8.16,4.58,7.88 },      // 2014
                    { 11.92,5.00,5.32,1.42,3.87,.99,9.56,13.73,13.03,2.81,16.36,4.50 },     // 2015
                    { 12.74,6.80,6.17,6.42,5.37,12.57,3.60,13.39,1.93,7.01,8.50,1.76 },     // 2016
                    { 5.34,6.06,4.44,3.20,3.27,5.06,12.27,9.55,16.37,7.73,8.13,12.15 },     // 2017
                    { 7.29,1.70,4.29,6.19,3.31,.63,.42,8.18,10.24,4.04,2.27,7.36 }          // 2018
            };
    int years[5] = { 2014, 2015, 2016, 2017, 2018 };
    double avg = 0;
    double yearavg = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 12; ++j) {

            avg += rainfall[i][j];
        }
        yearavg += avg;
        printf("The total rainfall in %d was %.2f centimeter. \n", years[i], avg);
        avg = 0;
    }
    printf("The yearly avg: %.2f cm \n", (yearavg/12));

    for (int i = 0; i < 5; ++i) {
        printf("jan feb mar apr may jun jul aug sept oct nov dec\n");
        for (int j = 0; j < 12; ++j) {
            printf("%.2f ", rainfall[i][j]);
        }
        printf("\n");
    }

    return 0;
}
