// Function: FUN_1403a31f0
// Addr: 1403a31f0
// Size: 156 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403a31f0(longlong param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = (ulonglong)param_2;
  lVar7 = (uVar6 + 6) * 0x10 + param_1;
  uVar5 = *(int *)(lVar7 + 4) + 1;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  cVar3 = FUN_1403a4b60(lVar7,uVar5,0);
  if (cVar3 == '\0') {
    puVar4 = &DAT_1404e4f20;
    DAT_1404e4f20 = DAT_14045dd10;
    _DAT_1404e4f28 = DAT_14045dd18;
  }
  else {
    uVar2 = *(uint *)(lVar7 + 4);
    if ((uVar2 < uVar5) && ((uVar5 - uVar2 & 0xfffffff) != 0)) {
      FUN_1404217a0((ulonglong)uVar2 * 0x10 + *(longlong *)(lVar7 + 8),0,(uVar5 - uVar2) * 0x10);
    }
    *(uint *)(lVar7 + 4) = uVar5;
    puVar4 = (undefined8 *)((ulonglong)(uVar5 - 1) * 0x10 + *(longlong *)(lVar7 + 8));
  }
  *(undefined4 *)puVar4 = *(undefined4 *)(param_1 + 0x48 + uVar6 * 4);
  puVar4[1] = param_3;
  piVar1 = (int *)(param_1 + 0x48 + uVar6 * 4);
  *piVar1 = *piVar1 + 1;
  return;
}

