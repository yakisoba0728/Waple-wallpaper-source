// Function: FUN_1401b3310
// Addr: 1401b3310
// Size: 275 bytes


void FUN_1401b3310(undefined8 param_1,ulonglong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if (param_2 == 0) {
    return;
  }
  puVar2 = *(undefined8 **)(param_2 + 0x78);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x80);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  piVar1 = (int *)(*(longlong *)(param_2 + 0x100) + 0x28);
  *piVar1 = *piVar1 + -1;
  puVar2 = *(undefined8 **)(param_2 + 200);
  for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
    *(int *)(puVar3[2] + 0x34) = *(int *)(puVar3[2] + 0x34) + -1;
  }
  lVar4 = *(longlong *)(param_2 + 0x100);
  plVar5 = *(longlong **)(lVar4 + 0xc0);
  lVar6 = *(longlong *)(lVar4 + 0xd0);
  uVar10 = ((((((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (longlong)param_2 >> 8 & 0xffU) * 0x100000001b3 ^ (longlong)param_2 >> 0x10 & 0xffU
                ) * 0x100000001b3 ^ (longlong)param_2 >> 0x18 & 0xffU) * 0x100000001b3 ^
              (longlong)param_2 >> 0x20 & 0xffU) * 0x100000001b3 ^ (longlong)param_2 >> 0x28 & 0xffU
             ) * 0x100000001b3 ^ (longlong)param_2 >> 0x30 & 0xffU) * 0x100000001b3 ^
           (longlong)param_2 >> 0x38 & 0xffU) * 0x100000001b3 & *(ulonglong *)(lVar4 + 0xe8);
  plVar9 = *(longlong **)(lVar6 + 8 + uVar10 * 0x10);
  if (plVar9 == plVar5) {
code_r0x0001401b3461:
    plVar9 = (longlong *)0x0;
  }
  else {
    uVar7 = plVar9[2];
    while (param_2 != uVar7) {
      if (plVar9 == *(longlong **)(lVar6 + uVar10 * 0x10)) goto code_r0x0001401b3461;
      plVar9 = (longlong *)plVar9[1];
      uVar7 = plVar9[2];
    }
  }
  if (plVar9 != (longlong *)0x0) {
    plVar8 = *(longlong **)(lVar6 + uVar10 * 0x10);
    if (*(longlong **)(lVar6 + 8 + uVar10 * 0x10) == plVar9) {
      if (plVar8 == plVar9) {
        *(longlong **)(lVar6 + uVar10 * 0x10) = plVar5;
        *(longlong **)(lVar6 + 8 + uVar10 * 0x10) = plVar5;
      }
      else {
        *(longlong *)(lVar6 + 8 + uVar10 * 0x10) = plVar9[1];
      }
    }
    else if (plVar8 == plVar9) {
      *(longlong *)(lVar6 + uVar10 * 0x10) = *plVar9;
    }
    lVar6 = *plVar9;
    *(longlong *)(lVar4 + 200) = *(longlong *)(lVar4 + 200) + -1;
    *(longlong *)plVar9[1] = lVar6;
    *(longlong *)(lVar6 + 8) = plVar9[1];
    func_0x00014028b040(plVar9,0x18);
  }
  func_0x00014000dab0(param_2 + 0xd8);
  func_0x000140049410(param_2 + 200);
                    /* WARNING: Subroutine does not return */
  FUN_140017310(param_2 + 0x58);
}

