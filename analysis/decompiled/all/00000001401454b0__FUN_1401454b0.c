// Function: FUN_1401454b0
// Addr: 1401454b0
// Size: 345 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401454b0(longlong *param_1,int param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  plVar1 = (longlong *)*param_1;
  iVar2 = param_4 + 1;
  iVar14 = _UNK_140492c14 << iVar2;
  iVar15 = _UNK_140492c18 << iVar2;
  iVar16 = _UNK_140492c1c << iVar2;
  uVar10 = (_DAT_140492c10 << iVar2) + param_3;
  uVar11 = iVar14 + param_3;
  uVar12 = iVar15 + param_3;
  uVar13 = iVar16 + param_3;
  lVar4 = (longlong)param_2;
  uVar6 = -(uint)((int)uVar10 < 0);
  uVar7 = -(uint)((int)uVar11 < 0);
  uVar8 = -(uint)((int)uVar12 < 0);
  uVar9 = -(uint)((int)uVar13 < 0);
  param_2 = param_3 + param_2;
  *plVar1 = (longlong)(int)(((_DAT_140492c10 << iVar2) + param_2 & uVar6 | ~uVar6 & uVar10) * 2);
  plVar1[1] = (longlong)(int)((iVar14 + param_2 & uVar7 | ~uVar7 & uVar11) * 2);
  plVar1[2] = (longlong)(int)((iVar15 + param_2 & uVar8 | ~uVar8 & uVar12) * 2);
  plVar1[3] = (longlong)(int)((iVar16 + param_2 & uVar9 | ~uVar9 & uVar13) * 2);
  iVar2 = 1 << ((byte)param_4 & 0x1f);
  plVar1[4] = (longlong)(iVar2 + param_3);
  iVar14 = 1 << ((byte)param_4 + 2 & 0x1f);
  plVar1[5] = (longlong)(iVar14 + iVar2 + param_3);
  lVar3 = (longlong)((iVar14 - iVar2) + param_3);
  lVar5 = (longlong)(param_3 - iVar2);
  plVar1[6] = lVar5;
  plVar1[7] = lVar3;
  if (plVar1[4] < 0) {
    plVar1[4] = plVar1[4] + lVar4;
  }
  if (plVar1[5] < 0) {
    plVar1[5] = plVar1[5] + lVar4;
  }
  if (lVar5 < 0) {
    plVar1[6] = lVar5 + lVar4;
  }
  if (lVar3 < 0) {
    plVar1[7] = lVar3 + lVar4;
  }
  lVar3 = plVar1[4];
  lVar4 = plVar1[5];
  *param_1 = (longlong)(plVar1 + 8);
  plVar1[4] = lVar3 * 2;
  plVar1[5] = lVar4 * 2;
  plVar1[6] = plVar1[6] * 2;
  plVar1[7] = plVar1[7] * 2;
  return;
}

