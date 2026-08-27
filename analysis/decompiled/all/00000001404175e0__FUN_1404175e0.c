// Function: FUN_1404175e0
// Addr: 1404175e0
// Size: 89 bytes


bool FUN_1404175e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  
  puVar1 = (undefined8 *)FUN_1403c4f70(param_1 + 0x140);
  pbVar3 = (byte *)&DAT_14045dd10;
  puVar2 = &DAT_14045dd10;
  if ((undefined8 *)*puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
  }
  if (3 < *(uint *)(puVar2 + 3)) {
    pbVar3 = (byte *)puVar2[2];
  }
  return (((uint)*pbVar3 * 0x100 + (uint)pbVar3[1]) * 0x100 + (uint)pbVar3[2]) * 0x100 +
         (uint)pbVar3[3] != 0;
}

