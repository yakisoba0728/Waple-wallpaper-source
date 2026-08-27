// Function: FUN_1401fd5c0
// Addr: 1401fd5c0
// Size: 194 bytes


void FUN_1401fd5c0(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_88 [64];
  undefined1 local_48 [64];
  
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) && (-1 < param_2)) {
    lVar2 = *(longlong *)(lVar1 + 0xb0);
    if (((ulonglong)(longlong)param_2 <
         (ulonglong)((*(longlong *)(lVar1 + 0xb8) - lVar2 >> 3) * 0x4ec4ec4ec4ec4ec5)) &&
       (*(longlong *)(lVar1 + 0x2c8) != *(longlong *)(lVar1 + 0x2d0))) {
      lVar3 = (longlong)param_2 * 0x68;
      uVar4 = FUN_14005ecb0(local_88,(ulonglong)*(uint *)(lVar3 + 0x60 + lVar2) * 0x40 +
                                     *(longlong *)(lVar1 + 0x2c8),lVar3 + 0x20 + lVar2);
      puVar5 = (undefined8 *)FUN_14005ecb0(local_48,uVar4,param_3);
      uVar4 = puVar5[1];
      *param_3 = *puVar5;
      param_3[1] = uVar4;
      uVar4 = puVar5[3];
      param_3[2] = puVar5[2];
      param_3[3] = uVar4;
      uVar4 = puVar5[5];
      param_3[4] = puVar5[4];
      param_3[5] = uVar4;
      uVar4 = puVar5[7];
      param_3[6] = puVar5[6];
      param_3[7] = uVar4;
    }
  }
  return;
}

