// Function: FUN_1400a5fc0
// Addr: 1400a5fc0
// Size: 2361 bytes


char * FUN_1400a5fc0(longlong param_1,uint *param_2,longlong *param_3)

{
  undefined2 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  byte *pbVar15;
  byte bVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong local_res10;
  byte *local_res20;
  uint *local_98;
  ulonglong local_68;
  ulonglong local_58;
  
  pbVar15 = (byte *)0x0;
  local_res20 = (byte *)0x0;
  if ((param_3 != (longlong *)0x0) && (lVar22 = *param_3, lVar22 != 0)) {
    pbVar15 = (byte *)(param_3[3] + lVar22);
    local_res20 = (byte *)(param_3[2] + lVar22);
  }
  if (param_2 == (uint *)0x0) {
    uVar5 = 0;
LAB_1400a607d:
    uVar11 = (&DAT_140482a50)[(uint)(uVar5 >> 0xc) & 0xf] +
             (&DAT_140482a50)[(uint)(uVar5 >> 8) & 0xf] + (&DAT_140482a50)[(uint)(uVar5 >> 4) & 0xf]
             + (&DAT_140482a50)[(uint)uVar5 & 0xf];
    if ((uVar11 & 7) != 0) {
      pcVar7 = "#base: unsupported option";
LAB_1400a68a4:
      if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
        param_3[3] = (longlong)pbVar15 - *param_3;
      }
      return pcVar7;
    }
    local_58 = (ulonglong)(uVar11 >> 3);
    local_68 = *(uint *)(param_1 + 0x28) * local_58;
    if (param_2 != (uint *)0x0) goto LAB_1400a60fd;
LAB_1400a6128:
    local_res10 = param_1 + 0x4d0;
    if (param_2 == (uint *)0x0) {
      lVar22 = 0;
      local_res10 = param_1 + 0x4d0;
      uVar5 = 0;
      uVar20 = 0;
      lVar23 = 0;
      goto LAB_1400a6170;
    }
  }
  else {
    uVar5 = (ulonglong)*param_2;
    if ((*param_2 & 0x30000) == 0) goto LAB_1400a607d;
    local_58 = 0;
    local_68 = 0;
LAB_1400a60fd:
    if ((((*param_2 & 0x40000) == 0) || (*(longlong *)(param_2 + 0x1e) != 0x400)) ||
       (*(longlong *)(param_2 + 0x20) != 1)) goto LAB_1400a6128;
    local_res10 = *(longlong *)(param_2 + 0x1c);
  }
  lVar22 = *(longlong *)(param_2 + 4);
  uVar5 = *(ulonglong *)(param_2 + 6);
  uVar20 = *(ulonglong *)(param_2 + 8);
  lVar23 = *(longlong *)(param_2 + 10);
LAB_1400a6170:
  local_98 = (uint *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x88);
LAB_1400a61a2:
  if (*(uint *)(param_1 + 0x7c) < uVar20) {
    lVar24 = (ulonglong)*(uint *)(param_1 + 0x7c) * lVar23 + lVar22;
    uVar13 = uVar5;
    if (local_68 < uVar5) {
      uVar13 = local_68;
    }
  }
  else {
    lVar24 = 0;
    uVar13 = 0;
  }
