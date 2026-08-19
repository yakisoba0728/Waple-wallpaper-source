// Function: FUN_140138770
// Addr: 140138770
// Size: 35 bytes


undefined8 FUN_140138770(longlong param_1,undefined *param_2,int param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined *puVar6;
  longlong alStack_28 [4];
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  alStack_28[2] = 0;
  alStack_28[3] = 0;
  alStack_28[0] = 0;
  alStack_28[1] = 0;
  puVar6 = &DAT_140474608;
  if (param_2 != (undefined *)0x0) {
    puVar6 = param_2;
  }
  uVar2 = FUN_1402d6b70(puVar6);
  FUN_140016240(alStack_28,puVar6,uVar2);
  FUN_140139250(uVar3,(param_3 != 1) + '\x01',alStack_28);
  if (7 < (ulonglong)alStack_28[3]) {
    uVar5 = alStack_28[3] * 2 + 2;
    lVar4 = alStack_28[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(alStack_28[0] + -8);
      if (0x1f < (alStack_28[0] - lVar4) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      uVar5 = alStack_28[3] * 2 + 0x29;
    }
    func_0x00014028b040(lVar4,uVar5);
  }
  return 0;
}

