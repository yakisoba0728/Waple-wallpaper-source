// Function: FUN_14038caa0
// Addr: 14038caa0
// Size: 988 bytes


undefined8 FUN_14038caa0(byte *param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  int *piVar21;
  undefined4 local_res10;
  uint local_78;
  
  if ((*(int *)(param_2 + 0x2c) == 0) && (param_1 <= param_1 + 0xc)) {
    lVar2 = *(longlong *)(param_2 + 8);
    pbVar16 = param_1 + (0xc - lVar2);
    if ((pbVar16 < (byte *)0x80000000) &&
       ((longlong)pbVar16 <= *(longlong *)(param_2 + 0x10) - lVar2)) {
      if ((int)pbVar16 != 0) {
        uVar9 = func_0x000140421870(lVar2,0,(ulonglong)pbVar16 & 0xffffffff);
        return uVar9;
      }
      lVar2 = *(longlong *)(param_2 + 8);
      *(byte **)(param_2 + 8) = pbVar16 + lVar2;
      if ((lVar2 != 0) && (param_1 != (byte *)0x0)) {
        uVar1 = *(uint *)(param_4 + 0x10);
        param_1[3] = (byte)param_3;
        *param_1 = (byte)((uint)param_3 >> 0x18);
        param_1[1] = (byte)((uint)param_3 >> 0x10);
        param_1[2] = (byte)((uint)param_3 >> 8);
        cVar6 = FUN_14040a630(param_1 + 4,param_2,uVar1,1);
        if (cVar6 != '\0') {
          lVar2 = *(longlong *)(param_2 + 8);
          piVar21 = *(int **)(param_4 + 8);
          puVar14 = (undefined4 *)0x0;
          local_78 = 0;
          if (param_4 == -1) {
            param_4 = 0;
          }
          uVar12 = *(uint *)(param_4 + 0x10);
          lVar3 = *(longlong *)(param_4 + 8);
          uVar13 = uVar1;
          while( true ) {
            if ((piVar21 == (int *)(lVar3 + (ulonglong)uVar12 * 0x18)) && (uVar13 == 0)) {
              local_res10 = local_res10 & 0xffffff00;
              uVar12 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
              if (uVar12 != 0) {
                FUN_140368db0(param_1 + 0xc,param_1 + 0xc + (ulonglong)uVar12 * 0x10,uVar12,
                              &local_res10);
              }
              if (puVar14 != (undefined4 *)0x0) {
                uVar12 = 0;
                for (pbVar16 = param_1;
                    pbVar16 < param_1 + (ulonglong)
                                        ((uint)((ulonglong)(lVar2 - (longlong)param_1) >> 2) &
                                        0x3fffffff) * 4; pbVar16 = pbVar16 + 4) {
                  uVar12 = uVar12 + pbVar16[3] +
                           (uint)pbVar16[1] * 0x10000 + (uint)pbVar16[2] * 0x100 +
                           (uint)*pbVar16 * 0x1000000;
                }
                uVar8 = uVar12 >> 0x18;
                uVar20 = uVar12 >> 0x10;
                uVar13 = uVar12 >> 8;
                uVar19 = 0;
                if (uVar1 != 0) {
                  do {
                    uVar18 = (int)uVar19 + 1;
                    uVar13 = (uint)param_1[uVar19 * 0x10 + 0x13] +
                             (uint)param_1[uVar19 * 0x10 + 0x10] * 0x1000000 +
                             (uint)param_1[uVar19 * 0x10 + 0x11] * 0x10000 +
                             (uint)param_1[uVar19 * 0x10 + 0x12] * 0x100 + (uVar13 & 0xff) * 0x100 +
                             (uVar20 & 0xff) * 0x10000 + uVar8 * 0x1000000 + (uVar12 & 0xff);
                    uVar8 = uVar13 >> 0x18;
                    uVar20 = uVar13 >> 0x10;
                    uVar12 = uVar13 & 0xff;
                    uVar13 = uVar13 >> 8;
                    uVar19 = (ulonglong)uVar18;
                  } while (uVar18 < uVar1);
                }
                iVar10 = ((uVar13 & 0xff) * -0x100 + -0x4e4f5046 + (uVar20 & 0xff) * -0x10000 +
                         uVar8 * -0x1000000) - (uVar12 & 0xff);
                *(char *)((longlong)puVar14 + 3) = (char)iVar10;
                *(char *)puVar14 = (char)((uint)iVar10 >> 0x18);
                *(char *)((longlong)puVar14 + 1) = (char)((uint)iVar10 >> 0x10);
                *(char *)((longlong)puVar14 + 2) = (char)((uint)iVar10 >> 8);
              }
              return 1;
            }
            piVar11 = (int *)&DAT_14045dde0;
            if (uVar13 != 0) {
              piVar11 = piVar21;
            }
            if (*(int *)(param_2 + 0x2c) != 0) {
              return 0;
            }
            lVar4 = *(longlong *)(piVar11 + 2);
            uVar8 = *(uint *)(lVar4 + 0x18);
            uVar19 = (ulonglong)uVar8;
            if ((0x7fffffff < uVar19) ||
               (lVar5 = *(longlong *)(param_2 + 8),
               *(longlong *)(param_2 + 0x10) - lVar5 < (longlong)uVar19)) break;
            iVar10 = *piVar11;
            *(ulonglong *)(param_2 + 8) = uVar19 + lVar5;
            if (lVar5 == 0) {
              return 0;
            }
            iVar15 = (int)lVar5;
            uVar20 = iVar15 - (int)param_1;
            param_1[(ulonglong)local_78 * 0x10 + 0xc] = (byte)((uint)iVar10 >> 0x18);
            param_1[(ulonglong)local_78 * 0x10 + 0xd] = (byte)((uint)iVar10 >> 0x10);
            param_1[(ulonglong)local_78 * 0x10 + 0xe] = (byte)((uint)iVar10 >> 8);
            param_1[(ulonglong)local_78 * 0x10 + 0xf] = (byte)iVar10;
            param_1[(ulonglong)local_78 * 0x10 + 0x18] = (byte)(uVar8 >> 0x18);
            param_1[(ulonglong)local_78 * 0x10 + 0x19] = (byte)(uVar8 >> 0x10);
            param_1[(ulonglong)local_78 * 0x10 + 0x1a] = (byte)(uVar8 >> 8);
            param_1[(ulonglong)local_78 * 0x10 + 0x1b] = (byte)uVar8;
            bVar7 = (byte)(uVar20 >> 8);
            local_res10._3_1_ = (undefined1)uVar20;
            local_res10._0_3_ =
                 CONCAT12(bVar7,CONCAT11((char)(uVar20 >> 0x10),(char)(uVar20 >> 0x18)));
            *(uint *)(param_1 + (ulonglong)local_78 * 0x10 + 0x14) = local_res10;
            if ((((uint3)local_res10 & 0xff00) >> 8) * 0x10000 + (uint)bVar7 * 0x100 +
                (uVar20 & 0xff000000) + (uVar20 & 0xff) != uVar20) {
              *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 2;
              return 0;
            }
            if (uVar8 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1404211c0(lVar5,*(undefined8 *)(lVar4 + 0x10),uVar8);
            }
            if (((*(int **)(param_2 + 0x48) != (int *)0x0) &&
                (uVar8 = *(int *)(param_2 + 8) - **(int **)(param_2 + 0x48) & 3, uVar8 != 0)) &&
               (*(int *)(param_2 + 0x2c) == 0)) {
              uVar8 = 4 - uVar8;
              if (uVar8 < 0x80000000) {
                if ((longlong)(ulonglong)uVar8 <=
                    *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8)) {
                  if (uVar8 != 0) {
                    uVar9 = func_0x000140421870(*(longlong *)(param_2 + 8),0,(ulonglong)uVar8);
                    return uVar9;
                  }
                  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 8);
                  goto LAB_14038cd3c;
                }
              }
              *(undefined4 *)(param_2 + 0x2c) = 4;
            }
LAB_14038cd3c:
            iVar17 = (int)*(undefined8 *)(param_2 + 8);
            if ((iVar10 == 0x68656164) && (0x35 < (uint)(iVar17 - iVar15))) {
              puVar14 = (undefined4 *)(lVar5 + 8);
              *puVar14 = 0;
            }
            FUN_14040b4b0(param_1 + (ulonglong)local_78 * 0x10 + 0x10,lVar5,iVar17 - iVar15);
            local_78 = local_78 + 1;
            if (uVar13 != 0) {
              uVar13 = uVar13 - 1;
              piVar21 = piVar21 + 6;
            }
          }
          *(undefined4 *)(param_2 + 0x2c) = 4;
        }
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x2c) = 4;
    }
  }
  return 0;
}

