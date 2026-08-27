// Function: FUN_14010de40
// Addr: 14010de40
// Size: 255 bytes


undefined8 * FUN_14010de40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1404897b8;
  param_1[0x2b] = &PTR_LAB_1404897a0;
  (**(code **)(*(longlong *)param_1[0x13] + 0x28))();
  FUN_1402d3dd0(param_1[0x36]);
  FUN_1402d3dd0(param_1[0x35]);
  FUN_1402d3dd0(param_1[0x34]);
  FUN_140017240(param_1 + 0x94);
  FUN_1400caf90(param_1 + 0x85);
  FUN_14003f730(param_1 + 0x59);
  FUN_14000d9e0(param_1 + 0x54);
  FUN_140030c70(param_1 + 0x52);
  FUN_140016770(param_1 + 0x4d);
  FUN_14007ac00(param_1 + 0x4b);
  param_1[0x4a] = &PTR_FUN_140489890;
  if (*(int *)(param_1 + 0x3b) == 0) {
    param_1[0x2b] = &PTR_FUN_140488a28;
    FUN_1400fdc50(param_1);
    if ((param_2 & 1) != 0) {
      thunk_FUN_14028af80(param_1,0x4c0);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140015110();
}

