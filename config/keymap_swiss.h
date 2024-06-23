/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │   │   │   │   │   │   │   │   │   │   │ ' │ ^ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ü │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ ö │ ä │ $ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │   │   │   │   │   │   │   │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define CH_SECT GRAVE            // §
#define CH_SQUOT MINUS           // '
#define CH_CARET EQUAL           // ^
// Row 2
#define CH_UGRV LBKT             // ü
#define CH_DOTS SLASH            // ¨
// Row 3
#define CH_OGRV SEMI             // ö
#define CH_AGRV APOS             // ä
#define CH_USD NON_US_HASH       // $
// Row 4
#define CH_LESS NON_US_BSLH      // <
#define CH_MINUS RBKT            // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ° │ + │ " │ £ │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ é │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ ç │ ° │ § │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define CH_DEG GRAVE             // °
#define CH_PLUS LS(N1)           // +
#define CH_DQUOT LS(N2)          // "
#define CH_AST LS(N3)            // *
#define CH_CCED LS(N4)           // ç
#define CH_PERC LS(N5)           // %
#define CH_AND LS(N6)            // &
#define CH_FSLH LS(N7)           // /
#define CH_LPAR LS(N8)           // (
#define CH_RPAR LS(N9)           // )
#define CH_EQL LS(N0)            // =
#define CH_QUES LS(MINUS)        // ?
#define CH_QUOTES LS(EQUAL)      // ``
// Row 2
#define CH_EGRV LS(LBKT)         // è
#define CH_EXCL LS(RBKT)         // !
// Row 3
#define CH_EACC LS(SEMI)         // é
#define CH_AACC LS(APOS)         // à
#define CH_PND LS(NON_US_HASH)   // £
// Row 4
#define CH_GREAT LS(NON_US_BSLH) // >
#define CH_UNDER LS(SLASH)       // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ | │ @ │ # │   │   │   │   │   │   │   │   │ ~ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │ [ │ ] │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ { │ } │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define CH_PIPE RA(N1)            // |
#define CH_AT RA(N2)              // @
#define CH_HASH RA(N3)            // #
#define CH_TILDE RA()             // ~
#define CH_BCKQT LS(EQUAL)        // ``

// Row 2
#define CH_EUR RA(E)              // €
#define CH_LBKT RA(LBKT)          // [
#define CH_RBKT RA(RBKT)          // ]
// Row 3
#define CH_LBRC RA(SEMI)          // {
#define CH_RBRC RA(NON_US_HASH)   // }
