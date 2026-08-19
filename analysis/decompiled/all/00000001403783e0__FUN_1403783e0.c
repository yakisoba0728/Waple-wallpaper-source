// Function: FUN_1403783e0
// Addr: 1403783e0
// Size: 183 bytes


undefined8 FUN_1403783e0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  bVar1 = param_1[1];
  bVar2 = *param_1;
  uVar5 = 0;
  uVar6 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  if (uVar6 != 0) {
    do {
      if (uVar5 < (uint)param_1[4] * 0x100 + (uint)param_1[5]) {
        pbVar3 = param_1 + ((ulonglong)uVar5 + 3) * 2;
      }
      else {
        pbVar3 = (byte *)&DAT_14045dde0;
      }
      uVar4 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
      if (uVar4 == 0) {
        pbVar3 = (byte *)&DAT_14045dde0;
      }
      else {
        pbVar3 = param_1 + uVar4;
      }
      FUN_1403784a0(pbVar3,local_res8,param_3,(uint)bVar2 * 0x100 + (uint)bVar1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  return param_2;
}

