// Function: FUN_14030b920
// Addr: 14030b920
// Size: 624 bytes


ulonglong FUN_14030b920(longlong *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  
  pbVar14 = (byte *)param_1[0x21];
  pbVar6 = (byte *)param_1[0x22];
  lVar7 = param_1[3];
  iVar9 = *(int *)(*param_1 + 0x10);
  uVar12 = 0;
  do {
    uVar15 = uVar12 + 1;
    uVar10 = FUN_1402f0cc0(lVar7,uVar15);
    if ((int)uVar10 != 0) {
      return uVar10;
    }
    pbVar1 = pbVar14 + 4;
    if (pbVar6 < pbVar1) {
      return 0x15;
    }
    uVar16 = 0;
    uVar18 = 0;
    puVar17 = (uint *)((ulonglong)uVar12 * 0x20 + *(longlong *)(lVar7 + 0xa0));
    puVar17[2] = 0;
    puVar17[3] = 0;
    bVar3 = pbVar14[1];
    *(ushort *)(puVar17 + 1) = CONCAT11(*pbVar14,bVar3);
    bVar4 = pbVar14[2];
    bVar5 = pbVar14[3];
    *puVar17 = (uint)CONCAT11(bVar4,bVar5);
    if (iVar9 <= (int)(uint)CONCAT11(bVar4,bVar5)) {
      return 0x15;
    }
    iVar8 = (uint)(bVar3 & 1) * 2;
    uVar11 = (ulonglong)(iVar8 + 2);
    if ((bVar3 & 8) == 0) {
      if ((bVar3 & 0x40) == 0) {
        if ((char)bVar3 < '\0') {
          uVar11 = (ulonglong)(iVar8 + 10);
        }
      }
      else {
        uVar11 = (ulonglong)(iVar8 + 6);
      }
    }
    else {
      uVar11 = (ulonglong)(iVar8 + 4);
    }
    if (pbVar6 < pbVar1 + uVar11) {
      return 0x15;
    }
    if ((bVar3 & 2) == 0) {
      if ((bVar3 & 1) == 0) {
        puVar17[2] = (uint)*pbVar1;
        uVar12 = (uint)pbVar14[5];
        goto LAB_14030ba6e;
      }
      puVar17[2] = (uint)CONCAT11(pbVar14[4],pbVar14[5]);
      uVar12 = (uint)CONCAT11(pbVar14[6],pbVar14[7]);
      pbVar14 = pbVar14 + 8;
    }
    else if ((bVar3 & 1) == 0) {
      puVar17[2] = (int)(char)*pbVar1;
      uVar12 = (uint)(char)pbVar14[5];
LAB_14030ba6e:
      pbVar14 = pbVar14 + 6;
    }
    else {
      puVar17[2] = (int)(short)((ushort)pbVar14[4] << 8) | (uint)pbVar14[5];
      uVar12 = (int)(short)((ushort)pbVar14[6] << 8) | (uint)pbVar14[7];
      pbVar14 = pbVar14 + 8;
    }
    puVar17[3] = uVar12;
    if ((bVar3 & 8) == 0) {
      if ((bVar3 & 0x40) == 0) {
        if ((char)bVar3 < '\0') {
          uVar13 = ((int)(short)((ushort)*pbVar14 << 8) | (uint)pbVar14[1]) << 2;
          uVar16 = ((int)(short)((ushort)pbVar14[2] << 8) | (uint)pbVar14[3]) << 2;
          uVar18 = ((int)(short)((ushort)pbVar14[4] << 8) | (uint)pbVar14[5]) << 2;
          pbVar1 = pbVar14 + 6;
          pbVar2 = pbVar14 + 7;
          pbVar14 = pbVar14 + 8;
          uVar12 = ((int)(short)((ushort)*pbVar1 << 8) | (uint)*pbVar2) << 2;
        }
        else {
          uVar13 = 0x10000;
          uVar12 = uVar13;
        }
      }
      else {
        uVar13 = ((int)(short)((ushort)*pbVar14 << 8) | (uint)pbVar14[1]) << 2;
        pbVar1 = pbVar14 + 2;
        pbVar2 = pbVar14 + 3;
        pbVar14 = pbVar14 + 4;
        uVar12 = ((int)(short)((ushort)*pbVar1 << 8) | (uint)*pbVar2) << 2;
        uVar16 = 0;
      }
    }
    else {
      uVar13 = ((int)(short)((ushort)*pbVar14 << 8) | (uint)pbVar14[1]) << 2;
      pbVar14 = pbVar14 + 2;
      uVar12 = uVar13;
    }
    puVar17[4] = uVar13;
    puVar17[5] = uVar18;
    puVar17[6] = uVar16;
    puVar17[7] = uVar12;
    uVar12 = uVar15;
    if ((bVar3 & 0x20) == 0) {
      *(uint *)(lVar7 + 0x98) = uVar15;
      iVar9 = FUN_1402f54a0(param_1[5]);
      param_1[0x21] = (longlong)pbVar14;
      *(int *)(param_1 + 0x1c) = iVar9 + ((int)pbVar14 - (int)pbVar6);
      return uVar10 & 0xffffffff;
    }
  } while( true );
}

