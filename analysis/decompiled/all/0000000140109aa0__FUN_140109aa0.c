// Function: FUN_140109aa0
// Addr: 140109aa0
// Size: 246 bytes


void FUN_140109aa0(longlong param_1,int param_2,uint param_3)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  ulonglong local_38;
  longlong lStack_30;
  longlong local_28;
  
  puVar5 = auStack_58;
  local_28 = 0;
  local_38 = 0;
  lStack_30 = 0;
  FUN_14005ae80(&local_38,param_2 * param_3 * 4);
  FUN_1404210f0(local_38,param_1,lStack_30 - local_38);
  uVar6 = local_38;
  uVar4 = 0;
  if (param_3 != 0) {
    param_2 = param_2 * 4;
    do {
      FUN_1404210f0((ulonglong)(uVar4 * param_2) + param_1,
                    ((param_3 - uVar4) + -1) * param_2 + uVar6,param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  if (uVar6 != 0) {
    uVar3 = local_28 - uVar6;
    if (0xfff < uVar3) {
      plVar1 = (longlong *)(uVar6 - 8);
      uVar6 = (uVar6 - *plVar1) - 8;
      if (uVar6 < 0x20) {
        thunk_FUN_14028af80(*plVar1,uVar3 + 0x27);
        return;
      }
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar5 = auStack_50;
    }
    *(undefined8 *)(puVar5 + -8) = 0x140109b90;
    thunk_FUN_14028af80(uVar6);
  }
  return;
}

