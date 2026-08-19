// Function: FUN_1403b05f0
// Addr: 1403b05f0
// Size: 1099 bytes


void FUN_1403b05f0(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  longlong lVar13;
  longlong lVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  uint local_80;
  undefined4 *local_70;
  
  if ((*(uint *)(param_2 + 0xd8) & 0x1000000) != 0) {
    iVar5 = *(int *)(param_2 + 0x38);
    if (iVar5 != 5) {
      FUN_1403f8f40(param_2,0,*(undefined4 *)(param_2 + 0x60));
    }
    local_80 = 0;
    do {
      local_70 = (undefined4 *)(param_2 + 0x60);
      uVar16 = *(uint *)(param_2 + 0x60);
      lVar6 = *(longlong *)(param_2 + 0x70);
      lVar7 = *(longlong *)(param_2 + 0x80);
      uVar19 = (ulonglong)uVar16;
      for (uVar17 = uVar16; uVar17 != 0; uVar17 = uVar17 - 1) {
        lVar13 = (ulonglong)(uVar17 - 1) * 0x14;
        uVar11 = uVar17;
        if ((byte)(*(char *)(lVar6 + 0x13 + (ulonglong)(uVar17 - 1) * 0x14) - 8U) < 2)
        goto joined_r0x0001403b075f;
        if (local_80 == 1) {
          uVar18 = ((undefined8 *)(lVar13 + lVar6))[1];
          uVar19 = (ulonglong)((int)uVar19 - 1);
          lVar14 = uVar19 * 0x14;
          *(undefined8 *)(lVar14 + lVar6) = *(undefined8 *)(lVar13 + lVar6);
          ((undefined8 *)(lVar14 + lVar6))[1] = uVar18;
          *(undefined4 *)(lVar14 + 0x10 + lVar6) = *(undefined4 *)(lVar13 + 0x10 + lVar6);
          puVar2 = (undefined4 *)(lVar13 + lVar7);
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          puVar3 = (undefined4 *)(lVar14 + lVar7);
          *puVar3 = *puVar2;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          *(undefined4 *)(lVar14 + 0x10 + lVar7) = *(undefined4 *)(lVar13 + 0x10 + lVar7);
        }
      }
      if (local_80 == 0) {
        if ((uVar16 != 0) && (uVar17 = *(uint *)(param_2 + 0x68), uVar17 <= uVar16)) {
          if (*(uint *)(param_2 + 0xdc) < uVar16) {
            *(undefined1 *)(param_2 + 0x58) = 0;
            cVar15 = '\0';
          }
          else if (*(char *)(param_2 + 0x58) == '\0') {
            cVar15 = '\0';
          }
          else {
            lVar6 = *(longlong *)(param_2 + 0x70);
            lVar13 = 0;
            lVar7 = *(longlong *)(param_2 + 0x78);
            lVar14 = 0;
            if (uVar16 < 0xccccccc) {
              do {
                uVar17 = uVar17 + 0x20 + (uVar17 >> 1);
              } while (uVar17 <= uVar16);
              if (0xccccccb < uVar17) goto LAB_1403b0c8d;
              lVar13 = func_0x0001402cb2b0(*(undefined8 *)(param_2 + 0x80),uVar17 * 0x14);
              lVar14 = func_0x0001402cb2b0(*(undefined8 *)(param_2 + 0x70),uVar17 * 0x14);
              if ((lVar13 == 0) || (lVar14 == 0)) goto LAB_1403b0c8d;
              cVar15 = *(char *)(param_2 + 0x58);
            }
            else {
LAB_1403b0c8d:
              *(undefined1 *)(param_2 + 0x58) = 0;
              cVar15 = '\0';
            }
            if (lVar13 != 0) {
              *(longlong *)(param_2 + 0x80) = lVar13;
            }
            if (lVar14 != 0) {
              *(longlong *)(param_2 + 0x70) = lVar14;
            }
            lVar13 = 0x80;
            if (lVar7 == lVar6) {
              lVar13 = 0x70;
            }
            *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(lVar13 + param_2);
            if (cVar15 == '\0') break;
            *(uint *)(param_2 + 0x68) = uVar17;
          }
          if (cVar15 == '\0') break;
        }
      }
      else {
        *(uint *)(param_2 + 0x60) = uVar16;
      }
      local_80 = local_80 + 1;
    } while (local_80 < 2);
    if (iVar5 != 5) {
      FUN_1403f8f40(param_2,0,*local_70);
    }
  }
  return;
joined_r0x0001403b075f:
  if (uVar11 == 0) goto LAB_1403b0803;
  uVar16 = uVar11 - 1;
  if (1 < (byte)(*(char *)(lVar6 + 0x13 + (ulonglong)uVar16 * 0x14) - 8U)) goto LAB_1403b0803;
  lVar7 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
  if (lVar7 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(lVar7 + 0x28);
  }
  (**(code **)(*(longlong *)(param_3 + 0x90) + 0x48))
            (param_3,*(undefined8 *)(param_3 + 0x98),
             *(undefined4 *)(lVar6 + (ulonglong)uVar16 * 0x14),uVar18);
  uVar11 = uVar16;
  goto joined_r0x0001403b075f;
LAB_1403b0803:
  uVar16 = uVar11;
  if (uVar11 != 0) {
    while( true ) {
      uVar1 = uVar16 - 1;
      lVar7 = (ulonglong)uVar1 * 0x14;
      if ((byte)(*(char *)(lVar7 + 0x13 + lVar6) - 8U) < 2) break;
      uVar4 = *(ushort *)(lVar7 + 0x10 + lVar6);
      if (((((uVar4 & 0x20) == 0) || ((*(byte *)(lVar7 + 0xc + lVar6) & 0x10) != 0)) &&
          ((1 << ((byte)uVar4 & 0x1f) & 0x780fcccU) == 0)) || (uVar16 = uVar1, uVar1 == 0)) break;
    }
  }
  pcVar12 = "cutting";
  if (local_80 == 0) {
    pcVar12 = "measuring";
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402fc440("ARABIC",0,0,0,0,0,"%s stretch at (%u,%u,%u)",pcVar12,uVar16,uVar11,uVar17);
}

