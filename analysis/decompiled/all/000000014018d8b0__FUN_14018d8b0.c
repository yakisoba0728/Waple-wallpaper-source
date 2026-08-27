// Function: FUN_14018d8b0
// Addr: 14018d8b0
// Size: 370 bytes


void FUN_14018d8b0(longlong param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x90);
  uVar7 = (((((ulonglong)(param_2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)(param_2 >> 8 & 0xff)) * 0x100000001b3 ^ (ulonglong)(param_2 >> 0x10 & 0xff))
           * 0x100000001b3 ^ (ulonglong)(param_2 >> 0x18)) * 0x100000001b3 &
          *(ulonglong *)(lVar3 + 0x1c28);
  plVar8 = *(longlong **)(*(longlong *)(lVar3 + 0x1c10) + 8 + uVar7 * 0x10);
  if (plVar8 == *(longlong **)(lVar3 + 0x1c00)) {
LAB_14018d950:
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar2 = *(uint *)(plVar8 + 2);
    while (param_2 != uVar2) {
      if (plVar8 == *(longlong **)(*(longlong *)(lVar3 + 0x1c10) + uVar7 * 0x10))
      goto LAB_14018d950;
      plVar8 = (longlong *)plVar8[1];
      uVar2 = *(uint *)(plVar8 + 2);
    }
  }
  if ((plVar8 != (longlong *)0x0) && (plVar8 != *(longlong **)(lVar3 + 0x1c00))) {
    piVar1 = (int *)(plVar8[3] + 0x230);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1401d7af0();
      uVar7 = *(ulonglong *)(lVar3 + 0x1c28) &
              (((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3;
      lVar4 = *(longlong *)(lVar3 + 0x1c10);
      plVar5 = *(longlong **)(lVar4 + uVar7 * 0x10);
      if (*(longlong **)(lVar4 + 8 + uVar7 * 0x10) == plVar8) {
        if (plVar5 == plVar8) {
          uVar6 = *(undefined8 *)(lVar3 + 0x1c00);
          *(undefined8 *)(lVar4 + uVar7 * 0x10) = uVar6;
          *(undefined8 *)(lVar4 + 8 + uVar7 * 0x10) = uVar6;
        }
        else {
          *(longlong *)(lVar4 + 8 + uVar7 * 0x10) = plVar8[1];
        }
      }
      else if (plVar5 == plVar8) {
        *(longlong *)(lVar4 + uVar7 * 0x10) = *plVar8;
      }
      lVar4 = *plVar8;
      *(longlong *)(lVar3 + 0x1c08) = *(longlong *)(lVar3 + 0x1c08) + -1;
      *(longlong *)plVar8[1] = lVar4;
      *(longlong *)(lVar4 + 8) = plVar8[1];
      thunk_FUN_14028af80(plVar8,0x20);
    }
  }
  return;
}

