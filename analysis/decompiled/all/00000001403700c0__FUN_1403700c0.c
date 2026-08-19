// Function: FUN_1403700c0
// Addr: 1403700c0
// Size: 337 bytes


void FUN_1403700c0(longlong param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  
  cVar1 = *(char *)(param_1 + 7);
  if (cVar1 == '\0') {
    uVar4 = *(undefined1 *)(param_1 + 0xc);
    uVar5 = *(undefined1 *)(param_1 + 0xd);
    bVar2 = *(byte *)(param_1 + 0xe);
    bVar3 = *(byte *)(param_1 + 0xf);
    for (pbVar10 = (byte *)(param_1 + 0x1c);
        pbVar10 !=
        (byte *)(param_1 +
                (((ulonglong)CONCAT11(uVar4,uVar5) * 0x100 + (ulonglong)bVar2) * 0x100 +
                (ulonglong)bVar3) * 6 + 0x1c); pbVar10 = pbVar10 + 6) {
      if (*param_2 != '\0') {
        uVar16 = (uint)*pbVar10 * 0x100 + (uint)pbVar10[1];
        param_2[4] = -1;
        param_2[5] = -1;
        param_2[6] = -1;
        param_2[7] = -1;
        puVar7 = (undefined4 *)FUN_1403ed630(param_2,uVar16,1);
        if (puVar7 != (undefined4 *)0x0) {
          uVar8 = (ulonglong)(uVar16 >> 6 & 7);
          *(ulonglong *)(puVar7 + uVar8 * 2 + 2) =
               *(ulonglong *)(puVar7 + uVar8 * 2 + 2) | 1L << (ulonglong)(uVar16 & 0x3f);
          *puVar7 = 0xffffffff;
        }
      }
      if (*param_3 != '\0') {
        uVar16 = (uint)pbVar10[3] + (uint)pbVar10[2] * 0x100;
        param_3[4] = -1;
        param_3[5] = -1;
        param_3[6] = -1;
        param_3[7] = -1;
        puVar7 = (undefined4 *)FUN_1403ed630(param_3,uVar16,1);
        if (puVar7 != (undefined4 *)0x0) {
          uVar8 = (ulonglong)(uVar16 >> 6 & 7);
          *(ulonglong *)(puVar7 + uVar8 * 2 + 2) =
               *(ulonglong *)(puVar7 + uVar8 * 2 + 2) | 1L << (ulonglong)(uVar16 & 0x3f);
          *puVar7 = 0xffffffff;
        }
      }
    }
    return;
  }
  if (cVar1 == '\x01') {
    FUN_140371610(param_1 + 0xc,param_2,param_4,param_1);
    return;
  }
  if (cVar1 == '\x02') {
    FUN_14036fd70((ulonglong)*(byte *)(param_1 + 0x13) +
                  ((ulonglong)*(byte *)(param_1 + 0x12) +
                  (ulonglong)
                  CONCAT11(*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11)) * 0x100)
                  * 0x100 + param_1,param_2,param_4);
    bVar2 = *(byte *)(param_1 + 0x17);
    uVar6 = CONCAT11(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15));
    bVar3 = *(byte *)(param_1 + 0x16);
