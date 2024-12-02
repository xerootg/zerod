#include "filament_page.h"

#include "ui/pages/page_helper.h"
#include "printer/send/send_cmd.h"

namespace ui {
namespace filament_page {

static lv_obj_t *_load = nullptr;
static lv_obj_t *_unload = nullptr;

void _load_click_handler(lv_event_t *e);
void _unload_click_handler(lv_event_t *e);

lv_obj_t *init(lv_obj_t *parent, const printer::State &state) {
  lv_obj_t *page = page_helper::create_page(parent, "FILAMENT");

  _load = page_helper::create_center_button(
      page,
      0, -38,
      160, 60,
      "LOAD",
      _load_click_handler
  );

  #ifdef COLOR_LOAD_BG
    lv_obj_set_style_bg_color(_load, COLOR_LOAD_BG, LV_PART_MAIN);
  #endif

  _unload = page_helper::create_center_button(
      page,
      0, 28,
      160, 60,
      "UNLOAD",
      _unload_click_handler
  );

  #ifdef COLOR_UNLOAD_BG
    lv_obj_set_style_bg_color(_unload, COLOR_UNLOAD_BG, LV_PART_MAIN);
  #endif

  return page;
}

void printer_update(const printer::State &state) {
  lv_obj_set_state(_load, LV_STATE_DISABLED, state.working);
  lv_obj_set_state(_unload, LV_STATE_DISABLED, state.working);
}

void _load_click_handler(lv_event_t *e) {
  printer::send::send_gcode("LOAD_FILAMENT");
}

void _unload_click_handler(lv_event_t *e) {
  printer::send::send_gcode("UNLOAD_FILAMENT");
}

}
}