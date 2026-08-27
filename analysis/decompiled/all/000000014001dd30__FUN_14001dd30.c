// Function: FUN_14001dd30
// Addr: 14001dd30
// Size: 327 bytes


undefined8 * FUN_14001dd30(undefined8 *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  
  lVar2 = FUN_140086de0(param_2,"location","");
  lVar3 = FUN_140086de0(param_2,"monitor","");
  if (*(char *)(lVar2 + 8) == '\x04') {
    FUN_140085cc0(lVar2,&local_48);
  }
  else {
    local_38 = 0;
    uStack_40 = 0;
    local_48 = 0;
    uStack_30 = 0xf;
  }
  if (*(byte *)(lVar3 + 8) - 1 < 3) {
    iVar1 = FUN_140085ee0(lVar3);
    if (iVar1 < 0) goto LAB_14001ddd3;
LAB_14001ddd8:
    if (iVar1 < (int)(DAT_1404e8ed0 - DAT_1404e8ec8 >> 3) * -0xf0f0f0f) goto LAB_14001de0a;
  }
  else {
    iVar1 = -1;
LAB_14001ddd3:
    if (param_3 != '\0') goto LAB_14001ddd8;
  }
  iVar1 = 0;
LAB_14001de0a:
  if (((local_38 == 0) && (0 < (int)(DAT_1404e8ed0 - DAT_1404e8ec8 >> 3) * -0xf0f0f0f)) &&
     (-1 < iVar1)) {
    lVar2 = (longlong)iVar1 * 0x88;
    puVar4 = (undefined8 *)(lVar2 + 0x18 + DAT_1404e8ec8);
    if (&local_48 != puVar4) {
      if (0xf < *(ulonglong *)(lVar2 + 0x30 + DAT_1404e8ec8)) {
        puVar4 = (undefined8 *)*puVar4;
      }
      FUN_14000f880(&local_48,puVar4,*(undefined8 *)(lVar2 + 0x28 + DAT_1404e8ec8));
    }
  }
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[2] = local_38;
  param_1[3] = uStack_30;
  return param_1;
}

