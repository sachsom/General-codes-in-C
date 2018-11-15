// Helper functions for music
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include "helpers.h"
#include <math.h>

  // Calculates frequency (in Hz) of a note
  int frequency(string note) {

    double y = 0;
    if (note[0] == 'A') {

      if (strlen(note) < 3) {
        int x = (int)(note[1] - '0');

        return round(440 * ((pow(2, (x - 4)))));

      } else if (note[1] == '#') {
        int x = (int)(note[2] - '0');
        float k = ((x - 4) * 12) + 1;
        float num = k / 12;

        return round(440 * pow(2, num));

      } else {
        int x = (int)(note[2] - '0');
        float k = ((x - 4) * 12) - 1;
        float num = k / 12;

        return round(440 * pow(2, num));
      }

    } else if (note[0] == 'B')

    {

      if (strlen(note) < 3) {
        int x = (int)(note[1] - '0');
        float l = 12 * (x - 4);
        l = l + 2;
        l = l / 12;
        y = 440 * (pow(2, l));
        return round(y);

      } else if (note[1] == 'b') {
        int x = (int)(note[2] - '0');
        float k = ((x - 4) * 12) + 1;
        float num = k / 12;
        y = 440 * pow(2, num);
        return round(y);
      }

    } else if (note[0] == 'C')

    {
      if (strlen(note) < 3) {
        int x = (int)(note[1] - '0');
        float l = 12 * (x - 5);
        l = l + 3;
        l = l / 12;
        y = 440 * pow(2, l);
        return round(y);
      } else if (note[1] == '#') {
        int x = (int)(note[2] - '0');
        float k = 12 * (x - 5);
        k = k + 4;
        k = k / 12;
        return round(440 * pow(2, k));
      }

    } else if (note[0] == 'D')

    {
      if (strlen(note) < 3) {
        int x = (int)(note[1] - '0');
        float k = 12 * (x - 5);
        k = k + 5;
        k = k / 12;
        return round(440 * pow(2, k));
      } else if (note[1] == '#') {
        int x = (int)(note[2] - '0');
        float k = 12 * (x - 5);
        k = k + 6;
        k = k / 12;
        return round(440 * pow(2, k));

      } else if (note[1] == 'b') {
        int x = (int)(note[2] - '0');
        float k = 12 * (x - 5);
        k = k + 4;
        k = k / 12;
        return round(440 * pow(2, k));
      }

    } else if (note[0] == 'E')

    {
      if (strlen(note) < 3) {
        int x = (int)(note[1] - '0');
        float k = 12 * (x - 5);
        k = k + 7;
        k = k / 12;
        return round(440 * pow(2, k));
      } else if (note[1] == 'b') {
        int x = (int)(note[2] - '0');
        float k = 12 * (x - 5);
        k = k + 6;
        k = k / 12;
        return round(440 * pow(2, k));

      }

    } else if (note[0] == 'F')

    {
      if (strlen(note) < 3) {
        int x = (int)(note[1] - '0');
        float k = 12 * (x - 5);
        k = k + 8;
        k = k / 12;
        return round(440 * pow(2, k));
      } else if (note[1] == '#') {
        int x = (int)(note[2] - '0');
        float k = 12 * (x - 5);
        k = k + 9;
        k = k / 12;
        return round(440 * pow(2, k));

      }

    } else if (note[0] == 'G')

    {
      if (strlen(note) < 3) {
        int x = (int)(note[1] - '0');
        float k = 12 * (x - 5);
        k = k + 10;
        k = k / 12;
        return round(440 * pow(2, k));
      } else if (note[1] == '#') {
        int x = (int)(note[2] - '0');
        float k = 12 * (x - 5);
        k = k + 11;
        k = k / 12;
        return round(440 * pow(2, k));

      } else if (note[1] == 'b') {
        int x = (int)(note[2] - '0');
        float k = 12 * (x - 5);
        k = k + 9;
        k = k / 12;
        return round(440 * pow(2, k));
      }

    }

    return 0;
  } /// end frequency function

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction) {
  float num, den;
  num = (int)(fraction[0] - '0');
  den = (int)(fraction[2] - '0');
  float frac=num/den;
  return frac/.125;
}

// Determines whether a string represents a rest
bool is_rest(string s) {
  if (strcmp(s, "\0"))
    return false;
  else
    return true;
}