code_r0x0001403701f8:
    pbVar10 = (byte *)((ulonglong)bVar2 +
                      ((ulonglong)bVar3 + (ulonglong)uVar6 * 0x100) * 0x100 + param_1);
  }
  else {
    if (cVar1 == '\x04') {
      FUN_140371870(param_1 + 0xc,param_2,param_4,param_1);
      return;
    }
    if (cVar1 != '\x06') {
      return;
    }
    lVar9 = (ulonglong)*(byte *)(param_1 + 0x17) +
            ((ulonglong)*(byte *)(param_1 + 0x16) +
            (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15)) *
            0x100) * 0x100 + param_1;
    if ((*(byte *)(param_1 + 0xf) & 1) == 0) {
      FUN_14036fd70(lVar9,param_2,param_4);
      bVar2 = *(byte *)(param_1 + 0x1b);
      uVar6 = CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19));
      bVar3 = *(byte *)(param_1 + 0x1a);
      goto code_r0x0001403701f8;
    }
    FUN_14036fd70(lVar9,param_2,param_4);
    pbVar10 = (byte *)((ulonglong)*(byte *)(param_1 + 0x1b) +
                      ((ulonglong)*(byte *)(param_1 + 0x1a) +
                      (ulonglong)
                      CONCAT11(*(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19)) *
                      0x100) * 0x100 + param_1);
  }
  switch((uint)*pbVar10 * 0x100 + (uint)pbVar10[1]) {
  case 0:
    func_0x0001403a3420(param_3,0,param_4 + -1);
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
    break;
  case 2:
    pbVar13 = pbVar10 + 2;
    uVar16 = FUN_1403cbf00(pbVar13);
    uVar14 = 0;
    if (uVar16 != 0) {
      do {
        uVar15 = FUN_1403cbf00(pbVar13);
        if (uVar14 < uVar15) {
          pbVar12 = pbVar13 + (ulonglong)(((uint)pbVar10[3] + (uint)*pbVar13 * 0x100) * uVar14) + 10
          ;
        }
        else {
          pbVar12 = (byte *)&DAT_14045dde0;
        }
        iVar17 = (uint)pbVar12[3] + (uint)pbVar12[2] * 0x100;
        if (iVar17 != 0xffff) {
          func_0x0001403a3420(param_3,iVar17,(uint)*pbVar12 * 0x100 + (uint)pbVar12[1]);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar16);
    }
    break;
  case 4:
    pbVar13 = pbVar10 + 2;
    uVar16 = FUN_1403cbf00(pbVar13);
    uVar14 = 0;
    if (uVar16 != 0) {
      do {
        uVar15 = FUN_1403cbf00(pbVar13);
        if (uVar14 < uVar15) {
          pbVar12 = pbVar13 + (ulonglong)(((uint)pbVar10[3] + (uint)*pbVar13 * 0x100) * uVar14) + 10
          ;
        }
        else {
          pbVar12 = (byte *)&DAT_14045dde0;
        }
        iVar17 = (uint)pbVar12[2] * 0x100 + (uint)pbVar12[3];
        if (iVar17 != 0xffff) {
          func_0x0001403a3420(param_3,iVar17,(uint)pbVar12[1] + (uint)*pbVar12 * 0x100);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar16);
    }
    break;
  case 6:
    uVar16 = (uint)pbVar10[4] * 0x100 + (uint)pbVar10[5];
    if (uVar16 != 0) {
      uVar15 = 0;
      uVar8 = (ulonglong)(((uint)pbVar10[3] + (uint)pbVar10[2] * 0x100) * (uVar16 - 1));
      uVar14 = (uint)((uint)pbVar10[uVar8 + 0xc] * 0x100 + (uint)pbVar10[uVar8 + 0xd] == 0xffff);
      if (uVar16 != uVar14) {
        do {
          iVar17 = (uint)pbVar10[4] * 0x100 + (uint)pbVar10[5];
          if ((iVar17 == 0) ||
             (uVar8 = (ulonglong)(((uint)pbVar10[2] * 0x100 + (uint)pbVar10[3]) * (iVar17 + -1)),
             iVar17 - (uint)((uint)pbVar10[uVar8 + 0xc] * 0x100 + (uint)pbVar10[uVar8 + 0xd] ==
                            0xffff) <= uVar15)) {
            pbVar13 = (byte *)&DAT_14045dde0;
          }
          else {
            pbVar13 = pbVar10 + (ulonglong)(((uint)pbVar10[2] * 0x100 + (uint)pbVar10[3]) * uVar15)
                                + 0xc;
          }
          uVar18 = (uint)pbVar13[1] + (uint)*pbVar13 * 0x100;
          if ((uVar18 != 0xffff) && (*param_3 != '\0')) {
            param_3[4] = -1;
            param_3[5] = -1;
            param_3[6] = -1;
            param_3[7] = -1;
            puVar7 = (undefined4 *)FUN_1403ed630(param_3,uVar18,1);
            if (puVar7 != (undefined4 *)0x0) {
              uVar8 = (ulonglong)(uVar18 >> 6 & 7);
              *(ulonglong *)(puVar7 + uVar8 * 2 + 2) =
                   *(ulonglong *)(puVar7 + uVar8 * 2 + 2) | 1L << (ulonglong)(uVar18 & 0x3f);
              *puVar7 = 0xffffffff;
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar16 - uVar14);
      }
    }
    break;
  case 8:
    iVar17 = (uint)pbVar10[4] * 0x100 + (uint)pbVar10[5];
    if ((iVar17 != 0) && (iVar11 = (uint)pbVar10[3] + (uint)pbVar10[2] * 0x100, iVar11 != 0xffff)) {
      func_0x0001403a3420(param_3,iVar11,iVar17 + -1 + iVar11);
    }
    break;
  case 10:
    iVar17 = (uint)pbVar10[6] * 0x100 + (uint)pbVar10[7];
    if ((iVar17 != 0) && (iVar11 = (uint)pbVar10[4] * 0x100 + (uint)pbVar10[5], iVar11 != 0xffff)) {
      func_0x0001403a3420(param_3,iVar11,iVar17 + -1 + iVar11);
    }
    break;
  default:
    goto switchD_14036fdb2_default;
  }
switchD_14036fdb2_default:
  return;
}

