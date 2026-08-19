// Function: FUN_1400cfbc0
// Addr: 1400cfbc0
// Size: 5 bytes


undefined8 FUN_1400cfbc0(longlong param_1,undefined *param_2,int param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int aiStackX_18 [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  longlong alStack_28 [4];
  
  puVar7 = auStack_48;
  alStack_28[2] = 0;
  alStack_28[3] = 0;
  iVar8 = (param_3 != 1) + 1;
  alStack_28[0] = 0;
  alStack_28[1] = 0;
  puVar6 = &DAT_140474608;
  if (param_2 != (undefined *)0x0) {
    puVar6 = param_2;
  }
  uVar3 = FUN_1402d6b70(puVar6);
  FUN_140016240(alStack_28,puVar6,uVar3);
  plVar1 = *(longlong **)(param_1 + 0x48);
  aiStackX_18[0] = iVar8;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,aiStackX_18,alStack_28);
    if (7 < (ulonglong)alStack_28[3]) {
      uVar5 = alStack_28[3] * 2 + 2;
      lVar4 = alStack_28[0];
      if (0xfff < uVar5) {
        lVar4 = *(longlong *)(alStack_28[0] + -8);
        if (0x1f < (alStack_28[0] - lVar4) - 8U) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar7 = auStack_40;
          goto code_r0x0001400cfc90;
        }
        uVar5 = alStack_28[3] * 2 + 0x29;
      }
      func_0x00014028b040(lVar4,uVar5);
    }
    return 0;
  }
code_r0x0001400cfc90:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar7 + -8) = 0x1400cfc95;
  FUN_14028c390();
}

