// Function: FUN_14038c9d0
// Addr: 14038c9d0
// Size: 1156 bytes


undefined8 FUN_14038c9d0(byte *param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  int *piVar20;
  undefined4 local_res10;
  uint local_78;
  
  if ((*(int *)(param_2 + 0x2c) == 0) && (param_1 <= param_1 + 0xc)) {
    lVar2 = *(longlong *)(param_2 + 8);
    pbVar15 = param_1 + (0xc - lVar2);
    if ((pbVar15 < (byte *)0x80000000) &&
       ((longlong)pbVar15 <= *(longlong *)(param_2 + 0x10) - lVar2)) {
      if ((int)pbVar15 != 0) {
        FUN_1404217a0(lVar2,0,(ulonglong)pbVar15 & 0xffffffff);
      }
      lVar2 = *(longlong *)(param_2 + 8);
      *(byte **)(param_2 + 8) = pbVar15 + lVar2;
      if ((lVar2 != 0) && (param_1 != (byte *)0x0)) {
        uVar1 = *(uint *)(param_4 + 0x10);
        param_1[3] = (byte)param_3;
        *param_1 = (byte)((uint)param_3 >> 0x18);
        param_1[1] = (byte)((uint)param_3 >> 0x10);
        param_1[2] = (byte)((uint)param_3 >> 8);
        cVar6 = FUN_14040a560(param_1 + 4,param_2,uVar1,1);
        if (cVar6 != '\0') {
          lVar2 = *(longlong *)(param_2 + 8);
          piVar20 = *(int **)(param_4 + 8);
          puVar13 = (undefined4 *)0x0;
          local_78 = 0;
          if (param_4 == -1) {
            param_4 = 0;
          }
          uVar11 = *(uint *)(param_4 + 0x10);
          lVar3 = *(longlong *)(param_4 + 8);
          uVar12 = uVar1;
          while( true ) {
            if ((piVar20 == (int *)(lVar3 + (ulonglong)uVar11 * 0x18)) && (uVar12 == 0)) {
              local_res10 = local_res10 & 0xffffff00;
              uVar11 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
              if (uVar11 != 0) {
                FUN_140368ce0(param_1 + 0xc,param_1 + 0xc + (ulonglong)uVar11 * 0x10,uVar11,
                              &local_res10);
              }
              if (puVar13 != (undefined4 *)0x0) {
                uVar11 = 0;
                for (pbVar15 = param_1;
                    pbVar15 < param_1 + (ulonglong)
                                        ((uint)((ulonglong)(lVar2 - (longlong)param_1) >> 2) &
                                        0x3fffffff) * 4; pbVar15 = pbVar15 + 4) {
                  uVar11 = uVar11 + pbVar15[3] +
                           (uint)pbVar15[1] * 0x10000 + (uint)pbVar15[2] * 0x100 +
                           (uint)*pbVar15 * 0x1000000;
                }
                uVar8 = uVar11 >> 0x18;
                uVar19 = uVar11 >> 0x10;
                uVar12 = uVar11 >> 8;
                uVar18 = 0;
                if (uVar1 != 0) {
                  do {
                    uVar17 = (int)uVar18 + 1;
                    uVar12 = (uint)param_1[uVar18 * 0x10 + 0x13] +
                             (uint)param_1[uVar18 * 0x10 + 0x10] * 0x1000000 +
                             (uint)param_1[uVar18 * 0x10 + 0x11] * 0x10000 +
                             (uint)param_1[uVar18 * 0x10 + 0x12] * 0x100 + (uVar12 & 0xff) * 0x100 +
                             (uVar19 & 0xff) * 0x10000 + uVar8 * 0x1000000 + (uVar11 & 0xff);
                    uVar8 = uVar12 >> 0x18;
                    uVar19 = uVar12 >> 0x10;
                    uVar11 = uVar12 & 0xff;
                    uVar12 = uVar12 >> 8;
                    uVar18 = (ulonglong)uVar17;
                  } while (uVar17 < uVar1);
                }
                iVar9 = ((uVar12 & 0xff) * -0x100 + -0x4e4f5046 + (uVar19 & 0xff) * -0x10000 +
                        uVar8 * -0x1000000) - (uVar11 & 0xff);
                *(char *)((longlong)puVar13 + 3) = (char)iVar9;
                *(char *)puVar13 = (char)((uint)iVar9 >> 0x18);
                *(char *)((longlong)puVar13 + 1) = (char)((uint)iVar9 >> 0x10);
                *(char *)((longlong)puVar13 + 2) = (char)((uint)iVar9 >> 8);
              }
              return 1;
            }
            piVar10 = (int *)&DAT_14045dd10;
            if (uVar12 != 0) {
              piVar10 = piVar20;
            }
            if (*(int *)(param_2 + 0x2c) != 0) {
              return 0;
            }
            lVar4 = *(longlong *)(piVar10 + 2);
            uVar8 = *(uint *)(lVar4 + 0x18);
            uVar18 = (ulonglong)uVar8;
            if ((0x7fffffff < uVar18) ||
               (lVar5 = *(longlong *)(param_2 + 8),
               *(longlong *)(param_2 + 0x10) - lVar5 < (longlong)uVar18)) {
              *(undefined4 *)(param_2 + 0x2c) = 4;
              return 0;
            }
            iVar9 = *piVar10;
            *(ulonglong *)(param_2 + 8) = uVar18 + lVar5;
            if (lVar5 == 0) {
              return 0;
            }
            iVar14 = (int)lVar5;
            uVar19 = iVar14 - (int)param_1;
            param_1[(ulonglong)local_78 * 0x10 + 0xc] = (byte)((uint)iVar9 >> 0x18);
            param_1[(ulonglong)local_78 * 0x10 + 0xd] = (byte)((uint)iVar9 >> 0x10);
            param_1[(ulonglong)local_78 * 0x10 + 0xe] = (byte)((uint)iVar9 >> 8);
            param_1[(ulonglong)local_78 * 0x10 + 0xf] = (byte)iVar9;
            param_1[(ulonglong)local_78 * 0x10 + 0x18] = (byte)(uVar8 >> 0x18);
            param_1[(ulonglong)local_78 * 0x10 + 0x19] = (byte)(uVar8 >> 0x10);
            param_1[(ulonglong)local_78 * 0x10 + 0x1a] = (byte)(uVar8 >> 8);
            param_1[(ulonglong)local_78 * 0x10 + 0x1b] = (byte)uVar8;
            bVar7 = (byte)(uVar19 >> 8);
            local_res10._3_1_ = (undefined1)uVar19;
            local_res10._0_3_ =
                 CONCAT12(bVar7,CONCAT11((char)(uVar19 >> 0x10),(char)(uVar19 >> 0x18)));
            *(uint *)(param_1 + (ulonglong)local_78 * 0x10 + 0x14) = local_res10;
            if ((((uint3)local_res10 & 0xff00) >> 8) * 0x10000 + (uint)bVar7 * 0x100 +
                (uVar19 & 0xff000000) + (uVar19 & 0xff) != uVar19) break;
            if (uVar8 != 0) {
              FUN_1404210f0(lVar5,*(undefined8 *)(lVar4 + 0x10),uVar8);
            }
            if (((*(int **)(param_2 + 0x48) != (int *)0x0) &&
                (uVar8 = *(int *)(param_2 + 8) - **(int **)(param_2 + 0x48) & 3, uVar8 != 0)) &&
               (*(int *)(param_2 + 0x2c) == 0)) {
              uVar8 = 4 - uVar8;
              if (uVar8 < 0x80000000) {
                uVar18 = (ulonglong)uVar8;
                if ((longlong)uVar18 <= *(longlong *)(param_2 + 0x10) - *(longlong *)(param_2 + 8))
                {
                  if (uVar8 != 0) {
                    FUN_1404217a0(*(longlong *)(param_2 + 8),0,uVar18);
                  }
                  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + uVar18;
                  goto LAB_14038cc6c;
                }
              }
              *(undefined4 *)(param_2 + 0x2c) = 4;
            }
LAB_14038cc6c:
            iVar16 = (int)*(undefined8 *)(param_2 + 8);
            if ((iVar9 == 0x68656164) && (0x35 < (uint)(iVar16 - iVar14))) {
              puVar13 = (undefined4 *)(lVar5 + 8);
              *puVar13 = 0;
            }
            FUN_14040b3e0(param_1 + (ulonglong)local_78 * 0x10 + 0x10,lVar5,iVar16 - iVar14);
            local_78 = local_78 + 1;
            if (uVar12 != 0) {
              uVar12 = uVar12 - 1;
              piVar20 = piVar20 + 6;
            }
          }
          *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 2;
        }
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x2c) = 4;
    }
  }
  return 0;
}

