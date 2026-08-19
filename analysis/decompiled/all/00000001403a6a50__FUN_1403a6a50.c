// Function: FUN_1403a6a50
// Addr: 1403a6a50
// Size: 35 bytes


ulonglong FUN_1403a6a50(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  int iVar5;
  code *pcStack_18;
  undefined8 uStack_10;
  
  puVar4 = &DAT_14045dde0;
  uVar2 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar2 == 0) {
    pbVar3 = (byte *)&DAT_14045dde0;
  }
  else {
    pbVar3 = (byte *)((ulonglong)uVar2 + param_1);
  }
  uVar1 = 0;
  iVar5 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
  if (iVar5 == 1) {
    uVar1 = FUN_1403c71c0(pbVar3,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar5 != 2) goto code_r0x0001403a6aca;
    uVar1 = FUN_1403c7240();
  }
  if ((uint)uVar1 != 0xffffffff) {
    if ((uint)uVar1 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
      pbVar3 = (byte *)(param_1 + ((uVar1 & 0xffffffff) + 3) * 2);
    }
    else {
      pbVar3 = (byte *)&DAT_14045dde0;
    }
    uVar2 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
    if (uVar2 != 0) {
      puVar4 = (undefined8 *)((ulonglong)uVar2 + param_1);
    }
    uStack_10 = 0;
    pcStack_18 = FUN_1403ec2a0;
    uVar1 = func_0x0001403aa510(puVar4,param_2,&pcStack_18);
    return uVar1;
  }
code_r0x0001403a6aca:
  return uVar1 & 0xffffffffffffff00;
}

