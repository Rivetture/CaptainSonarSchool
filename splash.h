#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cctype>

//Some constants to do color text printing
const string RESET("\033[0m");
const string RED("\033[0;31m");
const string GREEN("\033[1;32m");
const string YELLOW("\033[1;33m");
const string BLUE("\033[1;34m");
const string MAGENTA("\033[0;35m");
const string CYAN("\033[0;36m");
const string WHITE("\033[0;37m");

void splash_screen() {
cerr << GREEN << endl;
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&%/,         .#&%%%%%%%%%%%%&%/         ,/%&%%%%/#&&%%%%########%%%%%&&%%%%%%%%%%%&&&&&&@@@@@@&&&&&&&&&&&&&&&&&%&&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&%(,           .#&%%%%%%%%%%%%%%%%&&,            ,#&#/#%&%%%%########%%%&&&%%%%%%%%%%&&&&&&&&@@@@@&&&&&&&&&&&&&&&&&&&%%\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&#*             .#&%%%%%%%%%%%%%%%%%%%%&#.             ,/(#%%%%%%#######%%%&&%%%%%%%%%%%&&&&&&&&&&&&&&&&&&@&&&&&&&&&&&&&&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&(.           ,/%&&%%%%%%%%%%%&#/%%%%%%%%%%%%&&%#/.           *#&%%#######%%%&%%%%%%%%%%%%&&&&&&&&&&&&&&&&&&@@&&&&&&&&&&&&&&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&@%,          ,#&&&%%%%%%%%%%%%%%&#. *%%%%%%%%%%%%%%%%%%#*.         ./%#######%%%%%%%#%%%%%%%%&&&&&&&&%&&&&&&&&@@@@@&&&&&&&&&&&&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&(.         *#&&%&&&&&&&&%%%%%%%%&%.   #&%%%%%%%&%%%%%%%%%&&%/.         /#####%%%%%%%##%%%%%%&&&&&&&&&&&&&&&&@@@@@@@@@&&&&&&&&&&&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&%.        ,%&&&&&&&&&&&&&&&&%%#(/*,      ,**/(#%%%%%%%%%%%&%%#(#%*         *###%%%%%%%##%%%%%&&&&&&&&&&&&@@@@@@@@@@@@&&&&&&&&&&&&&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&#.       .(&%&&&&&&&&&&&&&&&&%&&#.             *%&%%%%%%%%%&&%(#%&&%%#*        ,%&%%%%%###%%%%%&&&&&&&@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&%,       .#&&&&&&&&&&&&&&&&&&&&&&%&&#          *%&%%%%#%%%%%%%#(#&&&%%####*        /%%%#####%%%%&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&/       .#&&&&&&&&&&&&&&&&&&&&&&&&&&%&,        ,%%%%%%#%%%%%%%((%&&&%%%######.       *%%####%%%%%%&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@@&&&%%%\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&,       /&&%%%&&&&&&&&&&&&&&&&&&&&&&&&&.         #&%%##%%%%%&%(#&&&&%%%######(#/       .#%####%%%%&&&&&&&&&&&@@@@@@@@@@@@@@@@&%%%&&&@@@&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&%       .&%%%%%&&&&&&&&&&&&&&&&&&&&&&&&&#./%&&%&%/.,%&##&%%%%%#(%&&&&&&%%#####(###%/       *###%%%&&&&&&&&&&&&@@@@@@@@&%@@&&&&&@@@@@@@&&&@@\n";
cerr << "@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&%&%*.    *&%%%%%&&&&&&&&&&&&&&&&&&&&&&&&&%&&%%%&&&%%&&%%&&%%%%%#(%&&&&&&%%%#########%&#.    *(###%%%%%%%%%&&&&&&&&&&@&%###&@@&&&@@@@@&&%%&@&&\n";
cerr << "@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&%%%%%%&%(,/&%%%%%%%%&&&&&&&&&&&&&&&&&&&&&&&&&&%%%%&&%%&&&&%%%(%%##%&&&%%&&&%%%#######%%%%#,,#####%%%%%##%%%&&&&&&&&&%####%&&&&&&@&&&&%%%&&&&&&&\n";
cerr << "@@@@@@@@@@@&&&&&&&&&&&&&&&&%%&%%%&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%&&&&&&&&&&&&&&&&&&&&%&%%%%%%%&%&%%%&&%%%&%#(#&&%%###%%%%%%#####%%%#########%%#####%%%%&%&&&&%###%%&&&&&%&&&&&%%%&&%&&&&&&&\n";
cerr << "@@@@@@@@@&&&&&&&&&&&&&&&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%&%%%%%%%%%&&&%%&%&&%&&&&&&&&&%%%%&&&&&&&&&&&&%##%&&&%%%###(##%%%%%%#%%%#########(((###%%%%%%%&&%#(#%&&&%%&%%%&%&%%&%&&&&&&&&&&%%\n";
cerr << "@@@@@@@&&&&&&&&%&(*.                      .*#%#%%%#,.,,,,,..(%%%%%%%,.,%%%%%%&/.,,,,,,.,&&%*,,, .,,,,%&&%&(..#&%####(.*##%/ ./%%%###,,##(/.                      ...,*(&%%%%%%%&&&&&&&&%%%\n";
cerr << "@@@@@&&&&&&&&&&%                             ,#%%%*,%%%%%%%/*%%%%%#.*&*.&%%%%&/.&&%%%&#.%%%%%%&.*&%%&%#%&/.%#./%%####.*#(#/.%/.#%###,,#((/                              ,%&%%%%%%%%%%%%#%#\n";
cerr << "@@@&&&&&&&&&%&%.                              .#%%*,%%%%%%%%%%%%%#./%%%*/%%%%%/ *,,,,,..%%%%%%%.*%%%%%#&*.%%%#.#%%###.*#(#/.#%%.*###,,#(#(                                (%%%%%%%%#######\n";
cerr << "@&&&&&&&&&%%%%*         ..............         /%%*.%%%%%%&/,#%%/ .......,%%%%/.%%%%%%%%###%%%%.*%%%%%%........./####.*###/.#%#%#*.(,,###(                                .#%#############\n";
cerr << "&&&&&&&&*#&%%%,        (%%%%%%%%%%%%%&#.       *%%%*.......,#%%#,#&%%%%%%/,#%%/,%%%%%%%%%%%%%%%.*%%%%%//%%%%%#%#,/##(.*%##/,#%#####,.*##%(        ,/**//////***/*.         /###/*#########\n";
cerr << "&&&&&&/ /&%%%%,       .#%#%%%%%%%#%%%%%/*******(%%%%%#/,.             .,/#%#%%%%,......,,#%#%#%%%#%%*,,..,(%####%%##(##..,,,..,#((#######(        /%#%%%%%####%###*        *####, *#######\n";
cerr << "&&&&*   #%%%%%,         *//////(((((#####%%%%%%%#%%(                      .#%%%%.         /%#%%%#%%%,     (%###%####%#,        /%#####((#(        /%%#%###%######%/        *#((#*   ,(####\n";
cerr << "&/      %%%%#%/                              ,#%%%/                        .#%%%.          .#%%%%#%%,     (%########(.          *#(((((((/        /%%#/###########*       ./#((#(      /#(\n";
cerr << "        %%%%%%%*                               /%%*      *#%%%%%%%%%(,      /%%%.            /%#%%%%,     (%%#######,     *.     /#####(((        ,**,***********.        ,#(((((.       *\n";
cerr << "       .%%%%%%%%*                              .%%,     /%#%%%%%%%%#%%,     /%%%.     /(      ,%%%%%,     (%%%%####,     *%(      (###(##/                               *(((((((.       .\n";
cerr << "(.      %%%%%%%#%%%%#(((////****,,,,,.          #%,     (%%%%%%%%%%%%%*     /%%%.     /&*      *%%%%,    .((#%%%#%*     *%#%/     .(#(((#/                             /##(((((((.     .(#\n";
cerr << "&&&/    #%%%%%*,.,.,,,*%%%%%%%%%%%%%%%%(        (%,     (%%%%%%%%%%%%%*     /%%%.     /%%#.     .(%%,     (%%%%%#,     /%####(.    .(#(#%(                               .(#(((#/    *#((#\n";
cerr << "&&&&&(. (%%%%%,       .#%%%%%%%%%%%%%%%(        (%,     (%%%%%%%%%%%%%*     /%%%.     /%%%%*      *%,     (%%##%*      .... ..      .#%%%(         .                      .(((##*  *######\n";
cerr << "&&&&&&&#,%%%%%,         ,,,,,,,,,,,,,,.         #%,     ,#%%%%%%%%%%%(.     /%%%.     /%#%#%(      ,,     (%%#%*                     .###/        /%#############(.       ./#(#(,/%#######\n";
cerr << "@&&&&&&%&%%%%%*                                 %%*        ........        .(%#%.     /%%%%%%#,          .(%%%#                       ,(((        *#######(((((((#*       .(#((###########\n";
cerr << "@&&&&&&&&&%%%%%*                              .#%%%,                       /%%%%.     /##%%%%%%,          (%%(.     *%%%%%%%%%%&(      /%(        *#####(((###(((#*       .(##############\n";
cerr << "@@@&&&&&&&&&%%%%/,                          ,(%%%#%%(,                  .*#%%%#%.     /%%#####%%/         (%#.     *%#####%%%%%#%(      (#        *############(##*       .(###########%##\n";
cerr << "@@@@@&&&&&&&%%%%%%%%%########(((###(#####%%%%%%%%%%%#%%%%############%%%%%%%%%%%%%%%%%%%%%%%#%###%%#%%%%%%###%%%%%%####%%%%%%%#####(%%%%#####################(##((####################%%%%\n";
cerr << "@@@@@@@@@@@&@@&&&&&&&&&&%&%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#%%%%%#%%%%%%%%%#%%%###%%%%%%#%%%%#%%%%%%%%%####%####(#/%%%%%%%%%%%%%%%%%%%%%%%%%%&%%%%%%&%%%#%%%%%%%%%&&%%%%%&&%\n";
cerr << "@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%&%%%%%%%%%%%%%%%%%%%%#%%%#%%%%%%%%%%#%%%#/***/*/#%%%%%%%%%%%%%%%%########%%#(#(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%&&&%#%&&&%%%%%%%%%%%%&&&%&\n";
cerr << "@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%%%%%%%%%%%%%%%#(/(%%%#%%%%%%%%%%%#.       /%%%%%%%%%%%%%%%#((###%%%%%%%%%%%%%&%%%%%%%&&&&&&&&&%%%%%%%%%%%%%%%&&&&&%%@&&%%%&&&&%%%%&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&%*./&%%%%%%%%%(.(%%#(/,..................              ..*#%%%%#%%%%%*,%&%%%%%%&&&&&&&&&&&&&&&&&&&&&&&&&%&%%%%&&&&&&&&@&&&&&&&&&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&*     /%%%%%%(**,,,....................................,,   /%%%%%%#,    ,#&%%&&&&&&&&&&&&&&%%%%%%%%%%%&&&&&&%&&&%%&&@&&@@@&&&&&&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&/        ,#%%#%#..                                           *%#%#,        .#&&&&&&&&&&&&%%##%&&&&&&&&&%%%%&&&&&&&&&&&&%&@&@@&&&%%&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&#,         *#%%%(*,.                                      ./%%(         .#&&&&&&&&&&&&%%%&@@&%%%%&&&&&&&&&%%%&&&&&&&&&&&&&&&&&&&&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&%*          ,(%%%%%%%%%%%%%%%%%%%%%%%#%%%%%%%%%%%%%%#%%%%/.         .%&&%&&&&&&&&&%%%&&&%%&&&&&&&&&&&&&&&&%%&&&&&&&&&&&&&&&&&&&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&(.          ./#%%%%#%%#%%%%%%%%###%%%%%%%%%%%%%%%%/,           ,#&%&&&&&&&&&&&%%&@%%&@&%%&&&@@&&&&&&&&@&%%&&&&&&&&&&&&&&&&&&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&(,             .*/(#%%%%###%%%#%%%%%%%%(/*,             ,(&&&&&&&&&&&&&@&&&&@&%@@%&@&&%&&@@@@@@@@@&%&&&%&&&&&&&&&&&&&&&&&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&#*.               .(%##%%%%%%%%%%*                ,(&&%&&&&&&&&&&&&&&&&&@&&@&%@&&&@@&&&&&@@@@&%&&%&@%&@&@&&&&&&&&&&&&&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&%%&&&#*.             .%%#%%%%#%%*             .,/%&&%&&&&&&&&&&&&&&&@&&&@@&@@&@&&@@@@&&&&&&@@&@&&@&&@&&&@@@&&&&&&&&&&&&&\n";
cerr << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&&&&&&&%%%&&%(*,.         *#%%%%%*          .,/#%&%%%%&&&&&&&&&&@@@@@@@@&&@@@&@@@@&@@@@@&&&@@@@@&@&&@&&@&&@@@@@@&&&&&&&@&&&\n";
cerr << RESET << endl;
}

