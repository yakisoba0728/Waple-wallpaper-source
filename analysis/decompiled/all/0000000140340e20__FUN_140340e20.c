// Function: FUN_140340e20
// Addr: 140340e20
// Size: 229 bytes


undefined8 FUN_140340e20(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined1 *)(param_1 + 0x14);
  if (*(undefined1 **)(param_2 + 0x108) < puVar1) {
    FUN_1402f9100(param_2,8);
  }
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                            *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  uVar2 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11)
                                    ),*(undefined1 *)(param_1 + 0x12)),
                   *(undefined1 *)(param_1 + 0x13));
  if ((((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar3) || (uVar3 < 0x14)) ||
     (uVar3 - 0x14 >> 1 < uVar2)) {
    FUN_1402f9100(param_2,8);
  }
  if (0 < *(int *)(param_2 + 0x110)) {
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (*(uint *)(param_2 + 0x120) <= (uint)CONCAT11(*puVar1,puVar1[1])) {
        FUN_1402f9100(param_2,0x10);
      }
      puVar1 = puVar1 + 2;
    }
  }
  return 0;
}

