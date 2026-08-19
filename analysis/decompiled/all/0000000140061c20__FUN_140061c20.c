// Function: FUN_140061c20
// Addr: 140061c20
// Size: 487 bytes


/* WARNING: Removing unreachable block (ram,0x000140061d90) */

void FUN_140061c20(undefined8 param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong *puVar6;
  undefined1 auStack_318 [8];
  undefined1 auStack_310 [25];
  undefined1 local_2f7;
  ulonglong local_2b8 [38];
  ulonglong *local_188;
  ulonglong *local_110;
  ulonglong *local_108;
  ulonglong *local_f8;
  ulonglong *local_f0;
  longlong local_e8;
  
  puVar5 = auStack_318;
  FUN_140088430(param_1,&local_f8);
  local_188 = local_f8;
  local_108 = local_f8;
  local_110 = local_f0;
  if (local_f8 != local_f0) {
    local_2f7 = 0;
    uVar3 = local_f8[2];
    local_2b8[0] = 0;
    local_2b8[1] = 0;
    local_2b8[2] = 0;
    local_2b8[3] = 0;
    if (0xf < local_f8[3]) {
      local_f8 = (ulonglong *)*local_f8;
    }
    if (uVar3 < 0x8000000000000000) {
      if (uVar3 < 0x10) {
        local_2b8[3] = 0xf;
        local_2b8[0] = *local_f8;
        local_2b8[1] = local_f8[1];
        local_2b8[2] = uVar3;
                    /* WARNING: Subroutine does not return */
        FUN_140086eb0(param_1,local_2b8,(longlong)local_2b8 + uVar3);
      }
      uVar4 = uVar3 | 0xf;
      if (uVar4 < 0x8000000000000000) {
        if (uVar4 < 0x16) {
          uVar4 = 0x16;
        }
        uVar1 = uVar4 + 1;
        if (uVar1 == 0) {
          local_2b8[0] = 0;
          local_2b8[2] = uVar3;
          local_2b8[3] = uVar4;
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(0,local_f8,uVar3 + 1);
        }
        if (uVar1 < 0x1000) {
          func_0x00014028aff0(uVar1);
          return;
        }
        uVar4 = uVar4 + 0x28;
        if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_140017440();
        }
      }
      else {
        uVar4 = 0x8000000000000027;
      }
      func_0x00014028aff0(uVar4);
      return;
    }
LAB_140062d95:
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar5 + -8) = &UNK_140062d9a;
    FUN_1400173b0();
  }
  if (local_f8 == (ulonglong *)0x0) {
    return;
  }
  if (local_f8 != local_f0) {
                    /* WARNING: Subroutine does not return */
    FUN_140017310(local_f8);
  }
  uVar3 = local_e8 - (longlong)local_f8 & 0xffffffffffffffe0;
  puVar6 = local_f8;
  if (0xfff < uVar3) {
    puVar6 = (ulonglong *)local_f8[-1];
    if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)puVar6))) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar5 = auStack_310;
      goto LAB_140062d95;
    }
    uVar3 = uVar3 + 0x27;
  }
  func_0x00014028b040(puVar6,uVar3);
  return;
}

