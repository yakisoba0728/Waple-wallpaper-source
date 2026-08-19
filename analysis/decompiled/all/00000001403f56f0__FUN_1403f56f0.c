// Function: FUN_1403f56f0
// Addr: 1403f56f0
// Size: 105 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403f56f0(longlong param_1,float *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  puVar5 = &DAT_1404e4ff0;
  uVar1 = *(uint *)(param_1 + 4) - 1;
  if (uVar1 < *(uint *)(param_1 + 4)) {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 0x18);
  }
  else {
    puVar4 = &DAT_1404e4ff0;
    _DAT_1404e5000 = CONCAT44(DAT_14045ddf0._4_4_,(undefined4)DAT_14045ddf0);
    DAT_1404e4ff0 = CONCAT44(DAT_14045dde0._4_4_,(undefined4)DAT_14045dde0);
    DAT_1404e4ff8 = CONCAT44(_DAT_14045ddec,_DAT_14045dde8);
  }
  FUN_14040d0d0(puVar4);
  if ((param_2[2] <= *param_2) || (uStack_28 = 1, param_2[3] <= param_2[1])) {
    uStack_28 = 2;
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
    DAT_1404e4ff0 = CONCAT44(DAT_14045dde0._4_4_,(undefined4)DAT_14045dde0);
    DAT_1404e4ff8 = CONCAT44(_DAT_14045ddec,_DAT_14045dde8);
    _DAT_1404e5000 = CONCAT44(DAT_1404e5004,(undefined4)DAT_14045ddf0);
  }
  FUN_1403e6460(&uStack_28,puVar5);
  if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x14)) {
    cVar3 = func_0x0001403a49d0(param_1 + 0x10,*(int *)(param_1 + 0x14) + 1,0);
    if (cVar3 == '\0') {
      DAT_1404e4ff0 = CONCAT44(DAT_14045dde0._4_4_,(undefined4)DAT_14045dde0);
      DAT_1404e4ff8 = CONCAT44(_DAT_14045ddec,_DAT_14045dde8);
      _DAT_1404e5000 = CONCAT44(DAT_1404e5004,(undefined4)DAT_14045ddf0);
      return;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x14) = uVar1 + 1;
  puVar5 = (undefined8 *)(lVar2 + (ulonglong)uVar1 * 0x14);
  *puVar5 = CONCAT44(fStack_24,uStack_28);
  puVar5[1] = CONCAT44(fStack_1c,fStack_20);
  *(float *)(lVar2 + 0x10 + (ulonglong)uVar1 * 0x14) = fStack_18;
  return;
}

