// Function: FUN_1403440e0
// Addr: 1403440e0
// Size: 583 bytes


int FUN_1403440e0(longlong param_1,short param_2,undefined8 *param_3)

{
  short sVar1;
  short *psVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  short *psVar9;
  uint uVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  int local_res20 [2];
  
  uVar10 = 0xffffffff;
  psVar2 = *(short **)(param_1 + 0x1e8);
  local_res20[0] = 0;
  bVar15 = false;
  uVar8 = 0;
  uVar12 = 0xffffffff;
  uVar14 = 0xffffffff;
  psVar9 = psVar2;
  uVar13 = uVar12;
  uVar4 = 0xffffffff;
  bVar5 = false;
  if (*(ushort *)(param_1 + 0x1d0) != 0) {
    do {
      bVar15 = bVar5;
      uVar10 = uVar4;
      if ((psVar9[3] == param_2) && (psVar9[4] != 0)) {
        sVar1 = *psVar9;
        if (sVar1 == 0) {
LAB_1403441bb:
          uVar14 = (uint)uVar8;
        }
        else if (sVar1 == 1) {
          if (psVar9[2] == 0) {
            uVar12 = (uint)uVar8;
          }
          else if (psVar9[1] == 0) {
            uVar10 = (uint)uVar8;
          }
        }
        else {
          if (sVar1 == 2) goto LAB_1403441bb;
          if (((sVar1 == 3) && ((uVar13 == 0xffffffff || ((psVar9[2] & 0x3ffU) == 9)))) &&
             ((sVar1 = psVar9[1], sVar1 == 0 || ((sVar1 == 1 || (sVar1 == 10)))))) {
            uVar13 = (uint)uVar8;
            bVar15 = (psVar9[2] & 0x3ffU) == 9;
          }
        }
      }
      uVar8 = uVar8 + 1;
      psVar9 = psVar9 + 0xc;
      uVar4 = uVar10;
      bVar5 = bVar15;
    } while (uVar8 < *(ushort *)(param_1 + 0x1d0));
  }
  if ((int)uVar12 < 0) {
    uVar12 = uVar10;
  }
  pcVar11 = (code *)0x0;
  if ((int)uVar13 < 0) {
    if ((int)uVar12 < 0) {
      if ((int)uVar14 < 0) goto LAB_140344240;
      psVar9 = psVar2 + (longlong)(int)uVar14 * 0xc;
      goto LAB_140344239;
    }
  }
  else if (((int)uVar12 < 0) || (bVar15)) {
    psVar9 = psVar2 + (longlong)(int)uVar13 * 0xc;
    sVar1 = psVar2[(longlong)(int)uVar13 * 0xc + 1];
    if ((sVar1 != 0) && ((sVar1 != 1 && (sVar1 != 10)))) goto LAB_140344240;
LAB_140344239:
    pcVar11 = FUN_14034dbd0;
    goto LAB_140344240;
  }
  pcVar11 = FUN_14034db30;
  psVar9 = psVar2 + (longlong)(int)uVar12 * 0xc;
LAB_140344240:
  if ((psVar9 == (short *)0x0) || (pcVar11 == (code *)0x0)) {
    local_res20[0] = 0;
    *param_3 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(psVar9 + 8) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x200);
      uVar6 = FUN_1402f7ff0(uVar7,1,0,psVar9[4],0,local_res20);
      *(undefined8 *)(psVar9 + 8) = uVar6;
      if (((local_res20[0] != 0) ||
          (local_res20[0] = FUN_1402f5c50(uVar3,*(undefined4 *)(psVar9 + 6)), local_res20[0] != 0))
         || (local_res20[0] = FUN_1402f54b0(uVar3,*(undefined8 *)(psVar9 + 8),psVar9[4]),
            local_res20[0] != 0)) {
        FUN_1402f7f90(uVar7,*(undefined8 *)(psVar9 + 8));
        psVar9[8] = 0;
        psVar9[9] = 0;
        psVar9[10] = 0;
        psVar9[0xb] = 0;
        psVar9[4] = 0;
        *param_3 = 0;
        return local_res20[0];
      }
    }
    uVar7 = (*pcVar11)(psVar9,uVar7);
    *param_3 = uVar7;
  }
  return local_res20[0];
}