LAB_1400a61d0:
  while( true ) {
    puVar18 = (undefined8 *)(param_1 + 0x98);
    uVar12 = *(uint *)(param_1 + 0x78) * local_58;
    if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
      lVar6 = lVar24 + uVar12;
      lVar21 = uVar13 - uVar12;
    }
    else {
      lVar6 = 0;
      lVar21 = 0;
    }
    if (iVar4 == 0) break;
    if (iVar4 == 1) {
LAB_1400a6228:
      if (local_res20 == pbVar15) goto LAB_1400a688e;
      bVar14 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      uVar11 = *(uint *)(param_1 + 0x8c);
      if (*(int *)(param_1 + 0x58) == 8) {
        uVar12 = 0;
        if (uVar11 != 0) {
          do {
            *(byte *)(param_1 + 0xd0 + uVar12) = bVar14;
            uVar8 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar8;
            uVar11 = *(uint *)(param_1 + 0x8c);
          } while (uVar8 < uVar11);
        }
      }
      else {
        uVar12 = 0;
        if (uVar11 != 0) {
          do {
            *(byte *)(param_1 + 0xd0 + uVar12) = bVar14 >> 4;
            *(byte *)(param_1 + 0xd0 + (ulonglong)((int)uVar12 + 1)) = bVar14 & 0xf;
            uVar8 = (int)uVar12 + 2;
            uVar12 = (ulonglong)uVar8;
            uVar11 = *(uint *)(param_1 + 0x8c);
          } while (uVar8 < uVar11);
        }
      }
      if (((undefined8 *)(param_1 + 0x98) != (undefined8 *)0x0) &&
         (pcVar2 = *(code **)(param_1 + 0x98), pcVar2 != (code *)0x0)) {
        (*pcVar2)(lVar6,lVar21,local_res10,0x400,param_1 + 0xd0,uVar11);
      }
      uVar11 = *(int *)(param_1 + 0x8c) + *(uint *)(param_1 + 0x78);
      if (uVar11 < *(uint *)(param_1 + 0x78)) {
        uVar11 = 0xffffffff;
      }
      iVar4 = 0;
      *(uint *)(param_1 + 0x78) = uVar11;
    }
    else {
      if (iVar4 == 2) goto LAB_1400a6287;
      if (iVar4 == 3) goto LAB_1400a62dd;
LAB_1400a6361:
      while( true ) {
        if (local_res20 == pbVar15) goto LAB_1400a688e;
        bVar14 = *pbVar15;
        pbVar15 = pbVar15 + 1;
        if (iVar4 != 4) break;
        *(byte *)(param_1 + 0x90) = bVar14;
        iVar4 = 5;
      }
      if (*(char *)(param_1 + 0x90) != '\0') {
        if ((puVar18 != (undefined8 *)0x0) && (*(code **)(param_1 + 0xa0) != (code *)0x0)) {
          (**(code **)(param_1 + 0xa0))
                    (lVar6,lVar21,local_res10,0x400,*(char *)(param_1 + 0x90),
                     *(undefined4 *)(param_1 + 0xa8));
        }
        uVar11 = (uint)*(byte *)(param_1 + 0x90) + *(uint *)(param_1 + 0x78);
        *(undefined1 *)(param_1 + 0x90) = 0;
        if (uVar11 < *(uint *)(param_1 + 0x78)) {
          uVar11 = 0xffffffff;
        }
        *(uint *)(param_1 + 0x78) = uVar11;
        if (*local_98 < uVar11) goto LAB_1400a6885;
      }
      if (bVar14 != 0) {
        while( true ) {
          bVar14 = bVar14 - 1;
          uVar11 = *(int *)(param_1 + 0x80) + *(int *)(param_1 + 0x7c);
          *(uint *)(param_1 + 0x7c) = uVar11;
          if (*(uint *)(param_1 + 0x2c) <= uVar11) goto LAB_1400a6885;
          if (uVar11 < uVar20) {
            lVar24 = lVar22 + (ulonglong)uVar11 * lVar23;
            uVar13 = uVar5;
            if (local_68 < uVar5) {
              uVar13 = local_68;
            }
          }
          else {
            lVar24 = 0;
            uVar13 = 0;
          }
          if (bVar14 == 0) break;
          if ((param_1 != -0x98) && (*(code **)(param_1 + 0xa0) != (code *)0x0)) {
            (**(code **)(param_1 + 0xa0))
                      (lVar24,uVar13,local_res10,0x400,0xffffffffffffffff,
                       *(undefined4 *)(param_1 + 0xa8));
          }
        }
        if ((param_1 != -0x98) && (*(code **)(param_1 + 0xa0) != (code *)0x0)) {
          (**(code **)(param_1 + 0xa0))
                    (lVar24,uVar13,local_res10,0x400,*(undefined4 *)(param_1 + 0x78),
                     *(undefined4 *)(param_1 + 0xa8));
        }
      }
      iVar4 = 0;
    }
  }
  if (local_res20 != pbVar15) {
    bVar14 = *pbVar15;
    pbVar15 = pbVar15 + 1;
    if (bVar14 != 0) {
      *(uint *)(param_1 + 0x8c) = (uint)bVar14;
      iVar4 = 1;
      goto LAB_1400a6228;
    }
    iVar4 = 2;
LAB_1400a6287:
    if (local_res20 != pbVar15) {
      bVar14 = *pbVar15;
      pbVar15 = pbVar15 + 1;
      if (bVar14 < 2) goto LAB_1400a6744;
      if (bVar14 == 2) {
        iVar4 = 4;
        goto LAB_1400a6361;
      }
      *(uint *)(param_1 + 0x8c) = (uint)bVar14;
      if ((*(int *)(param_1 + 0x58) == 8) && ((bVar14 & 1) != 0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      *(undefined1 *)(param_1 + 0x91) = uVar3;
      iVar4 = 3;
LAB_1400a62dd:
      if (*(int *)(param_1 + 0x58) == 8) {
        if ((puVar18 == (undefined8 *)0x0) || ((code *)*puVar18 == (code *)0x0)) {
          lVar6 = 0;
        }
        else {
          uVar10 = (ulonglong)*(uint *)(param_1 + 0xac) * (ulonglong)*(uint *)(param_1 + 0x8c);
          uVar12 = (longlong)local_res20 - (longlong)pbVar15;
          if (uVar10 < (ulonglong)((longlong)local_res20 - (longlong)pbVar15)) {
            uVar12 = uVar10;
          }
          lVar6 = (*(code *)*puVar18)(lVar6,lVar21,local_res10,0x400,pbVar15,uVar12);
          pbVar15 = pbVar15 + (ulonglong)*(uint *)(param_1 + 0xac) * lVar6;
        }
        uVar11 = *(uint *)(param_1 + 0x78);
        uVar8 = *(uint *)(param_1 + 0x8c);
        uVar9 = uVar8 - (int)lVar6;
        uVar17 = uVar11 + (int)lVar6;
      }
      else {
        uVar12 = 0;
        uVar11 = *(int *)(param_1 + 0x8c) + 3U >> 2;
        for (; (uVar8 = (uint)uVar12, uVar11 != 0 &&
               (1 < (ulonglong)((longlong)local_res20 - (longlong)pbVar15))); pbVar15 = pbVar15 + 2)
        {
          uVar1 = *(undefined2 *)pbVar15;
          bVar14 = (byte)uVar1;
          *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar8 + 1)) = bVar14 & 0xf;
          bVar16 = (byte)((ushort)uVar1 >> 8);
          *(byte *)(param_1 + 0xd0 + uVar12) = bVar14 >> 4;
          *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar8 + 2)) = bVar16 >> 4;
          uVar12 = (ulonglong)((uVar8 & 0xff) + 4);
          *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar8 + 3)) = bVar16 & 0xf;
          uVar11 = uVar11 - 1;
        }
        uVar10 = (ulonglong)*(uint *)(param_1 + 0x8c);
        if (uVar8 < *(uint *)(param_1 + 0x8c)) {
          uVar10 = uVar12;
        }
        if (((undefined8 *)(param_1 + 0x98) != (undefined8 *)0x0) &&
           (pcVar2 = *(code **)(param_1 + 0x98), pcVar2 != (code *)0x0)) {
          (*pcVar2)(lVar6,lVar21,local_res10,0x400,param_1 + 0xd0,uVar10);
        }
        uVar8 = *(uint *)(param_1 + 0x8c);
        uVar11 = *(uint *)(param_1 + 0x78);
        uVar9 = uVar8 - (int)uVar10;
        uVar17 = uVar11 + (int)uVar10;
      }
      uVar19 = 0;
      if (uVar9 <= uVar8) {
        uVar19 = uVar9;
      }
      if (uVar17 < uVar11) {
        uVar17 = 0xffffffff;
      }
      *(uint *)(param_1 + 0x78) = uVar17;
      *(uint *)(param_1 + 0x8c) = uVar19;
      if (uVar19 == 0) {
        if (*(char *)(param_1 + 0x91) != '\0') {
          if (local_res20 == pbVar15) goto LAB_1400a688e;
          pbVar15 = pbVar15 + 1;
          *(undefined1 *)(param_1 + 0x91) = 0;
        }
        iVar4 = 0;
        goto LAB_1400a61d0;
      }
    }
  }
