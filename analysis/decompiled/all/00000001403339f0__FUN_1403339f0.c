// Function: FUN_1403339f0
// Addr: 1403339f0
// Size: 111 bytes


uint FUN_1403339f0(undefined8 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  if (0 < *(int *)(param_1 + 3)) {
    return 0x3b;
  }
  do {
    pbVar2 = (byte *)*param_1;
    if ((byte *)param_1[2] <= pbVar2) {
      *(undefined4 *)(param_1 + 3) = 3;
      return 0xffffffff;
    }
    bVar1 = *pbVar2;
    *param_1 = pbVar2 + 1;
  } while ((bVar1 == 0x20) || (bVar1 == 9));
  if ((bVar1 == 0xd) || (bVar1 == 10)) {
    *(undefined4 *)(param_1 + 3) = 2;
    return (uint)bVar1;
  }
  if (bVar1 == 0x3b) {
    *(undefined4 *)(param_1 + 3) = 1;
    return 0x3b;
  }
  if (bVar1 != 0x1a) {
    return (uint)bVar1;
  }
  *(undefined4 *)(param_1 + 3) = 3;
  return 0x1a;
}

