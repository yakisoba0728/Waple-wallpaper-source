// Function: FUN_14015f880
// Addr: 14015f880
// Size: 80 bytes


void FUN_14015f880(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  plVar1 = *(longlong **)(param_1 + 0xf8);
  lVar2 = *(longlong *)(param_1 + 0x108);
  uVar7 = ((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
            0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff) *
          0x100000001b3 & *(ulonglong *)(param_1 + 0x120);
  plVar6 = *(longlong **)(lVar2 + 8 + uVar7 * 0x10);
  if (plVar6 == plVar1) {
code_r0x00014015f914:
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[2];
    while ((int)param_2 != iVar4) {
      if (plVar6 == *(longlong **)(lVar2 + uVar7 * 0x10)) goto code_r0x00014015f914;
      plVar6 = (longlong *)plVar6[1];
      iVar4 = (int)plVar6[2];
    }
  }
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  plVar3 = *(longlong **)(lVar2 + uVar7 * 0x10);
  if (*(longlong **)(lVar2 + 8 + uVar7 * 0x10) == plVar6) {
    if (plVar3 == plVar6) {
      *(longlong **)(lVar2 + uVar7 * 0x10) = plVar1;
      *(longlong **)(lVar2 + 8 + uVar7 * 0x10) = plVar1;
    }
    else {
      *(longlong *)(lVar2 + 8 + uVar7 * 0x10) = plVar6[1];
    }
  }
  else if (plVar3 == plVar6) {
    *(longlong *)(lVar2 + uVar7 * 0x10) = *plVar6;
  }
  lVar2 = *plVar6;
  *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + -1;
  *(longlong *)plVar6[1] = lVar2;
  *(longlong *)(lVar2 + 8) = plVar6[1];
  plVar1 = (longlong *)plVar6[10];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar6 + 3);
    plVar6[10] = 0;
  }
  if ((plVar6 != (longlong *)0x0) && (iVar4 = (*DAT_1404264b8)(DAT_1404e4fa0,0,plVar6), iVar4 == 0))
  {
    uVar5 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar5);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

