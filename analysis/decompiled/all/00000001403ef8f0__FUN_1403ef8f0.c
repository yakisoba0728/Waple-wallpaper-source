// Function: FUN_1403ef8f0
// Addr: 1403ef8f0
// Size: 344 bytes


void FUN_1403ef8f0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  undefined1 local_res8 [32];
  
  fVar5 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,0);
  fVar6 = ((float)(int)(short)((ushort)*(byte *)(param_1 + 5) +
                              (ushort)*(byte *)(param_1 + 4) * 0x100) + fVar5) * DAT_140471a5c;
  fVar5 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,1);
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar2 = 0;
  if (*(undefined8 **)(lVar1 + 0x98) != (undefined8 *)0x0) {
    uVar2 = **(undefined8 **)(lVar1 + 0x98);
  }
  (**(code **)(lVar1 + 0x10))
            (lVar1,*(undefined8 *)(param_2 + 0x18),fVar6,lVar1,0,
             ((float)(int)(short)((ushort)*(byte *)(param_1 + 6) * 0x100 +
                                 (ushort)*(byte *)(param_1 + 7)) + fVar5) * DAT_140471a5c,0,0,uVar2)
  ;
  uVar4 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 1) * 0x10000 +
          (uint)*(byte *)(param_1 + 3);
  if (uVar4 == 0) {
    puVar3 = &DAT_14045dd10;
  }
  else {
    puVar3 = (undefined8 *)((ulonglong)uVar4 + param_1);
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
                    /* WARNING: Could not recover jumptable at 0x0001403efa44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))(lVar1,*(undefined8 *)(param_2 + 0x18),uVar2);
  return;
}

