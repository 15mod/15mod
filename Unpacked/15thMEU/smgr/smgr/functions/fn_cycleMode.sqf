#include "constants.hpp"

switch ( GETVAR("smgrOpMode") ) do {
    case "STBY": {
    	SETVAR("smgrOpMode", "FIX");
    };
    case "FIX": {
    	SETVAR("smgrOpMode", "CONT");
    };
    case "CONT": {
    	SETVAR("smgrOpMode", "STBY");
    };
    default {};
};