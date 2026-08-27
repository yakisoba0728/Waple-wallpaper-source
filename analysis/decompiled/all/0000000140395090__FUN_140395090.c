// Function: FUN_140395090
// Addr: 140395090
// Size: 1335 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140395090(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_c8 [32];
  code *local_a8;
  uint *local_a0;
  uint local_98;
  uint local_94;
  int local_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  uint local_70 [4];
  uint local_60 [4];
  ulonglong local_50;
  
  local_50 = DAT_1404dc040 ^ (ulonglong)auStack_c8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_a8 = FUN_1403961c0;
  local_80 = param_1;
  local_78 = param_1;
  FUN_14041bd80(param_1 + 0xc,0x10,2,&LAB_140390ab0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = param_2;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  uVar4 = param_3[5];
  uVar5 = param_3[6];
  uVar6 = param_3[7];
  *(undefined4 *)(param_1 + 3) = param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  local_98 = 3;
  local_94 = 3;
  local_a0 = local_60;
  local_a8 = (code *)&local_94;
  FUN_140417f00(*(undefined4 *)((longlong)param_1 + 0xc),param_1[2],&local_98,local_70);
  local_88 = 0;
  do {
    lVar17 = local_88;
    uVar9 = local_98;
    local_90 = (&DAT_1404621a0)[local_88];
    puVar1 = (uint *)((longlong)param_1 + (local_88 + 0xb) * 4);
    puVar2 = (uint *)((longlong)param_1 + (local_88 + 0xe) * 4);
    if (local_90 == 0x47504f53) {
      puVar13 = (undefined8 *)FUN_1403c4ed0(*param_1 + 0x148);
LAB_140395207:
      puVar10 = &DAT_14045dd10;
      if ((undefined8 *)*puVar13 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)*puVar13;
      }
      if (*(uint *)(puVar10 + 3) < 4) {
        pbVar16 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar16 = (byte *)puVar10[2];
      }
    }
    else {
      if (local_90 == 0x47535542) {
        puVar13 = (undefined8 *)FUN_1403c4f70(*param_1 + 0x140);
        goto LAB_140395207;
      }
      pbVar16 = (byte *)&DAT_14045dd10;
    }
    uVar21 = 0;
    if (uVar9 != 0) {
      do {
        uVar20 = local_70[uVar21];
        if ((uint)*pbVar16 * 0x100 + (uint)pbVar16[1] == 1) {
          uVar12 = (uint)pbVar16[5] + (uint)pbVar16[4] * 0x100;
          if (uVar12 == 0) {
            pbVar15 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar15 = pbVar16 + uVar12;
          }
        }
        else {
          pbVar15 = (byte *)&DAT_14045dd10;
        }
        iVar19 = 0;
        iVar18 = (pbVar15[1] - 1) + (uint)*pbVar15 * 0x100;
        lVar17 = local_88;
        param_1 = local_80;
        if (-1 < iVar18) {
          do {
            uVar9 = (uint)(iVar18 + iVar19) >> 1;
            lVar11 = (ulonglong)uVar9 * 6;
            uVar12 = (uint)pbVar15[lVar11 + 5] +
                     (uint)pbVar15[lVar11 + 3] * 0x10000 + (uint)pbVar15[lVar11 + 4] * 0x100 +
                     (uint)pbVar15[lVar11 + 2] * 0x1000000;
            iVar14 = (uint)(uVar12 < uVar20) - (uint)(uVar20 < uVar12);
            if (iVar14 < 0) {
              iVar18 = uVar9 - 1;
            }
            else {
              if (iVar14 < 1) {
                if (puVar2 != (uint *)0x0) {
                  *puVar2 = uVar9;
                }
                if (puVar1 != (uint *)0x0) {
                  *puVar1 = uVar20;
                }
                uVar8 = 1;
                goto LAB_1403953bb;
              }
              iVar19 = uVar9 + 1;
            }
            uVar9 = local_98;
          } while (iVar19 <= iVar18);
        }
        if (puVar2 != (uint *)0x0) {
          *puVar2 = 0xffff;
        }
        uVar20 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar20;
      } while (uVar20 < uVar9);
    }
    cVar7 = FUN_1403c04c0(pbVar16,0x44464c54,puVar2);
    if (cVar7 == '\0') {
      cVar7 = FUN_1403c04c0(pbVar16,0x64666c74,puVar2);
      if (cVar7 == '\0') {
        cVar7 = FUN_1403c04c0(pbVar16,0x6c61746e,puVar2);
        if (cVar7 == '\0') {
          if (puVar2 != (uint *)0x0) {
            *puVar2 = 0xffff;
          }
          if (puVar1 != (uint *)0x0) {
            *puVar1 = 0;
          }
        }
        else if (puVar1 != (uint *)0x0) {
          *puVar1 = 0x6c61746e;
        }
      }
      else if (puVar1 != (uint *)0x0) {
        *puVar1 = 0x64666c74;
      }
    }
    else if (puVar1 != (uint *)0x0) {
      *puVar1 = 0x44464c54;
    }
    uVar8 = 0;
LAB_1403953bb:
    *(undefined1 *)((longlong)param_1 + lVar17 + 0x34) = uVar8;
    puVar1 = (uint *)((longlong)param_1 + (lVar17 + 0x10) * 4);
    uVar9 = *puVar2;
    if (local_90 == 0x47504f53) {
      puVar13 = (undefined8 *)FUN_1403c4ed0(*param_1 + 0x148);
LAB_140395405:
      puVar10 = &DAT_14045dd10;
      if ((undefined8 *)*puVar13 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)*puVar13;
      }
      puVar13 = &DAT_14045dd10;
      if (3 < *(uint *)(puVar10 + 3)) {
        puVar13 = (undefined8 *)puVar10[2];
      }
    }
    else {
      if (local_90 == 0x47535542) {
        puVar13 = (undefined8 *)FUN_1403c4f70(*param_1 + 0x140);
        goto LAB_140395405;
      }
      puVar13 = &DAT_14045dd10;
    }
    lVar11 = FUN_1403ce450(puVar13,uVar9);
    uVar9 = 0;
    pbVar16 = (byte *)(lVar11 + 2);
    if (local_94 != 0) {
      do {
        iVar18 = (*(byte *)(lVar11 + 3) - 1) + (uint)*pbVar16 * 0x100;
        if (-1 < iVar18) {
          iVar19 = 0;
          do {
            uVar20 = (uint)(iVar18 + iVar19) >> 1;
            lVar3 = (ulonglong)uVar20 * 6;
            uVar12 = (uint)*(byte *)(lVar11 + 7 + lVar3) +
                     (uint)*(byte *)(lVar11 + 6 + lVar3) * 0x100 +
                     (uint)*(byte *)(lVar11 + 5 + lVar3) * 0x10000 +
                     (uint)pbVar16[lVar3 + 2] * 0x1000000;
            iVar14 = (uint)(uVar12 < local_60[uVar9]) - (uint)(local_60[uVar9] < uVar12);
            if (iVar14 < 0) {
              iVar18 = uVar20 - 1;
            }
            else {
              if (iVar14 < 1) {
                if (puVar1 != (uint *)0x0) {
                  *puVar1 = uVar20;
                }
                goto LAB_14039557b;
              }
              iVar19 = uVar20 + 1;
            }
          } while (iVar19 <= iVar18);
        }
        if (puVar1 != (uint *)0x0) {
          *puVar1 = 0xffff;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_94);
    }
    iVar19 = 0;
    iVar18 = (uint)*pbVar16 * 0x100 + -1 + (uint)*(byte *)(lVar11 + 3);
    if (-1 < iVar18) {
      do {
        uVar9 = (uint)(iVar18 + iVar19) >> 1;
        lVar3 = (ulonglong)uVar9 * 6;
        uVar20 = (uint)*(byte *)(lVar11 + 7 + lVar3) +
                 (uint)*(byte *)(lVar11 + 6 + lVar3) * 0x100 +
                 (uint)*(byte *)(lVar11 + 5 + lVar3) * 0x10000 +
                 (uint)pbVar16[lVar3 + 2] * 0x1000000;
        iVar14 = (uint)(uVar20 < 0x64666c74) - (uint)(0x64666c74 < uVar20);
        if (iVar14 < 0) {
          iVar18 = uVar9 - 1;
        }
        else {
          if (iVar14 < 1) {
            if (puVar1 != (uint *)0x0) {
              *puVar1 = uVar9;
            }
            goto LAB_14039557b;
          }
          iVar19 = uVar9 + 1;
        }
      } while (iVar19 <= iVar18);
    }
    if (puVar1 != (uint *)0x0) {
      *puVar1 = 0xffff;
    }
LAB_14039557b:
    local_88 = lVar17 + 1;
    if (local_88 == 2) {
      return param_1;
    }
  } while( true );
}

