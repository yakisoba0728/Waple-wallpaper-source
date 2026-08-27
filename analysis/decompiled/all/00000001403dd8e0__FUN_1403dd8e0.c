// Function: FUN_1403dd8e0
// Addr: 1403dd8e0
// Size: 795 bytes


void FUN_1403dd8e0(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  uVar12 = 0;
  lVar4 = *(longlong *)(param_1 + 0x70);
  if (uVar3 != 0) {
    do {
      lVar5 = *(longlong *)(param_1 + 0x10);
      lVar1 = uVar12 * 0x14;
      uVar11 = *(uint *)(lVar1 + lVar4);
      uVar6 = (**(code **)(lVar5 + 0x28))(lVar5,uVar11,*(undefined8 *)(lVar5 + 0x68));
      if (0x7f < uVar11) {
        iVar7 = FUN_1403e6900(uVar11);
        uVar9 = uVar6;
        if (iVar7 != 0) {
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 2;
          uVar9 = uVar6 | 0x20;
          if (uVar11 == 0x200c) {
            uVar9 = uVar6 | 0x220;
          }
          else if (uVar11 == 0x200d) {
            uVar9 = uVar6 | 0x120;
          }
          else {
            if (((2 < uVar11 - 0x180b) && (uVar11 != 0x180f)) && (0x5f < uVar11 - 0xe0020)) {
              if (uVar11 != 0x34f) goto LAB_1403dd9bc;
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x10;
            }
            uVar9 = uVar6 | 0x60;
          }
        }
LAB_1403dd9bc:
        uVar8 = 1 << ((byte)uVar6 & 0x1f);
        if (0x1f < uVar6) {
          uVar8 = 0;
        }
        uVar6 = uVar9;
        if ((uVar8 & 0x1c00) != 0) {
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x80;
          if (uVar11 == 0x1a60) {
            uVar6 = uVar9 | 0xfe80;
          }
          else if (uVar11 == 0xfc6) {
            uVar6 = uVar9 | 0xfe80;
          }
          else if (uVar11 == 0xf39) {
            uVar6 = uVar9 | 0x7f80;
          }
          else {
            iVar7 = (**(code **)(lVar5 + 0x18))(lVar5,uVar11,*(undefined8 *)(lVar5 + 0x58));
            uVar6 = uVar9 | (uint)(byte)(&DAT_14045c1a0)[iVar7] << 8 | 0x80;
          }
        }
      }
      *(ushort *)(lVar1 + 0x10 + lVar4) = (ushort)uVar6;
      uVar11 = *(uint *)(lVar1 + lVar4);
      if ((0x7f < uVar11) && (uVar9 = uVar6 & 0x1f, (1 << (sbyte)uVar9 & 0x200003a0U) == 0)) {
        if ((uVar9 == 0x18) && (uVar11 - 0x1f3fb < 5)) {
LAB_1403ddabe:
          *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x80;
          puVar2 = (ushort *)(lVar1 + 0x10 + lVar4);
          *puVar2 = *puVar2 | 0x80;
        }
        else {
          iVar7 = (int)uVar12;
          if ((iVar7 == 0) || (0x19 < uVar11 - 0x1f1e6)) {
            if ((uVar9 == 1) && (((ushort)uVar6 >> 8 & 1) != 0)) {
              *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x80;
              uVar11 = iVar7 + 1;
              puVar2 = (ushort *)(lVar1 + 0x10 + lVar4);
              *puVar2 = *puVar2 | 0x80;
              if (uVar11 < uVar3) {
                puVar10 = (uint *)((ulonglong)uVar11 * 0x14 + lVar4);
                uVar6 = *puVar10;
                if ((uVar6 < 0x1fffe) &&
                   (uVar6 = (uint)(byte)(&DAT_14046f3d0)
                                        [(uVar6 >> 6 & 0xf) + 0x40 +
                                         ((byte)(&DAT_14046f3d0)[uVar6 >> 0xb] >>
                                          (sbyte)((uVar6 >> 10 & 1) << 2) & 0xf) * 0x10] * 0x40 +
                            (uVar6 & 0x3f),
                   ((byte)(&DAT_14046f4b0)[uVar6 >> 3] >> ((byte)uVar6 & 7) & 1) != 0)) {
                  uVar12 = (ulonglong)uVar11;
                  FUN_14039ee40(puVar10,param_1);
                  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 0x80;
                  *(ushort *)(puVar10 + 4) = (ushort)puVar10[4] | 0x80;
                }
              }
            }
            else {
              if ((uVar11 - 0xff9e < 2) || (uVar11 - 0xe0020 < 0x60)) goto LAB_1403ddabe;
              if (uVar11 == 0x2044) {
                *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) | 1;
              }
            }
          }
          else {
            lVar5 = (ulonglong)(iVar7 - 1) * 0x14;
            if ((*(int *)(lVar5 + lVar4) - 0x1f1e6U < 0x1a) &&
               ((*(byte *)(lVar5 + 0x10 + lVar4) & 0x80) == 0)) goto LAB_1403ddabe;
          }
        }
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while (uVar11 < uVar3);
  }
  return;
}

