// Function: FUN_1400ca780
// Addr: 1400ca780
// Size: 254 bytes


undefined8 FUN_1400ca780(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar2 = *param_2;
  lVar3 = *(longlong *)(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 8);
  uVar7 = (((((ulonglong)uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)(uVar2 >> 8) & 0xff) * 0x100000001b3 ^ (ulonglong)(byte)(uVar2 >> 0x10)) *
           0x100000001b3 ^ (ulonglong)(uVar2 >> 0x18)) * 0x100000001b3 &
          *(ulonglong *)(param_1 + 0x30);
  plVar6 = *(longlong **)(lVar3 + 8 + uVar7 * 0x10);
  if (plVar6 == plVar4) {
LAB_1400ca812:
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(plVar6 + 2);
    while (uVar2 != uVar1) {
      if (plVar6 == *(longlong **)(lVar3 + uVar7 * 0x10)) goto LAB_1400ca812;
      plVar6 = (longlong *)plVar6[1];
      uVar1 = *(uint *)(plVar6 + 2);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar3 + uVar7 * 0x10);
    if (*(longlong **)(lVar3 + 8 + uVar7 * 0x10) == plVar6) {
      if (plVar5 == plVar6) {
        *(longlong **)(lVar3 + uVar7 * 0x10) = plVar4;
        *(longlong **)(lVar3 + 8 + uVar7 * 0x10) = plVar4;
      }
      else {
        *(longlong *)(lVar3 + 8 + uVar7 * 0x10) = plVar6[1];
      }
    }
    else if (plVar5 == plVar6) {
      *(longlong *)(lVar3 + uVar7 * 0x10) = *plVar6;
    }
    lVar3 = *plVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    *(longlong *)plVar6[1] = lVar3;
    *(longlong *)(lVar3 + 8) = plVar6[1];
    thunk_FUN_14028af80(plVar6,0x18);
    return 1;
  }
  return 0;
}

