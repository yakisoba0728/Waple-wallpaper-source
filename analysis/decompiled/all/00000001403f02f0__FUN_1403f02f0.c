// Function: FUN_1403f02f0
// Addr: 1403f02f0
// Size: 376 bytes


void FUN_1403f02f0(longlong param_1,longlong param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined1 local_res8 [8];
  
  bVar1 = *(byte *)(param_1 + 4);
  bVar2 = *(byte *)(param_1 + 5);
  fVar9 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,0);
  bVar3 = *(byte *)(param_1 + 6);
  bVar4 = *(byte *)(param_1 + 7);
  fVar9 = fVar9 + (float)(int)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2);
  fVar10 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,1);
  lVar5 = *(longlong *)(param_2 + 0x10);
  fVar10 = fVar10 + (float)(int)(short)((ushort)bVar3 * 0x100 + (ushort)bVar4);
  if (fVar9 == DAT_1404929a0) {
    fVar9 = 0.0;
  }
  if (fVar10 == DAT_1404929a0) {
    fVar10 = 0.0;
  }
  uVar6 = 0;
  if (*(undefined8 **)(lVar5 + 0x98) != (undefined8 *)0x0) {
    uVar6 = **(undefined8 **)(lVar5 + 0x98);
  }
  (**(code **)(lVar5 + 0x10))
            (lVar5,*(undefined8 *)(param_2 + 0x18),lVar5,0,0,DAT_140492704,fVar9,fVar10,uVar6);
  uVar8 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 1) * 0x10000 +
          (uint)*(byte *)(param_1 + 3);
  if (uVar8 == 0) {
    puVar7 = &DAT_14045dd10;
  }
  else {
    puVar7 = (undefined8 *)((ulonglong)uVar8 + param_1);
  }
  if ((0 < *(int *)(param_2 + 0x80)) && (0 < *(int *)(param_2 + 0x84))) {
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + -1;
    *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + -1;
    FUN_1403786f0(puVar7,local_res8,param_2);
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
  }
  lVar5 = *(longlong *)(param_2 + 0x10);
  uVar6 = 0;
  if (*(longlong *)(lVar5 + 0x98) != 0) {
    uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0x98) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001403f0464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x18))(lVar5,*(undefined8 *)(param_2 + 0x18),uVar6);
  return;
}

