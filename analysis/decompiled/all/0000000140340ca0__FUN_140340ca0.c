// Function: FUN_140340ca0
// Addr: 140340ca0
// Size: 317 bytes


uint FUN_140340ca0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  
  if (*param_2 == 0xffffffff) {
    return 0;
  }
  lVar1 = param_1[3];
  uVar4 = 0;
  iVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 0x200c),*(undefined1 *)(lVar1 + 0x200d)
                                    ),*(undefined1 *)(lVar1 + 0x200e)),
                   *(undefined1 *)(lVar1 + 0x200f));
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar2 = *param_2 + 1;
    puVar10 = (undefined1 *)(lVar1 + 0x2010);
    do {
      uVar8 = CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),puVar10[2]),puVar10[3]);
      uVar9 = CONCAT31(CONCAT21(CONCAT11(puVar10[4],puVar10[5]),puVar10[6]),puVar10[7]);
      uVar3 = uVar8;
      if (uVar8 <= uVar2) {
        uVar3 = uVar2;
      }
      uVar2 = uVar3;
      if (uVar3 <= uVar9) {
        uVar7 = CONCAT31(CONCAT21(CONCAT11(puVar10[8],puVar10[9]),puVar10[10]),puVar10[0xb]);
        do {
          uVar2 = uVar3;
          if ((uVar8 - uVar3) - 1 < uVar7) break;
          uVar4 = (uVar7 - uVar8) + uVar3;
          if (uVar4 != 0) {
            uVar6 = uVar3;
            if (uVar4 < *(uint *)(*param_1 + 0x10)) goto LAB_140340dcd;
            uVar4 = 0;
            break;
          }
          uVar6 = 0;
          if (uVar3 == 0xffffffff) goto LAB_140340dcd;
          uVar3 = uVar3 + 1;
          uVar2 = uVar3;
        } while (uVar3 <= uVar9);
      }
      iVar5 = iVar5 + -1;
      puVar10 = puVar10 + 0xc;
      uVar6 = 0;
    } while (iVar5 != 0);
  }
LAB_140340dcd:
  *param_2 = uVar6;
  return uVar4;
}

