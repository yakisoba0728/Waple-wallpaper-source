// Function: FUN_14035afd0
// Addr: 14035afd0
// Size: 208 bytes


undefined8 FUN_14035afd0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int local_res8 [8];
  
  uVar4 = *(ulonglong *)(param_1 + 0x80);
  if (*(uint *)(param_1 + 0x78) < uVar4) {
    return 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x70);
  uVar3 = (uVar4 >> 1) + 4 + uVar4;
  if (puVar2 == (undefined8 *)(param_1 + 0x88)) {
    uVar4 = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    puVar2 = (undefined8 *)0x0;
  }
  if ((uVar3 < 0x10001) || (uVar3 = 0x10000, uVar4 != 0x10000)) {
    puVar2 = (undefined8 *)
             FUN_1402f7ff0(*(undefined8 *)(param_1 + 0xd0),1,uVar4 & 0xffffffff,uVar3 & 0xffffffff,
                           puVar2,local_res8);
    *(undefined8 **)(param_1 + 0x70) = puVar2;
    if (local_res8[0] == 0) {
      if (uVar4 == 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x90);
        *puVar2 = *(undefined8 *)(param_1 + 0x88);
        puVar2[1] = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0xa0);
        puVar2[2] = *(undefined8 *)(param_1 + 0x98);
        puVar2[3] = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0xb0);
        puVar2[4] = *(undefined8 *)(param_1 + 0xa8);
        puVar2[5] = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0xc0);
        puVar2[6] = *(undefined8 *)(param_1 + 0xb8);
        puVar2[7] = uVar1;
      }
      *(ulonglong *)(param_1 + 0x80) = uVar3;
      return 0;
    }
  }
  return 0xffffffff;
}

