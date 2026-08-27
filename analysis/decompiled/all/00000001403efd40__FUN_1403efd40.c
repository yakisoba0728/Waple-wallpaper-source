// Function: FUN_1403efd40
// Addr: 1403efd40
// Size: 383 bytes


void FUN_1403efd40(longlong param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_res8 [8];
  
  fVar9 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,0);
  bVar1 = *(byte *)(param_1 + 6);
  bVar2 = *(byte *)(param_1 + 7);
  fVar11 = ((float)(int)(short)((ushort)*(byte *)(param_1 + 5) +
                               (ushort)*(byte *)(param_1 + 4) * 0x100) + fVar9) * DAT_140471a5c;
  fVar9 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,1);
  bVar3 = *(byte *)(param_1 + 8);
  bVar4 = *(byte *)(param_1 + 9);
  fVar10 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,2);
  FUN_1403f5ad0(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),fVar11,fVar11,
                fVar9 + (float)(int)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2),
                fVar10 + (float)(int)(short)((ushort)bVar3 * 0x100 + (ushort)bVar4));
  uVar7 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 1) * 0x10000 +
          (uint)*(byte *)(param_1 + 3);
  if (uVar7 == 0) {
    puVar6 = &DAT_14045dd10;
  }
  else {
    puVar6 = (undefined8 *)((ulonglong)uVar7 + param_1);
  }
  if ((0 < *(int *)(param_2 + 0x80)) && (0 < *(int *)(param_2 + 0x84))) {
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + -1;
    *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + -1;
    FUN_1403786f0(puVar6,local_res8,param_2);
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
  }
  lVar5 = *(longlong *)(param_2 + 0x10);
  uVar8 = 0;
  if (*(longlong *)(lVar5 + 0x98) != 0) {
    uVar8 = *(undefined8 *)(*(longlong *)(lVar5 + 0x98) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001403efebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x18))(lVar5,*(undefined8 *)(param_2 + 0x18),uVar8);
  return;
}

