// Function: FUN_14033ebe0
// Addr: 14033ebe0
// Size: 731 bytes


int FUN_14033ebe0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  short sVar6;
  short *psVar7;
  short sVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_res20 [2];
  
  puVar3 = (undefined8 *)FUN_1402f7fa0(param_1,0x9c8,local_res20);
  if (local_res20[0] != 0) {
    *param_3 = (longlong)puVar3;
    return local_res20[0];
  }
  psVar7 = (short *)(param_2 + 0x80);
  *puVar3 = param_1;
  *(uint *)(puVar3 + 0x1b) = (uint)*(ushort *)(param_2 + 0x78);
  piVar4 = (int *)((longlong)puVar3 + 0xe4);
  uVar9 = (uint)*(byte *)(param_2 + 0x7c);
  if (*(byte *)(param_2 + 0x7c) != 0) {
    do {
      sVar6 = *psVar7;
      psVar7 = psVar7 + 1;
      *piVar4 = (int)sVar6;
      piVar4 = piVar4 + 3;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  piVar4 = (int *)(puVar3 + 3);
  psVar7 = (short *)(param_2 + 0x9a);
  *(uint *)((longlong)puVar3 + 0xd4) = *(byte *)(param_2 + 0x7c) + 1;
  *(uint *)((longlong)puVar3 + 0xc) = (uint)*(ushort *)(param_2 + 0x7a);
  uVar9 = (uint)*(byte *)(param_2 + 0x7d);
  if (*(byte *)(param_2 + 0x7d) != 0) {
    do {
      sVar6 = *psVar7;
      psVar7 = psVar7 + 1;
      *piVar4 = (int)sVar6;
      piVar4 = piVar4 + 3;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar5 = param_2 + 0x28;
  *(uint *)(puVar3 + 1) = *(byte *)(param_2 + 0x7d) + 1;
  FUN_14033e890(puVar3 + 0x34,*(undefined1 *)(param_2 + 8),param_2 + 0xc,
                *(undefined1 *)(param_2 + 9),lVar5,*(undefined4 *)(param_2 + 0x74),0);
  lVar1 = param_2 + 0x58;
  sVar6 = 1;
  FUN_14033e890(puVar3 + 0x34,*(undefined1 *)(param_2 + 10),param_2 + 0x3c,
                *(undefined1 *)(param_2 + 0xb),lVar1,*(undefined4 *)(param_2 + 0x74),1);
  uVar11 = 0;
  uVar10 = uVar11;
  sVar8 = sVar6;
  if (*(byte *)(param_2 + 8) != 0) {
    do {
      sVar6 = *(short *)(param_2 + 0xc + (ulonglong)((int)uVar10 + 1) * 2) -
              *(short *)(param_2 + 0xc + uVar10 * 2);
      if (sVar6 <= sVar8) {
        sVar6 = sVar8;
      }
      uVar9 = (int)uVar10 + 2;
      uVar10 = (ulonglong)uVar9;
      sVar8 = sVar6;
    } while (uVar9 < *(byte *)(param_2 + 8));
  }
  uVar10 = uVar11;
  sVar8 = sVar6;
  if (*(byte *)(param_2 + 9) != 0) {
    do {
      sVar6 = *(short *)(lVar5 + (ulonglong)((int)uVar10 + 1) * 2) - *(short *)(lVar5 + uVar10 * 2);
      if (sVar6 <= sVar8) {
        sVar6 = sVar8;
      }
      uVar9 = (int)uVar10 + 2;
      uVar10 = (ulonglong)uVar9;
      sVar8 = sVar6;
    } while (uVar9 < *(byte *)(param_2 + 9));
  }
  uVar10 = uVar11;
  sVar8 = sVar6;
  if (*(byte *)(param_2 + 10) != 0) {
    do {
      sVar6 = *(short *)(param_2 + 0x3c + (ulonglong)((int)uVar10 + 1) * 2) -
              *(short *)(param_2 + 0x3c + uVar10 * 2);
      if (sVar6 <= sVar8) {
        sVar6 = sVar8;
      }
      uVar9 = (int)uVar10 + 2;
      uVar10 = (ulonglong)uVar9;
      sVar8 = sVar6;
    } while (uVar9 < *(byte *)(param_2 + 10));
  }
  sVar8 = sVar6;
  if (*(byte *)(param_2 + 0xb) != 0) {
    do {
      sVar6 = *(short *)(lVar1 + (ulonglong)((int)uVar11 + 1) * 2) - *(short *)(lVar1 + uVar11 * 2);
      if (sVar6 <= sVar8) {
        sVar6 = sVar8;
      }
      uVar9 = (int)uVar11 + 2;
      uVar11 = (ulonglong)uVar9;
      sVar8 = sVar6;
    } while (uVar9 < *(byte *)(param_2 + 0xb));
  }
  lVar5 = (longlong)*(int *)(param_2 + 0x6c) * (longlong)sVar6;
  if ((int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) < 1000) {
    iVar2 = (*(int *)(param_2 + 0x6c) * 8) / 0x7d;
  }
  else {
    iVar2 = (int)(0x400000 / (longlong)(int)sVar6);
  }
  *(int *)(puVar3 + 0x136) = iVar2;
  *(undefined4 *)((longlong)puVar3 + 0x9b4) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)puVar3 + 0x9bc) = *(undefined4 *)(param_2 + 0x74);
  *(undefined8 *)((longlong)puVar3 + 0xcc) = 0;
  puVar3[0x33] = 0;
  *param_3 = (longlong)puVar3;
  return local_res20[0];
}

