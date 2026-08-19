// Function: FUN_1403d0c50
// Addr: 1403d0c50
// Size: 64 bytes


bool FUN_1403d0c50(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)&DAT_14045dde0;
  puVar1 = &DAT_14045dde0;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_1;
  }
  if (0x13 < *(uint *)(puVar1 + 3)) {
    pbVar2 = (byte *)puVar1[2];
  }
  return (((uint)*pbVar2 * 0x100 + (uint)pbVar2[1]) * 0x100 + (uint)pbVar2[2]) * 0x100 +
         (uint)pbVar2[3] != 0;
}

