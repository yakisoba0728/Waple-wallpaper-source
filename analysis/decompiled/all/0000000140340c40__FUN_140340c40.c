// Function: FUN_140340c40
// Addr: 140340c40
// Size: 78 bytes


int FUN_140340c40(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar4 = (undefined1 *)(lVar1 + 0x2010);
  iVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 0x200c),*(undefined1 *)(lVar1 + 0x200d)
                                    ),*(undefined1 *)(lVar1 + 0x200e)),
                   *(undefined1 *)(lVar1 + 0x200f));
  if (iVar5 != 0) {
    while (uVar2 = CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]),puVar4[3]),
          uVar2 <= param_2) {
      uVar3 = CONCAT31(CONCAT21(CONCAT11(puVar4[8],puVar4[9]),puVar4[10]),puVar4[0xb]);
      if (param_2 <= CONCAT31(CONCAT21(CONCAT11(puVar4[4],puVar4[5]),puVar4[6]),puVar4[7])) {
        if (uVar3 <= (uVar2 - param_2) - 1) {
          return (uVar3 - uVar2) + param_2;
        }
        return 0;
      }
      puVar4 = puVar4 + 0xc;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) {
        return 0;
      }
    }
  }
  return 0;
}

