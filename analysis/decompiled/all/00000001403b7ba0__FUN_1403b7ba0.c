// Function: FUN_1403b7ba0
// Addr: 1403b7ba0
// Size: 110 bytes


undefined8 FUN_1403b7ba0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x5c) * 0x14);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar2 = *(undefined4 *)
           (*(longlong *)(param_1 + 0x70) + 0x10 + (ulonglong)*(uint *)(param_1 + 0x5c) * 0x14);
  uVar7 = FUN_1403eaf70(param_1,0,1);
  if ((char)uVar7 == '\0') {
    return uVar7;
  }
  uVar3 = *(uint *)(param_1 + 100);
  lVar4 = *(longlong *)(param_1 + 0x78);
  puVar1 = (undefined8 *)(lVar4 + (ulonglong)uVar3 * 0x14);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  *(undefined4 *)(lVar4 + 0x10 + (ulonglong)uVar3 * 0x14) = uVar2;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
}

