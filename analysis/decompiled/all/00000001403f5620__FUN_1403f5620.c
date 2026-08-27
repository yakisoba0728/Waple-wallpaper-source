// Function: FUN_1403f5620
// Addr: 1403f5620
// Size: 313 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403f5620(longlong param_1,float *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  puVar5 = &DAT_1404e4f20;
  uVar1 = *(uint *)(param_1 + 4) - 1;
  if (uVar1 < *(uint *)(param_1 + 4)) {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 0x18);
  }
  else {
    puVar4 = &DAT_1404e4f20;
    _DAT_1404e4f30 = CONCAT44(DAT_14045dd20._4_4_,(undefined4)DAT_14045dd20);
    DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
    _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
  }
  FUN_14040d000(puVar4);
  if ((param_2[2] <= *param_2) || (local_28 = 1, param_2[3] <= param_2[1])) {
    local_28 = 2;
  }
  fStack_24 = *param_2;
  fStack_20 = param_2[1];
  fStack_1c = param_2[2];
  fStack_18 = param_2[3];
  uVar1 = *(uint *)(param_1 + 0x14) - 1;
  if (uVar1 < *(uint *)(param_1 + 0x14)) {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 0x14);
  }
  else {
    DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
    _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
    _DAT_1404e4f30 = CONCAT44(DAT_1404e4f34,(undefined4)DAT_14045dd20);
  }
  FUN_1403e6390(&local_28,puVar5);
  if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x14)) {
    cVar3 = FUN_1403a4900(param_1 + 0x10,*(int *)(param_1 + 0x14) + 1,0);
    if (cVar3 == '\0') {
      DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
      _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
      _DAT_1404e4f30 = CONCAT44(DAT_1404e4f34,(undefined4)DAT_14045dd20);
      return;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x14) = uVar1 + 1;
  puVar5 = (undefined8 *)(lVar2 + (ulonglong)uVar1 * 0x14);
  *puVar5 = CONCAT44(fStack_24,local_28);
  puVar5[1] = CONCAT44(fStack_1c,fStack_20);
  *(float *)(lVar2 + 0x10 + (ulonglong)uVar1 * 0x14) = fStack_18;
  return;
}

