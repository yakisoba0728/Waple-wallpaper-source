// Function: FUN_1400cfca0
// Addr: 1400cfca0
// Size: 195 bytes


undefined8 FUN_1400cfca0(longlong param_1,undefined *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined4 local_res8 [2];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  longlong local_28 [4];
  
  puVar7 = auStack_48;
  puVar6 = &DAT_140474608;
  if (param_2 != (undefined *)0x0) {
    puVar6 = param_2;
  }
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  uVar3 = FUN_1402d6b70(puVar6);
  FUN_140016240(local_28,puVar6,uVar3);
  plVar1 = *(longlong **)(param_1 + 0x48);
  local_res8[0] = 1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,local_res8,local_28);
    if ((ulonglong)local_28[3] < 8) {
      return 0;
    }
    uVar5 = local_28[3] * 2 + 2;
    lVar4 = local_28[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar4) - 8U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar7 = auStack_40;
        goto LAB_1400cfd5e;
      }
      uVar5 = local_28[3] * 2 + 0x29;
    }
    uVar3 = func_0x00014028b040(lVar4,uVar5);
    return uVar3;
  }
LAB_1400cfd5e:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + -8) = &UNK_1400cfd63;
  FUN_14028c390();
}

