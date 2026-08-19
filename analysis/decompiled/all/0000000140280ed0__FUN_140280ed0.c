// Function: FUN_140280ed0
// Addr: 140280ed0
// Size: 1 bytes


undefined8 * FUN_140280ed0(undefined8 *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar3 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (0x492492492492492 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_140013120();
    }
    uVar5 = param_2 * 0x38;
    if (uVar5 != 0) {
      if (uVar5 < 0x1000) {
        puVar3 = (undefined8 *)func_0x00014028aff0(uVar5);
      }
      else {
        if (uVar5 + 0x27 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_140017440();
        }
        lVar2 = func_0x00014028aff0();
        lVar4 = lVar2;
        if (lVar2 == 0) {
          lVar4 = 5;
          pcVar1 = (code *)swi(0x29);
          lVar2 = (*pcVar1)();
        }
        puVar3 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
        puVar3[-1] = lVar4;
      }
    }
    *param_1 = puVar3;
    param_1[2] = puVar3 + param_2 * 7;
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3 = puVar3 + 7;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    param_1[1] = puVar3;
  }
  return param_1;
}

