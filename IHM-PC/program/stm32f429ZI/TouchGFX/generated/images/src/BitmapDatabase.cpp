// 4.15.0 0x6f2d6d0a
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_progressindicators_bg_large_circle_indicator_bg_line_full[]; // BITMAP_BLUE_PROGRESSINDICATORS_BG_LARGE_CIRCLE_INDICATOR_BG_LINE_FULL_ID = 0, Size: 184x184 pixels
extern const unsigned char image_blue_togglebars_toggle_round_large_button_off[]; // BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_OFF_ID = 1, Size: 128x38 pixels
extern const unsigned char image_blue_togglebars_toggle_round_large_button_on[]; // BITMAP_BLUE_TOGGLEBARS_TOGGLE_ROUND_LARGE_BUTTON_ON_ID = 2, Size: 128x38 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { image_blue_progressindicators_bg_large_circle_indicator_bg_line_full, 0, 184, 184, 165, 62, 14, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 60, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_togglebars_toggle_round_large_button_off, 0, 128, 38, 13, 1, 102, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 36, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_togglebars_toggle_round_large_button_on, 0, 128, 38, 13, 1, 102, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 36, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
