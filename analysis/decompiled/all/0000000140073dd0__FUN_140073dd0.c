// Function: FUN_140073dd0
// Addr: 140073dd0
// Size: 421 bytes


/* WARNING: Removing unreachable block (ram,0x000140073f7d) */

void FUN_140073dd0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong *puVar8;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  ulonglong local_f8 [4];
  undefined1 local_d8 [8];
  uint local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_88 [8];
  uint local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  longlong lStack_50;
  
  puVar7 = auStack_118;
  local_80 = (local_80 >> 8 & 0xfffffe) << 8;
  local_d0 = (local_d0 >> 8 & 0xfffffe) << 8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  FUN_1400466f0(&PTR_s_le_gpu___disable_direct_composit_1404748b8_8_1404df670,puVar5,local_88);
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_140042ee0(&PTR_s_le_gpu___disable_direct_composit_1404748b8_8_1404df670,param_2,param_3,
                local_d8);
  FUN_140088430(param_4,&local_60);
  if (local_60 == local_58) {
    if (local_60 != (ulonglong *)0x0) {
      if (local_60 != local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_140017310(local_60);
      }
      puVar4 = local_60;
      puVar7 = auStack_118;
      if (0xfff < (lStack_50 - (longlong)local_60 & 0xffffffffffffffe0U)) {
        puVar4 = (ulonglong *)local_60[-1];
        puVar8 = (ulonglong *)((longlong)local_60 + (-8 - (longlong)puVar4));
        puVar7 = auStack_118;
        if ((ulonglong *)0x1f < puVar8) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar4 = puVar8;
          puVar7 = auStack_110;
        }
      }
      *(undefined8 *)(puVar7 + -8) = 0x140074122;
      func_0x00014028b040(puVar4);
    }
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar7 + -8) = 0x14007413c;
    FUN_140086eb0(param_5,"general","");
  }
  uVar2 = local_60[2];
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_f8[3] = 0;
  if (0xf < local_60[3]) {
    local_60 = (ulonglong *)*local_60;
  }
  if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  if (uVar2 < 0x10) {
    local_f8[3] = 0xf;
    local_f8[0] = *local_60;
    local_f8[1] = local_60[1];
    local_f8[2] = uVar2;
    func_0x000140087560(local_d8,local_f8,uVar2 + (longlong)local_f8);
    return;
  }
  uVar6 = uVar2 | 0xf;
  if (uVar6 < 0x8000000000000000) {
    if (uVar6 < 0x16) {
      uVar6 = 0x16;
    }
    uVar1 = uVar6 + 1;
    if (uVar1 == 0) {
      local_f8[0] = uVar1;
      local_f8[2] = uVar2;
      local_f8[3] = uVar6;
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(0,local_60,uVar2 + 1);
    }
    if (uVar1 < 0x1000) {
      func_0x00014028aff0(uVar1);
      return;
    }
    uVar6 = uVar6 + 0x28;
    if (uVar6 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
  }
  else {
    uVar6 = 0x8000000000000027;
  }
  func_0x00014028aff0(uVar6);
  return;
}

