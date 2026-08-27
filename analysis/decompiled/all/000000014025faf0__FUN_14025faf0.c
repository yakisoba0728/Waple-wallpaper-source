// Function: FUN_14025faf0
// Addr: 14025faf0
// Size: 1114 bytes


void FUN_14025faf0(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  char cVar22;
  char cVar23;
  float *pfVar24;
  undefined4 *puVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 local_58 [80];
  
  cVar22 = (**(code **)(*param_1 + 0x68))();
  if ((((*(byte *)(param_1 + 0x24) & 1) != 0) &&
      ((param_1[0x30] == 0 || (cVar23 = FUN_140185010(), cVar23 != '\0')))) || (cVar22 != '\0')) {
    pfVar24 = (float *)(**(code **)(*param_1 + 0x80))(param_1);
    lVar4 = param_1[0x19];
    if (((*(byte *)(lVar4 + 0x11c) & 2) != 0) &&
       ((*(uint *)((longlong)param_1 + 0x304) & 0x1100) == 0)) {
      fVar29 = *(float *)((longlong)param_1 + 0x2fc);
      fVar2 = *(float *)(param_1 + 0x5f);
      fVar3 = *(float *)(param_1 + 0x60);
      fVar28 = fVar2 * *pfVar24 + fVar29 * pfVar24[4] + fVar3 * pfVar24[8] + pfVar24[0xc];
      fVar30 = fVar2 * pfVar24[1] + fVar29 * pfVar24[5] + fVar3 * pfVar24[9] + pfVar24[0xd];
      fVar27 = (float)(*(uint *)(param_1 + 0x8a) ^ DAT_140492ff0);
      fVar29 = fVar2 * pfVar24[2] + fVar29 * pfVar24[6] + fVar3 * pfVar24[10] + pfVar24[0xe];
      if (fVar28 * *(float *)(lVar4 + 0xec0) + fVar30 * *(float *)(lVar4 + 0xec4) +
          fVar29 * *(float *)(lVar4 + 0xec8) + *(float *)(lVar4 + 0xecc) < fVar27) {
        return;
      }
      if (fVar28 * *(float *)(lVar4 + 0xed0) + fVar30 * *(float *)(lVar4 + 0xed4) +
          fVar29 * *(float *)(lVar4 + 0xed8) + *(float *)(lVar4 + 0xedc) < fVar27) {
        return;
      }
      if (fVar28 * *(float *)(lVar4 + 0xee0) + fVar30 * *(float *)(lVar4 + 0xee4) +
          fVar29 * *(float *)(lVar4 + 0xee8) + *(float *)(lVar4 + 0xeec) < fVar27) {
        return;
      }
      if (fVar28 * *(float *)(lVar4 + 0xef0) + fVar30 * *(float *)(lVar4 + 0xef4) +
          fVar29 * *(float *)(lVar4 + 0xef8) + *(float *)(lVar4 + 0xefc) < fVar27) {
        return;
      }
      if (fVar28 * *(float *)(lVar4 + 0xf00) + fVar30 * *(float *)(lVar4 + 0xf04) +
          fVar29 * *(float *)(lVar4 + 0xf08) + *(float *)(lVar4 + 0xf0c) < fVar27) {
        return;
      }
      if (fVar28 * *(float *)(lVar4 + 0xf10) + fVar30 * *(float *)(lVar4 + 0xf14) +
          fVar29 * *(float *)(lVar4 + 0xf18) + *(float *)(lVar4 + 0xf1c) < fVar27) {
        return;
      }
    }
    puVar5 = *(undefined8 **)(lVar4 + 0x40);
    *(undefined1 *)(lVar4 + 0x1ca) = 1;
    *(undefined8 **)(lVar4 + 0x40) = puVar5 + 8;
    puVar5[8] = *puVar5;
    puVar5[9] = puVar5[1];
    puVar5[10] = puVar5[2];
    puVar5[0xb] = puVar5[3];
    puVar5[0xc] = puVar5[4];
    puVar5[0xd] = puVar5[5];
    puVar5[0xe] = puVar5[6];
    puVar5[0xf] = puVar5[7];
    lVar4 = param_1[0x19];
    puVar5 = *(undefined8 **)(lVar4 + 0x38);
    *(undefined1 *)(lVar4 + 0x1ca) = 1;
    *(undefined8 **)(lVar4 + 0x38) = puVar5 + 8;
    puVar5[8] = *puVar5;
    puVar5[9] = puVar5[1];
    puVar5[10] = puVar5[2];
    puVar5[0xb] = puVar5[3];
    puVar5[0xc] = puVar5[4];
    puVar5[0xd] = puVar5[5];
    puVar5[0xe] = puVar5[6];
    puVar5[0xf] = puVar5[7];
    lVar4 = param_1[0x19];
    puVar5 = *(undefined8 **)(lVar4 + 0x30);
    *(undefined1 *)(lVar4 + 0x1ca) = 1;
    *(undefined8 **)(lVar4 + 0x30) = puVar5 + 8;
    puVar5[8] = *puVar5;
    puVar5[9] = puVar5[1];
    puVar5[10] = puVar5[2];
    puVar5[0xb] = puVar5[3];
    *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(puVar5 + 4);
    *(undefined4 *)((longlong)puVar5 + 100) = *(undefined4 *)((longlong)puVar5 + 0x24);
    *(undefined4 *)(puVar5 + 0xd) = *(undefined4 *)(puVar5 + 5);
    *(undefined4 *)((longlong)puVar5 + 0x6c) = *(undefined4 *)((longlong)puVar5 + 0x2c);
    *(undefined4 *)(puVar5 + 0xe) = *(undefined4 *)(puVar5 + 6);
    *(undefined4 *)((longlong)puVar5 + 0x74) = *(undefined4 *)((longlong)puVar5 + 0x34);
    *(undefined4 *)(puVar5 + 0xf) = *(undefined4 *)(puVar5 + 7);
    *(undefined4 *)((longlong)puVar5 + 0x7c) = *(undefined4 *)((longlong)puVar5 + 0x3c);
    (**(code **)(*param_1 + 0xa8))(param_1,*(undefined8 *)(param_1[0x19] + 0x30));
    puVar25 = (undefined4 *)FUN_14005ecb0(local_58,*(undefined8 *)(param_1[0x19] + 0x30),pfVar24);
    uVar7 = puVar25[1];
    uVar8 = puVar25[2];
    uVar9 = puVar25[3];
    puVar6 = *(undefined4 **)(param_1[0x19] + 0x30);
    uVar10 = puVar25[4];
    uVar11 = puVar25[5];
    uVar12 = puVar25[6];
    uVar13 = puVar25[7];
    uVar14 = puVar25[8];
    uVar15 = puVar25[9];
    uVar16 = puVar25[10];
    uVar17 = puVar25[0xb];
    uVar18 = puVar25[0xc];
    uVar19 = puVar25[0xd];
    uVar20 = puVar25[0xe];
    uVar21 = puVar25[0xf];
    *puVar6 = *puVar25;
    puVar6[1] = uVar7;
    puVar6[2] = uVar8;
    puVar6[3] = uVar9;
    puVar6[4] = uVar10;
    puVar6[5] = uVar11;
    puVar6[6] = uVar12;
    puVar6[7] = uVar13;
    puVar6[8] = uVar14;
    puVar6[9] = uVar15;
    puVar6[10] = uVar16;
    puVar6[0xb] = uVar17;
    puVar6[0xc] = uVar18;
    puVar6[0xd] = uVar19;
    puVar6[0xe] = uVar20;
    puVar6[0xf] = uVar21;
    if ((*(byte *)(param_1 + 0x24) & 0x80) != 0) {
      FUN_1401e5b60(param_1[0x19]);
    }
    lVar4 = param_1[0x61];
    if (lVar4 != param_1[0x62]) {
      iVar26 = 0;
      lVar4 = *(longlong *)(((param_1[0x62] - lVar4 & 0xfffffffffffffff8U) - 8) + lVar4);
      if ((*(longlong *)(lVar4 + 0xd8) - *(longlong *)(lVar4 + 0xd0) >> 4) * -0x5555555555555555 !=
          0) {
        do {
          FUN_1401ebf60(param_1,lVar4,iVar26,0xffffffff,1);
          iVar26 = iVar26 + 1;
        } while ((ulonglong)(longlong)iVar26 <
                 (ulonglong)
                 ((*(longlong *)(lVar4 + 0xd8) - *(longlong *)(lVar4 + 0xd0) >> 4) *
                 -0x5555555555555555));
      }
    }
    lVar4 = param_1[0x19];
    plVar1 = (longlong *)(lVar4 + 0x30);
    *plVar1 = *plVar1 + -0x40;
    *(undefined1 *)(lVar4 + 0x1ca) = 1;
    lVar4 = param_1[0x19];
    plVar1 = (longlong *)(lVar4 + 0x38);
    *plVar1 = *plVar1 + -0x40;
    *(undefined1 *)(lVar4 + 0x1ca) = 1;
    lVar4 = param_1[0x19];
    plVar1 = (longlong *)(lVar4 + 0x40);
    *plVar1 = *plVar1 + -0x40;
    *(undefined1 *)(lVar4 + 0x1ca) = 1;
  }
  return;
}

