// Function: FUN_14002f180
// Addr: 14002f180
// Size: 455 bytes


/* WARNING: Removing unreachable block (ram,0x00014002f32c) */

void FUN_14002f180(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  bool bVar14;
  ulonglong local_c8 [4];
  ulonglong *local_a8;
  ulonglong *local_a0;
  ulonglong *local_80;
  ulonglong *local_78;
  longlong local_70;
  
  uVar13 = *(uint *)(param_2 + 1) & 0xff;
  if (((uVar13 == 6) || (uVar13 == 7)) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
    bVar5 = false;
    plVar10 = (longlong *)**(undefined8 **)*param_2;
  }
  else {
    plVar10 = (longlong *)0x0;
    bVar5 = true;
  }
  if (((uVar13 == 6) || (uVar13 == 7)) && ((undefined8 *)*param_2 != (undefined8 *)0x0)) {
    plVar12 = *(longlong **)*param_2;
    bVar6 = false;
  }
  else {
    plVar12 = (longlong *)0x0;
    bVar6 = true;
  }
  while( true ) {
    bVar14 = bVar6;
    if (!bVar5) {
      bVar14 = plVar10 == plVar12;
    }
    if (bVar14) {
      return;
    }
    FUN_140088430(plVar10 + 6,&local_80);
    local_a8 = local_80;
    local_a0 = local_80;
    if (local_80 != local_78) break;
    if (local_80 != (ulonglong *)0x0) {
      if (local_80 != local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_140017310(local_80);
      }
      uVar9 = local_70 - (longlong)local_80 & 0xffffffffffffffe0;
      puVar8 = local_80;
      if (0xfff < uVar9) {
        if (0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)local_80[-1]))) {
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          return;
        }
        uVar9 = uVar9 + 0x27;
        puVar8 = (ulonglong *)local_80[-1];
      }
      func_0x00014028b040(puVar8,uVar9);
    }
    plVar3 = (longlong *)plVar10[2];
    if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar3 + 0x19);
      plVar10 = plVar3;
      while (cVar2 == '\0') {
        plVar10 = (longlong *)*plVar10;
        cVar2 = *(char *)(*plVar10 + 0x19);
      }
    }
    else {
      cVar2 = *(char *)(plVar10[1] + 0x19);
      plVar7 = (longlong *)plVar10[1];
      plVar3 = plVar10;
      while ((plVar10 = plVar7, cVar2 == '\0' && (plVar3 == (longlong *)plVar10[2]))) {
        cVar2 = *(char *)(plVar10[1] + 0x19);
        plVar7 = (longlong *)plVar10[1];
        plVar3 = plVar10;
      }
    }
  }
  uVar9 = local_80[2];
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  if (0xf < local_80[3]) {
    local_80 = (ulonglong *)*local_80;
  }
  if (0x7fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  if (uVar9 < 0x10) {
    local_c8[3] = 0xf;
    local_c8[0] = *local_80;
    local_c8[1] = local_80[1];
    local_c8[2] = uVar9;
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(plVar10 + 6,local_c8,uVar9 + (longlong)local_c8);
  }
  uVar11 = uVar9 | 0xf;
  if (uVar11 < 0x8000000000000000) {
    if (uVar11 < 0x16) {
      uVar11 = 0x16;
    }
    uVar1 = uVar11 + 1;
    if (uVar1 == 0) {
      local_c8[0] = 0;
      local_c8[2] = uVar9;
      local_c8[3] = uVar11;
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(0,local_80,uVar9 + 1);
    }
    if (uVar1 < 0x1000) {
      func_0x00014028aff0(uVar1);
      return;
    }
    uVar11 = uVar11 + 0x28;
    if (uVar11 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
  }
  else {
    uVar11 = 0x8000000000000027;
  }
  func_0x00014028aff0(uVar11);
  return;
}

