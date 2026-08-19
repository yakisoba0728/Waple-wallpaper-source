// Function: FUN_14011e5f0
// Addr: 14011e5f0
// Size: 78 bytes


void FUN_14011e5f0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong local_78 [3];
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [32];
  
  puVar2 = (undefined8 *)FUN_140005950(local_78,param_1);
  local_58 = *puVar2;
  uStack_50 = puVar2[1];
  local_48 = puVar2[2];
  uStack_40 = puVar2[3];
  puVar2[2] = 0;
  puVar2[3] = 7;
  *(undefined2 *)puVar2 = 0;
  if (7 < uStack_60) {
    uVar5 = uStack_60 * 2 + 2;
    lVar4 = local_78[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_78[0] + -8);
      if (0x1f < (local_78[0] - lVar4) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = uStack_60 * 2 + 0x29;
    }
    func_0x00014028b040(lVar4,uVar5);
  }
  uVar3 = FUN_140054050(&local_58,auStack_38);
  FUN_140018db0(uVar3,local_78);
                    /* WARNING: Subroutine does not return */
  FUN_140016840(auStack_38);
}

