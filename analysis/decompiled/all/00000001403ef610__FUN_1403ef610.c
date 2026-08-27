// Function: FUN_1403ef610
// Addr: 1403ef610
// Size: 351 bytes


void FUN_1403ef610(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  fVar4 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,0);
  lVar1 = *(longlong *)(param_2 + 0x10);
  fVar4 = ((float)(int)(short)((ushort)*(byte *)(param_1 + 5) +
                              (ushort)*(byte *)(param_1 + 4) * 0x100) + fVar4) * DAT_140471a5c *
          DAT_140492834;
  uVar5 = FUN_14041a2e0(fVar4);
  uVar6 = FUN_14041a9c0(fVar4);
  uVar2 = 0;
  if (*(undefined8 **)(lVar1 + 0x98) != (undefined8 *)0x0) {
    uVar2 = **(undefined8 **)(lVar1 + 0x98);
  }
  (**(code **)(lVar1 + 0x10))
            (lVar1,*(undefined8 *)(param_2 + 0x18),uVar5,uVar6,uVar6 ^ DAT_140492ff0,uVar5,0,0,uVar2
            );
  uVar6 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 1) * 0x10000 +
          (uint)*(byte *)(param_1 + 3);
  if (uVar6 == 0) {
    puVar3 = &DAT_14045dd10;
  }
  else {
    puVar3 = (undefined8 *)((ulonglong)uVar6 + param_1);
  }
  if ((0 < *(int *)(param_2 + 0x80)) && (0 < *(int *)(param_2 + 0x84))) {
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + -1;
    *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + -1;
    FUN_1403786f0(puVar3,local_res8,param_2);
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
  }
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar2 = 0;
  if (*(longlong *)(lVar1 + 0x98) != 0) {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001403ef76b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))(lVar1,*(undefined8 *)(param_2 + 0x18),uVar2);
  return;
}

