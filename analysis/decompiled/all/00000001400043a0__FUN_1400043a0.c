// Function: FUN_1400043a0
// Addr: 1400043a0
// Size: 292 bytes


void FUN_1400043a0(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_38 [2];
  char local_28 [4];
  char acStack_24 [2];
  char cStack_22;
  undefined1 uStack_21;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  FUN_140153760(&DAT_1404e82d0);
  local_28[0] = s_visible_1404903a0[0];
  local_28[1] = s_visible_1404903a0[1];
  local_28[2] = s_visible_1404903a0[2];
  local_28[3] = s_visible_1404903a0[3];
  acStack_24[0] = s_visible_1404903a0[4];
  acStack_24[1] = s_visible_1404903a0[5];
  cStack_22 = s_visible_1404903a0[6];
  local_20 = 0;
  local_18 = 7;
  local_10 = 0xf;
  uStack_21 = 0;
  FUN_14015a000(&DAT_1404e82d0,local_38,local_28);
  if (0xf < local_10) {
    lVar2 = CONCAT17(uStack_21,CONCAT16(cStack_22,CONCAT24(acStack_24,local_28)));
    uVar4 = local_10 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(lVar3,uVar4);
  }
  FUN_14000f880(local_38[0] + 0x68,"visible",7);
  *(undefined4 *)(local_38[0] + 0x34) = 0x120;
  *(code **)(local_38[0] + 0x38) = FUN_1401e1a90;
  *(undefined4 *)(local_38[0] + 0x30) = 6;
  *(code **)(local_38[0] + 0x40) = FUN_1401e1b60;
  *(undefined1 **)(local_38[0] + 0x48) = &LAB_1401e1c60;
  *(undefined1 **)(local_38[0] + 0x50) = &LAB_1401e1c90;
  *(undefined8 *)(local_38[0] + 0x58) = 0;
  FUN_14028b410(FUN_1404250a0);
  return;
}

