// Function: FUN_14013d240
// Addr: 14013d240
// Size: 484 bytes


/* WARNING: Removing unreachable block (ram,0x00014013d392) */

void FUN_14013d240(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong *puVar6;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [24];
  ulonglong local_2c8 [4];
  ulonglong *local_2a8;
  ulonglong *local_2a0;
  longlong local_298;
  undefined4 local_288;
  undefined8 local_284;
  undefined8 local_27c;
  undefined1 local_274 [268];
  undefined4 local_168 [74];
  
  puVar5 = auStack_2e8;
  FUN_1400e7ab0(param_1 + 0x10);
  if (*(char *)(param_2 + 8) == '\a') {
    FUN_140088430(param_2,&local_2a8);
    if (local_2a8 != local_2a0) {
      uVar2 = local_2a8[2];
      local_2c8[0] = 0;
      local_2c8[1] = 0;
      local_2c8[2] = 0;
      local_2c8[3] = 0;
      if (0xf < local_2a8[3]) {
        local_2a8 = (ulonglong *)*local_2a8;
      }
      if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_1400173b0();
      }
      if (uVar2 < 0x10) {
        local_2c8[3] = 0xf;
        local_2c8[0] = *local_2a8;
        local_2c8[1] = local_2a8[1];
        local_2c8[2] = uVar2;
                    /* WARNING: Subroutine does not return */
        FUN_140086eb0(param_2,local_2c8,uVar2 + (longlong)local_2c8);
      }
      uVar4 = uVar2 | 0xf;
      if (uVar4 < 0x8000000000000000) {
        if (uVar4 < 0x16) {
          uVar4 = 0x16;
        }
        uVar1 = uVar4 + 1;
        if (uVar1 == 0) {
          local_2c8[0] = uVar1;
          local_2c8[2] = uVar2;
          local_2c8[3] = uVar4;
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(0,local_2a8,uVar2 + 1);
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
    if (local_2a8 != (ulonglong *)0x0) {
      if (local_2a8 == local_2a0) {
        if (0xfff < (local_298 - (longlong)local_2a8 & 0xffffffffffffffe0U)) {
          puVar6 = (ulonglong *)((longlong)local_2a8 + (-8 - (longlong)local_2a8[-1]));
          local_2a8 = (ulonglong *)local_2a8[-1];
          puVar5 = auStack_2e8;
          if ((ulonglong *)0x1f < puVar6) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            puVar5 = auStack_2e0;
            local_2a8 = puVar6;
          }
        }
        *(undefined8 *)(puVar5 + -8) = 0x14013d471;
        func_0x00014028b040(local_2a8);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140017310(local_2a8);
    }
  }
  local_168[0] = 0x114;
  (*DAT_140426300)(local_168);
  local_288 = 0x11c;
  local_284 = 10;
  local_27c = 22000;
  func_0x000140421870(local_274,0,0x100);
  return;
}

