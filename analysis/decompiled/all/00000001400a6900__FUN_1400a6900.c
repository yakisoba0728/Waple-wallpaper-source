// Function: FUN_1400a6900
// Addr: 1400a6900
// Size: 2455 bytes


char * FUN_1400a6900(longlong param_1,uint *param_2,longlong *param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  byte bVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong local_res10;
  longlong local_res20;
  longlong local_50;
  longlong local_48;
  ulonglong uVar5;
  
  puVar15 = (uint *)0x0;
  lVar14 = 0;
  if ((param_3 != (longlong *)0x0) && (lVar6 = *param_3, lVar6 != 0)) {
    puVar15 = (uint *)(param_3[3] + lVar6);
    lVar14 = param_3[2] + lVar6;
  }
  if (param_2 == (uint *)0x0) {
    uVar22 = 0;
LAB_1400a6977:
    uVar8 = (&DAT_140482a50)[(uint)(uVar22 >> 0xc) & 0xf] +
            (&DAT_140482a50)[(uint)(uVar22 >> 8) & 0xf] +
            (&DAT_140482a50)[(uint)(uVar22 >> 4) & 0xf] + (&DAT_140482a50)[(uint)uVar22 & 0xf];
    if ((uVar8 & 7) != 0) {
      pcVar7 = "#base: unsupported option";
LAB_1400a725e:
      if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
        param_3[3] = (longlong)puVar15 - *param_3;
      }
      return pcVar7;
    }
    local_res10 = (ulonglong)(uVar8 >> 3);
    uVar22 = *(uint *)(param_1 + 0x28) * local_res10;
    if (param_2 != (uint *)0x0) goto LAB_1400a69dc;
LAB_1400a6a06:
    local_res20 = param_1 + 0x4d0;
    if (param_2 == (uint *)0x0) {
      uVar19 = 0;
      local_48 = 0;
      uVar20 = 0;
      local_50 = 0;
      goto LAB_1400a6a52;
    }
  }
  else {
    uVar22 = (ulonglong)*param_2;
    if ((*param_2 & 0x30000) == 0) goto LAB_1400a6977;
    local_res10 = 0;
    uVar22 = 0;
LAB_1400a69dc:
    if ((((*param_2 & 0x40000) == 0) || (*(longlong *)(param_2 + 0x1e) != 0x400)) ||
       (*(longlong *)(param_2 + 0x20) != 1)) goto LAB_1400a6a06;
    local_res20 = *(longlong *)(param_2 + 0x1c);
  }
  local_48 = *(longlong *)(param_2 + 4);
  uVar19 = *(ulonglong *)(param_2 + 6);
  uVar20 = *(ulonglong *)(param_2 + 8);
  local_50 = *(longlong *)(param_2 + 10);
