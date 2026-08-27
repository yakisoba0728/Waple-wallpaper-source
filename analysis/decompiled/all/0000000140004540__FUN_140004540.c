// Function: FUN_140004540
// Addr: 140004540
// Size: 482 bytes


void FUN_140004540(void)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong local_38 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  FUN_140153760(&DAT_1404e84e0);
  uStack_20 = 0;
  local_18 = 7;
  local_10 = 0xf;
  local_28 = (ulonglong)
             CONCAT16(s_visible_1404903a0[6],
                      CONCAT24(s_visible_1404903a0._4_2_,s_visible_1404903a0._0_4_));
  FUN_14015a000(&DAT_1404e84e0,local_38,&local_28);
  if (0xf < local_10) {
    uVar4 = local_10 + 1;
    uVar3 = local_28;
    if (0xfff < uVar4) {
      uVar3 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar3) - 8) goto LAB_14000471a;
      uVar4 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar3,uVar4);
  }
  lVar2 = local_38[0];
  FUN_14000f880(local_38[0] + 0x68,"visible",7);
  *(undefined4 *)(lVar2 + 0x34) = 0xf0;
  *(code **)(lVar2 + 0x38) = FUN_1401e1a90;
  *(undefined4 *)(lVar2 + 0x30) = 6;
  *(code **)(lVar2 + 0x40) = FUN_1401e1b60;
  local_18 = 4;
  *(undefined1 **)(lVar2 + 0x48) = &LAB_1401e1c60;
  local_10 = 0xf;
  *(undefined1 **)(lVar2 + 0x50) = &LAB_1401e1c90;
  uStack_20 = 0;
  *(code **)(lVar2 + 0x58) = FUN_1401f1ca0;
  local_28 = (ulonglong)DAT_1404748b8;
  FUN_14015a000(&DAT_1404e84e0,local_38,&local_28);
  if (0xf < local_10) {
    uVar4 = local_10 + 1;
    uVar3 = local_28;
    if (0xfff < uVar4) {
      uVar3 = *(ulonglong *)(local_28 - 8);
      if (0x1f < (local_28 - uVar3) - 8) {
LAB_14000471a:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(uVar3,uVar4);
  }
  FUN_14000f880(local_38[0] + 0x68,&DAT_1404748b8,4);
  *(undefined4 *)(local_38[0] + 0x34) = 0xd0;
  *(code **)(local_38[0] + 0x38) = FUN_1401a4bc0;
  *(undefined4 *)(local_38[0] + 0x30) = 5;
  *(code **)(local_38[0] + 0x48) = FUN_1401a4d00;
  *(undefined1 **)(local_38[0] + 0x50) = &LAB_1401a4d60;
  FUN_14028b410(FUN_140425200);
  return;
}

