/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                  /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                /* -c option; centers dmenu on screen */
static int min_width = 400;             /* minimum width when centered */
static const char *fonts[] = {          /* -fn option overrides fonts[0]; default X11 font or font set */
	"Iosevka Nerd Font Mono:size=12:antialias=true:autohint=true",
        "Noto Color Emoji:size=12:antialias=true:autohint=true"
};
static const char *prompt = NULL;       /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
                        /*     fg         bg    */
        [SchemeNorm]   = { "#c0caf5", "#1a1b26" },
        [SchemeSel]    = { "#1a1b26", "#f7768e" },
        [SchemeOut]    = { "#c0caf5", "#414868" },
        [SchemeBorder] = { "#24283b", "#24283b" },
};
static unsigned int lines = 6;          /* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lineheight = 32;    /* -h option; minimum height of a menu line */
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

static unsigned int border_width = 1;   /* Size of the window border */
