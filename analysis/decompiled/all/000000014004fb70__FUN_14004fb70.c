// Function: FUN_14004fb70
// Addr: 14004fb70
// Size: 204 bytes


/* WARNING: Removing unreachable block (ram,0x00014004fbff) */

ulonglong FUN_14004fb70(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar1 = param_3[2];
  if (7 < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  uVar2 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar6 = uVar2;
  if (uVar1 < uVar2) {
    uVar6 = uVar1;
  }
  uVar4 = thunk_FUN_14028e250(param_2,param_3,uVar6);
  if (uVar4 != uVar6) {
    iVar5 = 1;
    if (*(ushort *)((longlong)param_2 + uVar4 * 2) < *(ushort *)((longlong)param_3 + uVar4 * 2)) {
      iVar5 = -1;
    }
    bVar3 = 0xff;
    if (-1 < iVar5) {
      bVar3 = 0;
    }
    return (ulonglong)(bVar3 >> 7);
  }
  if (uVar2 < uVar1) {
    return 1;
  }
  if (uVar2 <= uVar1) {
    return uVar4 & 0xffffffffffffff00;
  }
  return 0;
}