LAB_1400a688e:
  *(int *)(param_1 + 0x88) = iVar4;
  pcVar7 = "@bmp: internal note: short read";
  goto LAB_1400a68a4;
LAB_1400a6744:
  if ((*(uint *)(param_1 + 0x2c) <= *(uint *)(param_1 + 0x7c)) && (bVar14 == 0)) {
LAB_1400a6885:
    pcVar7 = "#bmp: bad RLE compression";
    goto LAB_1400a68a4;
  }
  if ((puVar18 != (undefined8 *)0x0) && (*(code **)(param_1 + 0xa0) != (code *)0x0)) {
    (**(code **)(param_1 + 0xa0))
              (lVar6,lVar21,local_res10,0x400,0xffffffffffffffff,*(undefined4 *)(param_1 + 0xa8));
  }
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x80);
  uVar11 = *(uint *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (bVar14 != 0) goto LAB_1400a67ea;
  iVar4 = 0;
  goto LAB_1400a61a2;
LAB_1400a67ea:
  if (uVar11 < *(uint *)(param_1 + 0x2c)) {
    do {
      if (uVar11 < uVar20) {
        lVar24 = lVar22 + lVar23 * (ulonglong)uVar11;
        uVar13 = uVar5;
        if (local_68 < uVar5) {
          uVar13 = local_68;
        }
      }
      else {
        lVar24 = 0;
        uVar13 = 0;
      }
      if ((param_1 != -0x98) && (*(code **)(param_1 + 0xa0) != (code *)0x0)) {
        (**(code **)(param_1 + 0xa0))
                  (lVar24,uVar13,local_res10,0x400,0xffffffffffffffff,
                   *(undefined4 *)(param_1 + 0xa8));
      }
      uVar11 = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x80);
      *(uint *)(param_1 + 0x7c) = uVar11;
    } while (uVar11 < *(uint *)(param_1 + 0x2c));
  }
  pcVar7 = (char *)0x0;
  goto LAB_1400a68a4;
}

