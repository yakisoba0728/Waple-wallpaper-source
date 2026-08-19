// Function: FUN_1403441b0
// Addr: 1403441b0
// Size: 402 bytes


int FUN_1403441b0(longlong param_1,short param_2,undefined8 *param_3)

{
  short sVar1;
  short *psVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  short *psVar10;
  uint uVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  int local_res20 [2];
  
  uVar11 = 0xffffffff;
  psVar2 = *(short **)(param_1 + 0x1e8);
  iVar6 = 0;
  local_res20[0] = 0;
  bVar16 = false;
  uVar9 = 0;
  uVar13 = 0xffffffff;
  uVar15 = 0xffffffff;
  psVar10 = psVar2;
  uVar14 = uVar13;
  uVar4 = 0xffffffff;
  bVar5 = false;
  if (*(ushort *)(param_1 + 0x1d0) != 0) {
    do {
      bVar16 = bVar5;
      uVar11 = uVar4;
      if ((psVar10[3] == param_2) && (psVar10[4] != 0)) {
        sVar1 = *psVar10;
        if (sVar1 == 0) {
LAB_14034428b:
          uVar15 = (uint)uVar9;
        }
        else if (sVar1 == 1) {
          if (psVar10[2] == 0) {
            uVar13 = (uint)uVar9;
          }
          else if (psVar10[1] == 0) {
            uVar11 = (uint)uVar9;
          }
        }
        else {
          if (sVar1 == 2) goto LAB_14034428b;
          if (((sVar1 == 3) && ((uVar14 == 0xffffffff || ((psVar10[2] & 0x3ffU) == 9)))) &&
             ((sVar1 = psVar10[1], sVar1 == 0 || ((sVar1 == 1 || (sVar1 == 10)))))) {
            uVar14 = (uint)uVar9;
            bVar16 = (psVar10[2] & 0x3ffU) == 9;
          }
        }
      }
      uVar9 = uVar9 + 1;
      psVar10 = psVar10 + 0xc;
      uVar4 = uVar11;
      bVar5 = bVar16;
    } while (uVar9 < *(ushort *)(param_1 + 0x1d0));
  }
  if ((int)uVar13 < 0) {
    uVar13 = uVar11;
  }
  pcVar12 = (code *)0x0;
  if ((int)uVar14 < 0) {
    if ((int)uVar13 < 0) {
      if ((int)uVar15 < 0) goto LAB_140344310;
      psVar10 = psVar2 + (longlong)(int)uVar15 * 0xc;
      goto LAB_140344309;
    }
  }
  else if (((int)uVar13 < 0) || (bVar16)) {
    psVar10 = psVar2 + (longlong)(int)uVar14 * 0xc;
    sVar1 = psVar2[(longlong)(int)uVar14 * 0xc + 1];
    if ((sVar1 != 0) && ((sVar1 != 1 && (sVar1 != 10)))) goto LAB_140344310;
LAB_140344309:
    pcVar12 = FUN_14034dca0;
    goto LAB_140344310;
  }
  pcVar12 = FUN_14034dc00;
  psVar10 = psVar2 + (longlong)(int)uVar13 * 0xc;
LAB_140344310:
  if ((psVar10 == (short *)0x0) || (pcVar12 == (code *)0x0)) {
    *param_3 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(psVar10 + 8) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x200);
      uVar7 = FUN_1402f80c0(uVar8,1,0,psVar10[4],0,local_res20);
      *(undefined8 *)(psVar10 + 8) = uVar7;
      if (((local_res20[0] != 0) ||
          (local_res20[0] = func_0x0001402f5d20(uVar3,*(undefined4 *)(psVar10 + 6)),
          local_res20[0] != 0)) ||
         (local_res20[0] = func_0x0001402f5580(uVar3,*(undefined8 *)(psVar10 + 8),psVar10[4]),
         local_res20[0] != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_1402f8060(uVar8,*(undefined8 *)(psVar10 + 8));
      }
    }
    uVar8 = (*pcVar12)(psVar10,uVar8);
    *param_3 = uVar8;
    iVar6 = local_res20[0];
  }
  return iVar6;
}

