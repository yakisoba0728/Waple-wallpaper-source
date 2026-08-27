// Function: FUN_1401d4400
// Addr: 1401d4400
// Size: 152 bytes


void FUN_1401d4400(undefined8 param_1,longlong param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 local_48 [72];
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x4b8);
  if ((((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) ||
      ((ulonglong)(*(longlong *)(lVar1 + 0x2d0) - *(longlong *)(lVar1 + 0x2c8) >> 6) <=
       (ulonglong)param_3)) ||
     ((*(longlong *)(lVar1 + 0x340) == 0 ||
      (puVar4 = (undefined *)(*(longlong *)(lVar1 + 0x348) + (ulonglong)param_3 * 0x40),
      *(longlong *)(lVar1 + 0x348) == 0)))) {
    puVar4 = &DAT_1404e10f0;
  }
  puVar3 = (undefined8 *)
           FUN_14005ecb0(local_48,puVar4,*(longlong *)(param_2 + 0x68) + (ulonglong)param_3 * 0x40);
  uVar2 = puVar3[1];
  *param_4 = *puVar3;
  param_4[1] = uVar2;
  uVar2 = puVar3[3];
  param_4[2] = puVar3[2];
  param_4[3] = uVar2;
  uVar2 = puVar3[5];
  param_4[4] = puVar3[4];
  param_4[5] = uVar2;
  uVar2 = puVar3[7];
  param_4[6] = puVar3[6];
  param_4[7] = uVar2;
  return;
}

