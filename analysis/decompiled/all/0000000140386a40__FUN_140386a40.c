// Function: FUN_140386a40
// Addr: 140386a40
// Size: 635 bytes


void FUN_140386a40(uint *param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  pbVar4 = *(byte **)(param_2 + 0x10);
  pbVar10 = *(byte **)(param_2 + 8);
  iVar13 = *(int *)(param_2 + 0x1c);
  uVar7 = *(uint *)(param_2 + 0x20);
  iVar9 = *(int *)(param_2 + 0x18);
  do {
    if ((iVar13 == 0) && (pbVar4 <= pbVar10)) {
      return;
    }
    uVar11 = *param_1;
    if ((int)uVar11 < 0) {
      return;
    }
    uVar6 = uVar11;
    if (uVar11 < param_1[1] + 1) {
      do {
        uVar6 = uVar6 + 8 + (uVar6 >> 1);
      } while (uVar6 < param_1[1] + 1);
      if (0x3ffffffe < uVar6) {
        *param_1 = ~uVar11;
        return;
      }
      if (uVar6 == 0) {
        if ((uVar11 != 0) && (uVar11 != 0xffffffff)) {
          thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 2));
        }
        lVar5 = 0;
      }
      else {
        puVar1 = param_1 + 2;
        if ((uVar11 == 0) && (*(longlong *)puVar1 != 0)) {
          lVar5 = _malloc_base((ulonglong)uVar6 << 2);
          if (lVar5 == 0) {
LAB_140386b9f:
            uVar11 = *param_1;
            if (uVar11 < uVar6) {
              *param_1 = -uVar11 - 1;
              return;
            }
            goto LAB_140386b02;
          }
          if (param_1[1] != 0) {
            FUN_1404210f0(lVar5,*(undefined8 *)puVar1);
          }
        }
        else {
          lVar5 = _realloc_base(*(undefined8 *)puVar1,(ulonglong)uVar6 << 2);
          if (lVar5 == 0) goto LAB_140386b9f;
        }
      }
      *(longlong *)(param_1 + 2) = lVar5;
      *param_1 = uVar6;
      uVar11 = uVar6;
    }
LAB_140386b02:
    uVar12 = 0;
    uVar6 = param_1[1];
    iVar8 = iVar9;
    if (uVar11 != uVar6) {
      do {
        iVar9 = iVar8;
        if ((iVar13 == 0) && (pbVar4 <= pbVar10)) break;
        iVar13 = iVar13 + -1;
        if (iVar13 < 1) {
          if (pbVar10 < pbVar4) {
            bVar2 = *pbVar10;
            pbVar10 = pbVar10 + 1;
            iVar13 = (bVar2 & 0x3f) + 1;
            uVar7 = bVar2 & 0xc0;
            if ((bVar2 & 0xc0) == 0) {
              uVar7 = 1;
            }
            else if (uVar7 == 0x40) {
              uVar7 = 2;
            }
            else if (uVar7 == 0x80) {
              uVar7 = 0;
            }
            else if (uVar7 == 0xc0) {
              uVar7 = 4;
            }
            if (pbVar10 + uVar7 * iVar13 <= pbVar4) goto LAB_140386c12;
            iVar13 = 0;
            iVar9 = 0;
          }
          else {
            iVar13 = 0;
            iVar9 = 0;
          }
        }
        else {
LAB_140386c12:
          if (uVar7 == 0) {
            iVar9 = 0;
          }
          else if (uVar7 == 1) {
            iVar9 = (int)(char)*pbVar10;
          }
          else if (uVar7 == 2) {
            iVar9 = (int)(short)((ushort)pbVar10[1] + (ushort)*pbVar10 * 0x100);
          }
          else if (uVar7 == 4) {
            iVar9 = (((uint)pbVar10[1] + (uint)*pbVar10 * 0x100) * 0x100 + (uint)pbVar10[2]) * 0x100
                    + (uint)pbVar10[3];
          }
          pbVar10 = pbVar10 + uVar7;
        }
        uVar3 = param_1[1];
        uVar12 = uVar12 + 1;
        param_1[1] = uVar3 + 1;
        *(int *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar3 * 4) = iVar8;
        iVar8 = iVar9;
      } while (uVar12 < uVar11 - uVar6);
    }
  } while( true );
}

