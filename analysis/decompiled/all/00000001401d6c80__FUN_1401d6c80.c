// Function: FUN_1401d6c80
// Addr: 1401d6c80
// Size: 162 bytes


void FUN_1401d6c80(longlong param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  uVar6 = (((((ulonglong)(param_2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)(param_2 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(param_2 >> 0x10 & 0xff))
           * 0x100000001b3 ^ (ulonglong)(param_2 >> 0x18)) * 0x100000001b3 &
          *(ulonglong *)(param_1 + 0x1c8);
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x1b0) + 8 + uVar6 * 0x10);
  if (plVar7 == *(longlong **)(param_1 + 0x1a0)) {
LAB_1401d6d20:
    plVar7 = (longlong *)0x0;
  }
  else {
    uVar2 = *(uint *)(plVar7 + 2);
    while (param_2 != uVar2) {
      if (plVar7 == *(longlong **)(*(longlong *)(param_1 + 0x1b0) + uVar6 * 0x10))
      goto LAB_1401d6d20;
      plVar7 = (longlong *)plVar7[1];
      uVar2 = *(uint *)(plVar7 + 2);
    }
  }
  if ((plVar7 != (longlong *)0x0) && (plVar7 != *(longlong **)(param_1 + 0x1a0))) {
    piVar1 = (int *)(plVar7[3] + 0x230);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1401d7bc0();
      uVar6 = *(ulonglong *)(param_1 + 0x1c8) &
              (((((ulonglong)*(byte *)(plVar7 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar7 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar7 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)plVar7 + 0x13)) * 0x100000001b3;
      lVar3 = *(longlong *)(param_1 + 0x1b0);
      plVar4 = *(longlong **)(lVar3 + uVar6 * 0x10);
      if (*(longlong **)(lVar3 + 8 + uVar6 * 0x10) == plVar7) {
        if (plVar4 == plVar7) {
          uVar5 = *(undefined8 *)(param_1 + 0x1a0);
          *(undefined8 *)(lVar3 + uVar6 * 0x10) = uVar5;
          *(undefined8 *)(lVar3 + 8 + uVar6 * 0x10) = uVar5;
        }
        else {
          *(longlong *)(lVar3 + 8 + uVar6 * 0x10) = plVar7[1];
        }
      }
      else if (plVar4 == plVar7) {
        *(longlong *)(lVar3 + uVar6 * 0x10) = *plVar7;
      }
      lVar3 = *plVar7;
      *(longlong *)(param_1 + 0x1a8) = *(longlong *)(param_1 + 0x1a8) + -1;
      *(longlong *)plVar7[1] = lVar3;
      *(longlong *)(lVar3 + 8) = plVar7[1];
      func_0x00014028b040(plVar7,0x20);
    }
  }
  return;
}

