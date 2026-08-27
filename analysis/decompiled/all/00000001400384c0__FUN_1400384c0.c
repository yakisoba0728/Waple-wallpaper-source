// Function: FUN_1400384c0
// Addr: 1400384c0
// Size: 123 bytes


void FUN_1400384c0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = uVar4;
    puVar3 = auStack_48;
    if (0xfff < (ulonglong)(((longlong)(param_1[2] - uVar4) >> 3) * 8)) {
      uVar2 = *(ulonglong *)(uVar4 - 8);
      uVar4 = (uVar4 - uVar2) - 8;
      puVar3 = auStack_48;
      if (0x1f < uVar4) {
        pcVar1 = (code *)swi(0x29);
        uVar2 = uVar4;
        (*pcVar1)(5);
        puVar3 = auStack_40;
      }
    }
    *(undefined8 *)(puVar3 + -8) = 0x14003851f;
    thunk_FUN_14028af80(uVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 8;
  param_1[2] = param_2 + param_4 * 8;
  return;
}

