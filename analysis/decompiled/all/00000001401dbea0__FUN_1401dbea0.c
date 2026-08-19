// Function: FUN_1401dbea0
// Addr: 1401dbea0
// Size: 184 bytes


void FUN_1401dbea0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == -0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar2 = param_1[2] - lVar1 >> 5;
  if (uVar2 <= 0x7ffffffffffffff - (uVar2 >> 1)) {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar4 = (param_1[1] - lVar1 >> 5) + 1;
    if (uVar4 <= uVar2) {
      uVar4 = uVar2;
    }
    if (uVar4 < 0x800000000000000) {
      uVar4 = uVar4 * 0x20;
      if (uVar4 == 0) {
        puVar3 = (undefined8 *)(param_2 - lVar1 & 0xffffffffffffffe0);
        *(undefined4 *)((longlong)puVar3 + 0x13) = 0;
        *(undefined1 *)((longlong)puVar3 + 0x17) = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined2 *)(puVar3 + 2) = 0;
        *(undefined1 *)((longlong)puVar3 + 0x12) = 0;
        puVar3[3] = 0;
        lVar1 = *param_1;
        if (param_2 == param_1[1]) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(0,lVar1,param_1[1] - lVar1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,lVar1,param_2 - lVar1);
      }
      if (uVar4 < 0x1000) {
        func_0x00014028aff0(uVar4);
        return;
      }
      if (uVar4 < uVar4 + 0x27) {
        func_0x00014028aff0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