LAB_1400a6a52:
  do {
    while( true ) {
      uVar9 = *(uint *)(param_1 + 0x28);
      uVar8 = *(uint *)(param_1 + 0x78);
      if (uVar8 == uVar9) {
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x80);
        *(undefined4 *)(param_1 + 0x78) = 0;
        if (*(uint *)(param_1 + 0x2c) <= *(uint *)(param_1 + 0x7c)) {
          pcVar7 = (char *)0x0;
          goto LAB_1400a725e;
        }
        uVar8 = 0;
      }
      uVar11 = *(uint *)(param_1 + 0x7c);
      iVar12 = *(int *)(param_1 + 0x58);
      if (uVar11 < uVar20) break;
      uVar10 = uVar9 - uVar8;
LAB_1400a711d:
      uVar11 = 0;
      if (uVar10 <= uVar9) {
        uVar11 = uVar10;
      }
      if (iVar12 == 1) {
        iVar12 = 0x20;
        uVar11 = uVar11 + 0x1f >> 5;
        iVar17 = 0x800;
        iVar18 = 0x100;
      }
      else if (iVar12 == 2) {
        iVar12 = 0x10;
        uVar11 = uVar11 + 0xf >> 4;
        iVar17 = 0x400;
        iVar18 = 0x80;
      }
      else {
        iVar12 = 8;
        uVar11 = uVar11 + 7 >> 3;
        iVar17 = 0x200;
        iVar18 = 0x40;
      }
      for (; 0x3f < uVar11; uVar11 = uVar11 - 0x40) {
        if ((ulonglong)(lVar14 - (longlong)puVar15) < 0x100) goto LAB_1400a71c0;
        uVar8 = uVar8 + iVar17;
        puVar15 = puVar15 + 0x40;
        if (uVar9 < uVar8) {
          uVar8 = uVar9;
        }
        *(uint *)(param_1 + 0x78) = uVar8;
      }
      for (; 7 < uVar11; uVar11 = uVar11 - 8) {
LAB_1400a71c0:
        if ((ulonglong)(lVar14 - (longlong)puVar15) < 0x20) goto LAB_1400a7210;
        uVar8 = uVar8 + iVar18;
        puVar15 = puVar15 + 8;
        if (uVar9 < uVar8) {
          uVar8 = uVar9;
        }
        *(uint *)(param_1 + 0x78) = uVar8;
      }
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
LAB_1400a7210:
        if ((ulonglong)(lVar14 - (longlong)puVar15) < 4) goto LAB_1400a7245;
        uVar8 = uVar8 + iVar12;
        puVar15 = puVar15 + 1;
        if (uVar9 < uVar8) {
          uVar8 = uVar9;
        }
        *(uint *)(param_1 + 0x78) = uVar8;
      }
    }
    uVar13 = uVar19;
    if (uVar22 < uVar19) {
      uVar13 = uVar22;
    }
    uVar10 = uVar9 - uVar8;
    uVar21 = uVar8 * local_res10;
    if (uVar13 <= uVar21) goto LAB_1400a711d;
    uVar5 = 0;
    uVar4 = 0;
    uVar8 = 0;
    if (uVar10 <= uVar9) {
      uVar8 = uVar10;
    }
    if (iVar12 == 1) {
      uVar9 = uVar8 + 0x1f >> 5;
      uVar4 = uVar5;
      uVar8 = 0x10;
      if (uVar9 < 0x10) {
        uVar8 = uVar9;
      }
      for (; (uVar8 != 0 && (3 < (ulonglong)(lVar14 - (longlong)puVar15))); puVar15 = puVar15 + 1) {
        uVar9 = *puVar15;
        uVar3 = (uint)uVar4;
        uVar10 = uVar9 & 0xff0000;
        uVar2 = uVar9 & 0xff00;
        bVar16 = (byte)uVar9;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 1)) = bVar16 >> 6 & 1;
        *(byte *)(param_1 + 0xd0 + uVar4) = bVar16 >> 7;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 2)) = bVar16 >> 5 & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 3)) = bVar16 >> 4 & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 4)) = bVar16 >> 3 & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 5)) = bVar16 >> 2 & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 6)) = bVar16 >> 1 & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 7)) = bVar16 & 1;
        *(char *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 8)) = (char)(uVar2 >> 0xf);
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 9)) = (byte)(uVar2 >> 0xe) & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 10)) = (byte)(uVar2 >> 0xd) & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0xb)) = (byte)(uVar2 >> 0xc) & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0xc)) = (byte)(uVar2 >> 0xb) & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0xd)) = (byte)(uVar2 >> 10) & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0xe)) = (byte)(uVar2 >> 9) & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0xf)) = (byte)(uVar2 >> 8) & 1;
        *(char *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x10)) = (char)(uVar10 >> 0x17);
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x11)) = (byte)(uVar10 >> 0x16) & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x12)) = (byte)(uVar10 >> 0x15) & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x13)) = (byte)(uVar10 >> 0x14) & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x14)) = (byte)(uVar10 >> 0x13) & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x15)) = (byte)(uVar10 >> 0x12) & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x16)) = (byte)(uVar10 >> 0x11) & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x17)) = (byte)(uVar10 >> 0x10) & 1;
        bVar16 = (byte)(uVar9 >> 0x18);
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x18)) = bVar16 >> 7;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x19)) = bVar16 >> 6 & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x1a)) = bVar16 >> 5 & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x1b)) = bVar16 >> 4 & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x1c)) = bVar16 >> 3 & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x1d)) = bVar16 >> 2 & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x1e)) = bVar16 >> 1 & 1;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0x1f)) = bVar16 & 1;
        uVar4 = (ulonglong)((uVar3 & 0x1ff) + 0x20);
        uVar8 = uVar8 - 1;
      }
    }
    else if (iVar12 == 2) {
      uVar9 = uVar8 + 0xf >> 4;
      uVar4 = uVar5;
      uVar8 = 0x20;
      if (uVar9 < 0x20) {
        uVar8 = uVar9;
      }
      for (; (uVar8 != 0 && (3 < (ulonglong)(lVar14 - (longlong)puVar15))); puVar15 = puVar15 + 1) {
        uVar9 = *puVar15;
        uVar3 = (uint)uVar4;
        uVar10 = uVar9 & 0xff0000;
        uVar2 = uVar9 & 0xff00;
        bVar16 = (byte)uVar9;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 1)) = bVar16 >> 4 & 3;
        *(byte *)(param_1 + 0xd0 + uVar4) = bVar16 >> 6;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 2)) = bVar16 >> 2 & 3;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 3)) = bVar16 & 3;
        *(char *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 4)) = (char)(uVar2 >> 0xe);
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 5)) = (byte)(uVar2 >> 0xc) & 3;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 6)) = (byte)(uVar2 >> 10) & 3;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 7)) = (byte)(uVar2 >> 8) & 3;
        *(char *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 8)) = (char)(uVar10 >> 0x16);
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 9)) = (byte)(uVar10 >> 0x14) & 3;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 10)) = (byte)(uVar10 >> 0x12) & 3;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0xb)) = (byte)(uVar10 >> 0x10) & 3;
        bVar16 = (byte)(uVar9 >> 0x18);
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0xc)) = bVar16 >> 6;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0xd)) = bVar16 >> 4 & 3;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0xe)) = bVar16 >> 2 & 3;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar3 + 0xf)) = bVar16 & 3;
        uVar4 = (ulonglong)((uVar3 & 0x1ff) + 0x10);
        uVar8 = uVar8 - 1;
      }
    }
    else {
      uVar9 = uVar8 + 7 >> 3;
      uVar8 = 0x40;
      if (uVar9 < 0x40) {
        uVar8 = uVar9;
      }
      for (; (uVar8 != 0 && (3 < (ulonglong)(lVar14 - (longlong)puVar15))); puVar15 = puVar15 + 1) {
        uVar9 = *puVar15;
        uVar10 = (uint)uVar4;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar10 + 1)) = (byte)uVar9 & 0xf;
        *(byte *)(param_1 + 0xd0 + uVar4) = (byte)uVar9 >> 4;
        *(char *)(param_1 + 0xd0 + (ulonglong)(uVar10 + 2)) = (char)((uVar9 & 0xff00) >> 0xc);
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar10 + 3)) = (byte)((uVar9 & 0xff00) >> 8) & 0xf;
        *(char *)(param_1 + 0xd0 + (ulonglong)(uVar10 + 4)) = (char)((uVar9 & 0xff0000) >> 0x14);
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar10 + 5)) =
             (byte)((uVar9 & 0xff0000) >> 0x10) & 0xf;
        bVar16 = (byte)(uVar9 >> 0x18);
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar10 + 6)) = bVar16 >> 4;
        *(byte *)(param_1 + 0xd0 + (ulonglong)(uVar10 + 7)) = bVar16 & 0xf;
        uVar4 = (ulonglong)((uVar10 & 0x1ff) + 8);
        uVar8 = uVar8 - 1;
      }
    }
    uVar9 = *(uint *)(param_1 + 0x28) - *(int *)(param_1 + 0x78);
    uVar8 = 0;
    if (uVar9 <= *(uint *)(param_1 + 0x28)) {
      uVar8 = uVar9;
    }
    uVar5 = (ulonglong)uVar8;
    if ((uint)uVar4 < uVar8) {
      uVar5 = uVar4;
    }
    if ((((undefined8 *)(param_1 + 0x98) == (undefined8 *)0x0) ||
        (pcVar1 = *(code **)(param_1 + 0x98), pcVar1 == (code *)0x0)) ||
       (lVar6 = (*pcVar1)((ulonglong)uVar11 * local_50 + local_48 + uVar21,uVar13 - uVar21,
                          local_res20,0x400,param_1 + 0xd0,uVar5), lVar6 == 0)) break;
    uVar8 = (int)lVar6 + *(uint *)(param_1 + 0x78);
    if (uVar8 < *(uint *)(param_1 + 0x78)) {
      uVar8 = 0xffffffff;
    }
    *(uint *)(param_1 + 0x78) = uVar8;
  } while( true );
LAB_1400a7245:
  pcVar7 = "@bmp: internal note: short read";
  goto LAB_1400a725e;
}

