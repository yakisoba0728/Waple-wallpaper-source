// Function: FUN_14031dcf0
// Addr: 14031dcf0
// Size: 817 bytes


int FUN_14031dcf0(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  undefined1 *puVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int local_res8 [2];
  uint local_res10;
  uint local_res18;
  uint local_res20;
  
  uVar14 = param_3 * *(int *)(param_1 + 0x250);
  local_res8[0] = 0;
  uVar15 = (uint)((*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20)) + -8 >> 3);
  if (uVar15 < uVar14) {
    return 0xa1;
  }
  iVar16 = param_3 * 5;
  uVar2 = *(uint *)(param_1 + 0x284);
  local_res18 = param_3;
  if (uVar2 < (uint)(*(int *)(param_1 + 0x280) + iVar16)) {
    uVar4 = *(ulonglong *)(param_1 + 0x270);
    uVar5 = *(ulonglong *)(param_1 + 0x278);
    uVar10 = FUN_1402f7ff0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x10),1,uVar2,
                           uVar2 + iVar16,uVar4,local_res8);
    *(ulonglong *)(param_1 + 0x270) = uVar10;
    if (local_res8[0] != 0) {
      return local_res8[0];
    }
    *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + iVar16;
    *(ulonglong *)(param_1 + 0x278) = *(uint *)(param_1 + 0x280) + uVar10;
    if ((uVar4 != 0) && (uVar10 != uVar4)) {
      puVar11 = *(ulonglong **)(param_2 + 0x20);
      if (puVar11 < *(ulonglong **)(param_2 + 0x28)) {
        do {
          uVar6 = *puVar11;
          if ((uVar4 <= uVar6) && (uVar6 < uVar5)) {
            *puVar11 = uVar6 + (uVar10 - uVar4);
          }
          puVar11 = puVar11 + 1;
        } while (puVar11 < *(ulonglong **)(param_2 + 0x28));
      }
    }
  }
  *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + iVar16;
  iVar16 = uVar15 - uVar14;
  uVar14 = param_3 + iVar16;
  local_res10 = 0;
  local_res20 = uVar14;
  if (param_3 != 0) {
    do {
      piVar13 = *(int **)(param_1 + 600);
      lVar1 = (ulonglong)(local_res10 + iVar16) * 8;
      iVar8 = FUN_14031fce0(param_2,*(longlong *)(param_2 + 0x20) + lVar1);
      uVar15 = 1;
      if (1 < *(uint *)(param_1 + 0x250)) {
        do {
          piVar13 = piVar13 + 1;
          iVar3 = *piVar13;
          pcVar7 = *(char **)(*(longlong *)(param_2 + 0x20) + (ulonglong)uVar14 * 8);
          if (*pcVar7 == '\x1e') {
            iVar9 = FUN_14031feb0(pcVar7,*(undefined8 *)(param_2 + 0x10),0,0);
          }
          else if (*pcVar7 == -1) {
            iVar9 = CONCAT31(CONCAT21(CONCAT11(pcVar7[1],pcVar7[2]),pcVar7[3]),pcVar7[4]);
          }
          else {
            iVar9 = FUN_14031fd70(pcVar7,*(undefined8 *)(param_2 + 0x10));
            if (iVar9 < 0x8000) {
              if (iVar9 < -0x7fff) {
                iVar9 = -0x7fffffff;
              }
              else {
                iVar9 = iVar9 << 0x10;
              }
            }
            else {
              iVar9 = 0x7fffffff;
            }
          }
          uVar14 = uVar14 + 1;
          uVar15 = uVar15 + 1;
          iVar8 = iVar8 + (int)((ulonglong)
                                ((longlong)iVar3 * (longlong)iVar9 + 0x8000 +
                                ((longlong)iVar3 * (longlong)iVar9 >> 0x3f)) >> 0x10);
        } while (uVar15 < *(uint *)(param_1 + 0x250));
      }
      *(undefined8 *)(lVar1 + *(longlong *)(param_2 + 0x20)) = *(undefined8 *)(param_1 + 0x278);
      **(undefined1 **)(param_1 + 0x278) = 0xff;
      puVar12 = (undefined1 *)(*(longlong *)(param_1 + 0x278) + 1);
      *(undefined1 **)(param_1 + 0x278) = puVar12;
      *puVar12 = (char)((uint)iVar8 >> 0x18);
      puVar12 = (undefined1 *)(*(longlong *)(param_1 + 0x278) + 1);
      *(undefined1 **)(param_1 + 0x278) = puVar12;
      *puVar12 = (char)((uint)iVar8 >> 0x10);
      puVar12 = (undefined1 *)(*(longlong *)(param_1 + 0x278) + 1);
      *(undefined1 **)(param_1 + 0x278) = puVar12;
      *puVar12 = (char)((uint)iVar8 >> 8);
      puVar12 = (undefined1 *)(*(longlong *)(param_1 + 0x278) + 1);
      *(undefined1 **)(param_1 + 0x278) = puVar12;
      *puVar12 = (char)iVar8;
      *(longlong *)(param_1 + 0x278) = *(longlong *)(param_1 + 0x278) + 1;
      local_res10 = local_res10 + 1;
    } while (local_res10 < local_res18);
  }
  *(ulonglong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x20) + (ulonglong)local_res20 * 8;
  return local_res8[0];
}

