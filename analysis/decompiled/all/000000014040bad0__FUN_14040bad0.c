// Function: FUN_14040bad0
// Addr: 14040bad0
// Size: 761 bytes


void FUN_14040bad0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  uint local_38 [4];
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x98) + 8) == 0) {
    iVar10 = 0;
    lVar2 = *(longlong *)(param_1 + 0x40);
    iVar13 = *(int *)(param_1 + 0x3c) + -1;
    uVar1 = *(uint *)(param_1 + 0x34);
    iVar8 = iVar13;
    if (-1 < iVar13) {
      do {
        uVar4 = (uint)(iVar8 + iVar10) >> 1;
        uVar6 = *(uint *)(lVar2 + (ulonglong)uVar4 * 0x24);
        if (uVar6 < 0x69736f6d) {
          if (0x69736f6b < uVar6) {
            uVar6 = *(uint *)(lVar2 + (ulonglong)uVar4 * 0x24 + 0x1c);
            goto LAB_14040bb3c;
          }
          iVar10 = uVar4 + 1;
        }
        else {
          iVar8 = uVar4 - 1;
        }
      } while (iVar10 <= iVar8);
    }
    uVar6 = 0;
LAB_14040bb3c:
    local_38[0] = 0;
    if (uVar6 != uVar1) {
      local_38[0] = uVar6;
    }
    iVar10 = 0;
    iVar8 = iVar13;
    if (-1 < iVar13) {
      do {
        uVar4 = (uint)(iVar8 + iVar10) >> 1;
        uVar6 = *(uint *)(lVar2 + (ulonglong)uVar4 * 0x24);
        if (uVar6 < 0x696e6975) {
          if (0x696e6973 < uVar6) {
            uVar6 = *(uint *)(lVar2 + (ulonglong)uVar4 * 0x24 + 0x1c);
            goto LAB_14040bb83;
          }
          iVar10 = uVar4 + 1;
        }
        else {
          iVar8 = uVar4 - 1;
        }
      } while (iVar10 <= iVar8);
    }
    uVar6 = 0;
LAB_14040bb83:
    local_38[1] = 0;
    if (uVar6 != uVar1) {
      local_38[1] = uVar6;
    }
    iVar10 = 0;
    iVar8 = iVar13;
    if (-1 < iVar13) {
      do {
        uVar4 = (uint)(iVar8 + iVar10) >> 1;
        uVar6 = *(uint *)(lVar2 + (ulonglong)uVar4 * 0x24);
        if (uVar6 < 0x6d65646a) {
          if (0x6d656468 < uVar6) {
            uVar6 = *(uint *)(lVar2 + (ulonglong)uVar4 * 0x24 + 0x1c);
            goto LAB_14040bbd2;
          }
          iVar10 = uVar4 + 1;
        }
        else {
          iVar8 = uVar4 - 1;
        }
      } while (iVar10 <= iVar8);
    }
    uVar6 = 0;
LAB_14040bbd2:
    local_38[2] = 0;
    if (uVar6 != uVar1) {
      local_38[2] = uVar6;
    }
    iVar8 = 0;
    if (-1 < iVar13) {
      do {
        uVar4 = (uint)(iVar13 + iVar8) >> 1;
        uVar6 = *(uint *)(lVar2 + (ulonglong)uVar4 * 0x24);
        if (uVar6 < 0x66696e62) {
          if (0x66696e60 < uVar6) {
            uVar6 = *(uint *)(lVar2 + (ulonglong)uVar4 * 0x24 + 0x1c);
            goto LAB_14040bc26;
          }
          iVar8 = uVar4 + 1;
        }
        else {
          iVar13 = uVar4 - 1;
        }
      } while (iVar8 <= iVar13);
    }
    uVar6 = 0;
LAB_14040bc26:
    local_38[3] = 0;
    if (uVar6 != uVar1) {
      local_38[3] = uVar6;
    }
    local_38[3] = local_38[3] | local_38[0] | local_38[1] | local_38[2];
    if ((local_38[3] != 0) && (uVar1 = *(uint *)(param_2 + 0x60), uVar1 != 0)) {
      lVar2 = *(longlong *)(param_2 + 0x70);
      uVar6 = 0;
      local_38[3] = ~local_38[3];
      uVar14 = 4;
      uVar5 = 0;
      do {
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        if (uVar1 <= uVar4) break;
      } while (*(char *)(lVar2 + 0xf) == *(char *)(lVar2 + 0xf + uVar5 * 0x14));
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          uVar9 = uVar4;
          uVar4 = (uint)uVar5;
          switch(*(byte *)(lVar2 + 0xf + (ulonglong)uVar9 * 0x14) & 0xf) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 7:
            iVar13 = (int)uVar14;
            if ((iVar13 == 3) || (iVar13 == 0)) {
              bVar3 = 1;
              if (uVar6 < uVar9) {
                lVar7 = 4;
                if (iVar13 == 3) {
                  lVar7 = 8;
                }
                uVar11 = *(uint *)((longlong)local_38 + lVar7);
                do {
                  uVar14 = (ulonglong)uVar6;
                  uVar6 = uVar6 + 1;
                  *(uint *)(lVar2 + 4 + uVar14 * 0x14) =
                       local_38[3] & *(uint *)(lVar2 + 4 + uVar14 * 0x14) | uVar11;
                } while (uVar6 < uVar9);
              }
            }
            else {
              bVar3 = 0;
            }
            uVar14 = (ulonglong)(-(uint)bVar3 & 3);
            if (uVar9 < uVar4) {
              uVar6 = local_38[uVar14];
              uVar11 = uVar9;
              do {
                uVar12 = (ulonglong)uVar11;
                uVar11 = uVar11 + 1;
                *(uint *)(lVar2 + 4 + uVar12 * 0x14) =
                     *(uint *)(lVar2 + 4 + uVar12 * 0x14) & local_38[3] | uVar6;
              } while (uVar11 < uVar4);
            }
            break;
          case 6:
          case 8:
            uVar14 = 4;
          }
          lVar7 = uVar5 * 0x14;
          do {
            uVar6 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar6;
            if (*(uint *)(param_2 + 0x60) <= uVar6) break;
          } while (*(char *)(*(longlong *)(param_2 + 0x70) + 0xf + lVar7) ==
                   *(char *)(*(longlong *)(param_2 + 0x70) + 0xf + uVar5 * 0x14));
          uVar6 = uVar9;
        } while (uVar4 < uVar1);
      }
    }
  }
  return;
}

