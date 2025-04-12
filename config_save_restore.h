/***
 * HC-11 wireless modem emulator for the Flipper Zero
 * Version: 1.2
 *
 * Configuration saving / restoring
***/

/*** Routines ***/

/** Load saved configuration options
    Silently fail **/
void load_configuration(App *);

/** Save configuration options
    Silently fail **/
void save_configuration(App *);
