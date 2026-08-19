// Function: FUN_14000dba0
// Addr: 14000dba0
// Size: 123 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_14000dba0(undefined8 param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[1] = 0;
  local_28[0] = 0;
  local_28[3] = 0xf;
  uVar2 = func_0x00014000fd60();
  FUN_14000df10(uVar2,local_28);
  if ((ulonglong)local_28[3] < 0x10) {
    if (0xf < (ulonglong)param_2[3]) {
      lVar4 = *param_2;
      plVar6 = local_28;
      lVar3 = lVar4;
      if ((0xfff < param_2[3] + 1U) &&
         (lVar3 = *(longlong *)(lVar4 + -8), plVar6 = local_28, 0x1f < (lVar4 - lVar3) - 8U)) {
        pcVar1 = (code *)swi(0x29);
        lVar3 = (*pcVar1)(5);
        plVar6 = local_28 + 1;
      }
      plVar6[0xffffffffffffffff] = 0x14001735c;
      func_0x00014028b040(lVar3);
    }
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    return;
  }
  uVar5 = local_28[3] + 1;
  lVar4 = local_28[0];
  if (0xfff < uVar5) {
    lVar4 = *(longlong *)(local_28[0] + -8);
    if (0x1f < (local_28[0] - lVar4) - 8U) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar5 = local_28[3] + 0x28;
  }
  func_0x00014028b040(lVar4,uVar5);
  return;
}

