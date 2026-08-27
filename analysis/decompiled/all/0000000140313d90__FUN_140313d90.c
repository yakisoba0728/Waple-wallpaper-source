// Function: FUN_140313d90
// Addr: 140313d90
// Size: 567 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140313d90(longlong *param_1,longlong param_2,longlong param_3,uint param_4,
                       char param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  bool bVar11;
  uint uVar12;
  
  lVar2 = *(longlong *)(param_3 + 8);
  FUN_1404217a0(param_1,0,0x130);
  if (param_5 == '\0') {
    if ((param_4 & 2) == 0) {
      uVar1 = *(uint *)(param_2 + 0x118);
      uVar12 = (int)param_4 >> 0x10 & 0xf;
      if (0 < (int)uVar1) {
        return (ulonglong)uVar1;
      }
      lVar3 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x90);
      if (((int)uVar1 < 0) &&
         (uVar10 = FUN_140314970(param_2,param_4 >> 7 & 0xffffff01), (int)uVar10 != 0)) {
        return uVar10;
      }
      lVar4 = *(longlong *)(param_2 + 0x110);
      bVar6 = false;
      *(undefined4 *)(lVar4 + 0x324) = 0;
      bVar11 = uVar12 != 2;
      if (*(int *)(lVar3 + 0x70) == 0x28) {
        bVar11 = false;
        if (uVar12 != *(uint *)(lVar4 + 0x328)) {
          *(uint *)(lVar4 + 0x328) = uVar12;
          bVar6 = true;
          bVar11 = false;
        }
      }
      if (bVar11 != (bool)*(char *)(lVar4 + 800)) {
        *(bool *)(lVar4 + 800) = bVar11;
        bVar6 = true;
      }
      uVar1 = *(uint *)(param_2 + 0x11c);
      if (0 < (int)uVar1) {
        return (ulonglong)uVar1;
      }
      if ((((int)uVar1 < 0) || (bVar6)) && (uVar10 = FUN_140314fa0(param_2), (int)uVar10 != 0)) {
        return uVar10;
      }
      FUN_14030bb90(lVar4,lVar2,param_2);
      uVar5 = _UNK_14043bb48;
      uVar1 = param_4 | 2;
      if ((*(byte *)(param_2 + 0xcd) & 1) == 0) {
        uVar1 = param_4;
      }
      param_4 = uVar1;
      if ((*(byte *)(param_2 + 0xcd) & 2) != 0) {
        *(undefined8 *)(param_2 + 0x88) = _DAT_14043bb40;
        *(undefined8 *)(param_2 + 0x90) = uVar5;
        uVar5 = _UNK_14043bb58;
        *(undefined8 *)(param_2 + 0x98) = _DAT_14043bb50;
        *(undefined8 *)(param_2 + 0xa0) = uVar5;
        uVar5 = _UNK_14043bb68;
        *(undefined8 *)(param_2 + 0xa8) = _DAT_14043bb60;
        *(undefined8 *)(param_2 + 0xb0) = uVar5;
        uVar5 = CONCAT44(_DAT_14043bb7c,_UNK_14043bb78);
        *(undefined8 *)(param_2 + 0xb8) = _DAT_14043bb70;
        *(undefined8 *)(param_2 + 0xc0) = uVar5;
        uVar9 = _UNK_14043bb88;
        uVar8 = _UNK_14043bb84;
        uVar7 = _UNK_14043bb80;
        *(undefined4 *)(param_2 + 0xc4) = _DAT_14043bb7c;
        *(undefined4 *)(param_2 + 200) = uVar7;
        *(undefined4 *)(param_2 + 0xcc) = uVar8;
        *(undefined4 *)(param_2 + 0xd0) = uVar9;
      }
      if (((*(int *)(lVar3 + 0x70) == 0x28) && (uVar12 != 2)) &&
         ((*(uint *)(*(longlong *)(param_3 + 8) + 8) & 0x2000) == 0)) {
        *(uint *)(lVar4 + 0x324) = ~(uint)*(byte *)(param_2 + 0xcd) & 4;
      }
      param_1[0x1b] = lVar4;
      if ((((param_4 & 0x200002) == 0) && (*(int *)(lVar4 + 0x324) == 0)) &&
         (*(int *)(lVar2 + 0x27c) == 0)) {
        param_1[0x25] = *(longlong *)(param_2 + 0x78);
      }
      else {
        param_1[0x25] = 0;
      }
    }
    lVar3 = **(longlong **)(param_3 + 0xf0);
    FUN_1402f1060(lVar3);
    param_1[3] = lVar3;
  }
  *(uint *)(param_1 + 4) = param_4;
  *param_1 = lVar2;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[5] = *(longlong *)(lVar2 + 0xa0);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return 0;
}

