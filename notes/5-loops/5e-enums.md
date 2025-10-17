# Enumerations

## Scenario

Suppose you want to simulate a navigation display (ND) for an Airbus aircraft.

- https://wiki.ivao.aero/en/home/training/documentation/Navigation_Display_-_ND
- Mode knob - which type of navigation mode the display will use.
- Range knob - which range value the display will use (how zoomed in or out).

## Mode Knob

You could use a variable to track the mode knob state:

```cpp
int modeKnobState = 0;
switch (modeKnobState) {
    case 0:
        cout << "ILS" << endl;
        break;
    case 1:
        cout << "VOR" << endl;
        break;
    case 2:
        cout << "NAV" << endl;
        break;
    case 3:
        cout << "ARC" << endl;
        break;
    case 4:
        cout << "PLAN" << endl;
        break;
}
```

- Each possible state is assigned an integer (0, 1, 2, etc.).
- _Why is this a poor design?_

Alternative - use named constants:

```cpp
const int ILS = 0;
const int VOR = 1;
// ...
```

- Still can be improved.

Alternative - use an enumeration:

```cpp
enum NavDisplayMode {
    ILS,
    VOR,
    NAV,
    ARC,
    PLAN
};  // semicolon is required here
```

- The name of the enum (`NavDisplayMode` in this case) becomes a new data type.
- Within the braces, list each possible value separated by a comma.
- End with a semicolon.

To use the new data type:

```cpp
NavDisplayMode modeKnobState = ILS;
```

Each possible value in the enumeration can be referenced like a named constant:

```cpp
case ILS:
```

Updated switch statement:

```cpp
NavDisplayMode modeKnobState = ILS;
switch (modeKnobState) {
    case ILS:
        cout << "ILS" << endl;
        break;
    case VOR:
        cout << "VOR" << endl;
        break;
    case NAV:
        cout << "NAV" << endl;
        break;
    case ARC:
        cout << "ARC" << endl;
        break;
    case PLAN:
        cout << "PLAN" << endl;
        break;
}
```

## Range Knob

An enumeration could be added to track the range knob state.

```cpp
enum NavDisplayRange {
    10,  // INVALID identifiers
    20,
    40,
    80,
    160,
    320
};
```

- This is invalid because the possible values must be valid identifiers (can't start with a number).

Instead, we could prefix the values with `RANGE_`:

```cpp
enum NavDisplayRange {
    RANGE_10,
    RANGE_20,
    RANGE_40,
    RANGE_80,
    RANGE_160,
    RANGE_320
};
```

Example using the `NavDisplayRange` enum:

```cpp
NavDisplayRange rangeKnobState = RANGE_10;
cout << "Range: " << rangeKnobState << endl;
```

**The output of an enumeration variable is a number, not a string!** The identifier you assign to each possible enum value is only known by the compiler. When the program runs, only the integer value it maps to is available.

## Enum Values

Behind the scenes, the compiler maps each possible value within an enumeration to an integer value.

```cpp
enum NavDisplayRange {
    RANGE_10,  // 0
    RANGE_20,  // 1
    RANGE_40,  // 2
    RANGE_80,  // 3
    RANGE_160, // 4
    RANGE_320  // 5
};
```

- Mappings are assigned in order starting with 0.

You can override the mapping:

```cpp
enum NavDisplayRange {
    RANGE_10 = 10,
    RANGE_20 = 20,
    RANGE_40 = 40,
    RANGE_80 = 80,
    RANGE_160 = 160,
    RANGE_320 = 320
};
```

## Type Safety

Enum variables can only be assigned values from their associated enums:

```cpp
// Valid
NavDisplayMode modeKnobState = ILS;
NavDisplayRange rangeKnobState = RANGE_20;

// Invalid
NavDisplayMode modeKnobState = RANGE_20;
NavDisplayRange rangeKnobState = ILS;
```
