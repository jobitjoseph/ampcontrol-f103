#include "layout.h"

static const Layout lt176x132 = {
    .width = 176,
    .height = 132,

    .time.hmsFont = &fontterminusdig42,
    .time.dmyFont = &fontterminusdig30,
    .time.wdFont = &fontterminus32,
    .time.hmsY = 6,
    .time.dmyY = 56,
    .time.wdY = 96,

    .menu.headFont = &fontterminus16b,
    .menu.menuFont = &fontterminus12,
    .menu.itemCnt = 7,

    .tune.valFont = &fontterminus32,
    .tune.valY = 28,
    .tune.bar.sc = 66,
    .tune.bar.sw = 1,
    .tune.bar.barY = 36,
    .tune.bar.barW = 132,
    .tune.bar.half = 5,
    .tune.bar.middle = 2,

    .sp.step = 2,
    .sp.oft = 0,
    .sp.width = 1,
    .sp.wfH = 1,

    .tuner.stFont = &fontterminus32,
    .tuner.bar.sc = 72,
    .tuner.bar.sw = 1,
    .tuner.bar.barY = 36,
    .tuner.bar.barW = 144,
    .tuner.bar.half = 5,
    .tuner.bar.middle = 2,
    .tuner.iconSpace = 2,

    .iconSet = &iconsamp24,
    .lblFont = &fontterminus32,
};

const Layout *lt176x132Get(void)
{
    return &lt176x132;
}
