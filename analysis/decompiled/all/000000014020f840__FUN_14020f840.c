// Function: FUN_14020f840
// Addr: 14020f840
// Size: 454 bytes


void FUN_14020f840(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
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
  char cVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  
  lVar2 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    puVar3 = (undefined4 *)param_4[1];
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar4 = (char *)*param_4, *pcVar4 != '\0')) {
        uVar24 = 0;
        lVar21 = *(longlong *)(lVar2 + 0x38);
        iVar22 = (int)(*(longlong *)(lVar2 + 0x40) - lVar21 >> 4) * -0x11111111;
        if (0 < iVar22) {
          do {
            cVar20 = FUN_14000d010(uVar24 * 0xf0 + lVar21,pcVar4);
            if (((cVar20 != '\0') &&
                (uVar24 < (ulonglong)
                          (*(longlong *)(lVar2 + 0x2d0) - *(longlong *)(lVar2 + 0x2c8) >> 6))) &&
               (*(longlong *)(lVar2 + 0x340) != 0)) {
              lVar2 = *(longlong *)(lVar2 + 0x310);
              uVar5 = puVar3[1];
              uVar6 = puVar3[2];
              uVar7 = puVar3[3];
              lVar21 = uVar24 * 0x40;
              uVar8 = puVar3[4];
              uVar9 = puVar3[5];
              uVar10 = puVar3[6];
              uVar11 = puVar3[7];
              uVar12 = puVar3[8];
              uVar13 = puVar3[9];
              uVar14 = puVar3[10];
              uVar15 = puVar3[0xb];
              uVar16 = puVar3[0xc];
              uVar17 = puVar3[0xd];
              uVar18 = puVar3[0xe];
              uVar19 = puVar3[0xf];
              puVar1 = (undefined4 *)(lVar21 + lVar2);
              *puVar1 = *puVar3;
              puVar1[1] = uVar5;
              puVar1[2] = uVar6;
              puVar1[3] = uVar7;
              puVar3 = (undefined4 *)(lVar21 + 0x10 + lVar2);
              *puVar3 = uVar8;
              puVar3[1] = uVar9;
              puVar3[2] = uVar10;
              puVar3[3] = uVar11;
              puVar3 = (undefined4 *)(lVar21 + 0x20 + lVar2);
              *puVar3 = uVar12;
              puVar3[1] = uVar13;
              puVar3[2] = uVar14;
              puVar3[3] = uVar15;
              puVar3 = (undefined4 *)(lVar21 + 0x30 + lVar2);
              *puVar3 = uVar16;
              puVar3[1] = uVar17;
              puVar3[2] = uVar18;
              puVar3[3] = uVar19;
              FUN_14020db40(param_1,uVar24);
              return;
            }
            uVar23 = (int)uVar24 + 1;
            uVar24 = (ulonglong)uVar23;
          } while ((int)uVar23 < iVar22);
        }
      }
    }
    else {
      iVar22 = *(int *)*param_4;
      if (((-1 < iVar22) &&
          ((ulonglong)(longlong)iVar22 <
           (ulonglong)(*(longlong *)(lVar2 + 0x2d0) - *(longlong *)(lVar2 + 0x2c8) >> 6))) &&
         (*(longlong *)(lVar2 + 0x340) != 0)) {
        lVar2 = *(longlong *)(lVar2 + 0x310);
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        lVar21 = (longlong)iVar22 * 0x40;
        uVar8 = puVar3[4];
        uVar9 = puVar3[5];
        uVar10 = puVar3[6];
        uVar11 = puVar3[7];
        uVar12 = puVar3[8];
        uVar13 = puVar3[9];
        uVar14 = puVar3[10];
        uVar15 = puVar3[0xb];
        uVar16 = puVar3[0xc];
        uVar17 = puVar3[0xd];
        uVar18 = puVar3[0xe];
        uVar19 = puVar3[0xf];
        puVar1 = (undefined4 *)(lVar21 + lVar2);
        *puVar1 = *puVar3;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        puVar3 = (undefined4 *)(lVar21 + 0x10 + lVar2);
        *puVar3 = uVar8;
        puVar3[1] = uVar9;
        puVar3[2] = uVar10;
        puVar3[3] = uVar11;
        puVar3 = (undefined4 *)(lVar21 + 0x20 + lVar2);
        *puVar3 = uVar12;
        puVar3[1] = uVar13;
        puVar3[2] = uVar14;
        puVar3[3] = uVar15;
        puVar3 = (undefined4 *)(lVar21 + 0x30 + lVar2);
        *puVar3 = uVar16;
        puVar3[1] = uVar17;
        puVar3[2] = uVar18;
        puVar3[3] = uVar19;
        FUN_14020db40(param_1);
        return;
      }
    }
  }
  return;
}

