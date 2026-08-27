// Function: FUN_14007d100
// Addr: 14007d100
// Size: 182 bytes


void FUN_14007d100(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  for (lVar6 = *(longlong *)(param_1 + 0x18); lVar6 != lVar2; lVar6 = lVar6 + 0x48) {
    FUN_140017240(lVar6 + 0x28);
    FUN_140017240(lVar6);
  }
  uVar5 = *(ulonglong *)(param_1 + 8);
  uVar4 = *(longlong *)(param_1 + 0x10) * 0x48;
  if (0xfff < uVar4) {
    plVar1 = (longlong *)(uVar5 - 8);
    uVar5 = (uVar5 - *plVar1) - 8;
    if (uVar5 < 0x20) {
      thunk_FUN_14028af80(*plVar1,uVar4 + 0x27);
      return;
    }
    uVar4 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
  }
  thunk_FUN_14028af80(uVar5,uVar4);
  return;
}

