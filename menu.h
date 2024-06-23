#ifndef DPKB_MENU_H
#define DPKB_MENU_H

static const int MAIN_MENU = 0;
static const char NOTHING = '\0';

typedef char DName[11];

typedef struct {
    DName label;
    char value;
    int next_menu;
} DOption;

typedef struct {
    DOption up;
    DOption left;
    DOption right;
    DOption down;
} DMenu;

// Top-level menu

static DMenu menu_top = {
    {"a-p", NOTHING, 1},
    {"0-9, sym1", NOTHING, 2},
    {"q-z, sym2", NOTHING, 3},
    {"[SPACE]", ' ', 0},
};

// Second-level menus (immediately under top-level menu).

static DMenu menu_ap = {
    {"abcd", NOTHING, 5},
    {"efgh", NOTHING, 6},
    {"ijkl", NOTHING, 7},
    {"mnop", NOTHING, 8},
};

static DMenu menu_qz_sym1 = {
    {"qrst", NOTHING, 9},
    {"uvwx", NOTHING, 10},
    {"yz.,", NOTHING, 11},
    {"?!'\"", NOTHING, 12},
};

static DMenu menu_num = {
    {"1234", NOTHING, 13},
    {"5678", NOTHING, 14},
    {"90#%", NOTHING, 15},
    {"+-=~", NOTHING, 16},
};

// abcd / efgh / ijkl / mnop

static DMenu menu_abcd = {
    {"a", 'a', MAIN_MENU},
    {"b", 'b', MAIN_MENU},
    {"c", 'c', MAIN_MENU},
    {"d", 'd', MAIN_MENU},
};

static DMenu menu_efgh = {
    {"e", 'e', MAIN_MENU},
    {"f", 'f', MAIN_MENU},
    {"g", 'g', MAIN_MENU},
    {"h", 'h', MAIN_MENU},
};

static DMenu menu_ijkl = {
    {"i", 'i', MAIN_MENU},
    {"j", 'j', MAIN_MENU},
    {"k", 'k', MAIN_MENU},
    {"l", 'l', MAIN_MENU},
};

static DMenu menu_mnop = {
    {"m", 'm', MAIN_MENU},
    {"n", 'n', MAIN_MENU},
    {"o", 'o', MAIN_MENU},
    {"p", 'p', MAIN_MENU},
};

// qrst / uvwx / yz_sym / sym1

static DMenu menu_qrst = {
    {"q", 'q', MAIN_MENU},
    {"r", 'r', MAIN_MENU},
    {"s", 's', MAIN_MENU},
    {"t", 't', MAIN_MENU},
};

static DMenu menu_uvwx = {
    {"u", 'u', MAIN_MENU},
    {"v", 'v', MAIN_MENU},
    {"w", 'w', MAIN_MENU},
    {"x", 'x', MAIN_MENU},
};

static DMenu menu_yz_dot_comma = {
    {"y", 'y', MAIN_MENU},
    {"z", 'z', MAIN_MENU},
    {".", '.', MAIN_MENU},
    {",", ',', MAIN_MENU},
};

static DMenu menu_qz_sym = {
    {"?", '?', MAIN_MENU},
    {"!", '!', MAIN_MENU},
    {"'", '\'', MAIN_MENU},
    {"\"", '"', MAIN_MENU},
};

// 1234 / 5678 / 90#~ / +-=%

static DMenu menu_1234 = {
    {"1", '1', MAIN_MENU},
    {"2", '2', MAIN_MENU},
    {"3", '3', MAIN_MENU},
    {"4", '4', MAIN_MENU},
};

static DMenu menu_5678 = {
    {"5", '5', MAIN_MENU},
    {"6", '6', MAIN_MENU},
    {"7", '7', MAIN_MENU},
    {"8", '8', MAIN_MENU},
};

static DMenu menu_90_sym = {
    {"9", '9', MAIN_MENU},
    {"0", '0', MAIN_MENU},
    {"#", '#', MAIN_MENU},
    {"%", '%', MAIN_MENU},
};

static DMenu menu_num_sym = {
    {"+", '+', MAIN_MENU},
    {"-", '-', MAIN_MENU},
    {"=", '=', MAIN_MENU},
    {"~", '~', MAIN_MENU},
};

static DMenu *menus[17] = {
    // top-level
    &menu_top,
    // second level
    &menu_ap, &menu_num, &menu_qz_sym1, &menu_num,

    // third level (character entry)
    &menu_abcd, &menu_efgh, &menu_ijkl, &menu_mnop,
    &menu_qrst, &menu_uvwx, &menu_yz_dot_comma, &menu_qz_sym,
    &menu_1234, &menu_5678, &menu_90_sym, &menu_num_sym,
};

#endif
