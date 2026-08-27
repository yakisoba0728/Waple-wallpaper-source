// Function: FUN_1403b3d20
// Addr: 1403b3d20
// Size: 316 bytes


void FUN_1403b3d20(longlong param_1,longlong param_2)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar3 == 0) {
    puVar4 = &DAT_14045dd10;
  }
  else {
    puVar4 = (undefined8 *)((ulonglong)uVar3 + param_1);
  }
  cVar1 = FUN_14036f9e0(puVar4,*(undefined8 *)(param_2 + 0x18));
  if (cVar1 != '\0') {
    uVar3 = 0;
    uVar6 = (uint)*(byte *)(param_1 + 8) * 0x100 + (uint)*(byte *)(param_1 + 9);
    if (uVar6 != 0) {
      do {
        if (uVar3 < (uint)*(byte *)(param_1 + 8) * 0x100 + (uint)*(byte *)(param_1 + 9)) {
          pbVar2 = (byte *)(param_1 + ((ulonglong)uVar3 + 5) * 2);
        }
        else {
          pbVar2 = (byte *)&DAT_14045dd10;
        }
        uVar5 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
        if (uVar5 == 0) {
          pbVar2 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar2 = (byte *)((ulonglong)uVar5 + param_1);
        }
        if (*(char *)(*(longlong *)(param_2 + 0x18) + 0x40) == '\0') {
          FUN_14036b6f0(*(longlong *)(param_2 + 0x18) + 0x10,pbVar2 + 2,
                        (uint)*pbVar2 * 0x100 + (uint)pbVar2[1],
                        ((uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 7) & 0xf] +
                         (uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 7) >> 4] +
                         (uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 5) & 0xf] +
                        (uint)(byte)(&DAT_140470560)[*(byte *)(param_1 + 5) >> 4]) * 2 + 2);
        }
        else {
          FUN_140373360();
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar6);
    }
  }
  return;
}

