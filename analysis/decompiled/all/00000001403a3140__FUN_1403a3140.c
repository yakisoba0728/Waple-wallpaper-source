// Function: FUN_1403a3140
// Addr: 1403a3140
// Size: 170 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403a3140(uint *param_1,undefined4 param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  
  if ((int)param_1[2] <= (int)param_1[3]) {
    cVar3 = FUN_1403a4b60(param_1 + 2,param_1[3] + 1);
    if (cVar3 == '\0') {
      plVar7 = &DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
      _DAT_1404e4f28 = DAT_14045dd18;
      goto LAB_1403a31a4;
    }
  }
  plVar7 = (longlong *)((ulonglong)param_1[3] * 0x10 + *(longlong *)(param_1 + 4));
  param_1[3] = param_1[3] + 1;
  lVar2 = param_4[1];
  *plVar7 = *param_4;
  plVar7[1] = lVar2;
LAB_1403a31a4:
  *(undefined4 *)(plVar7 + 1) = param_2;
  uVar1 = *param_1;
  uVar6 = 0;
  if (uVar1 <= *(uint *)(param_3 + 0x10)) {
    uVar6 = *(int *)(param_3 + 0x10) - uVar1;
  }
  uVar5 = *(int *)(param_3 + 0x14) - uVar1;
  *plVar7 = (ulonglong)uVar1 + *(longlong *)(param_3 + 8);
  uVar4 = (undefined1)uVar5;
  if (uVar6 <= uVar5) {
    uVar4 = (undefined1)uVar6;
  }
  *(undefined1 *)((longlong)plVar7 + 0xc) = uVar4;
  *param_1 = *(uint *)(param_3 + 0x14);
  return;
}

