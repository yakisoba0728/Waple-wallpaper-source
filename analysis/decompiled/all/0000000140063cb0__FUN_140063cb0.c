// Function: FUN_140063cb0
// Addr: 140063cb0
// Size: 581 bytes


void FUN_140063cb0(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined1 local_a8;
  char local_a7;
  int local_a4;
  undefined1 local_a0 [40];
  undefined1 local_78 [48];
  undefined1 local_48 [40];
  
  uVar4 = FUN_14003fbc0(param_1,local_48);
  puVar5 = (undefined8 *)FUN_140018ce0(uVar4,&local_c8);
  if (0xf < (ulonglong)puVar5[3]) {
    puVar5 = (undefined8 *)*puVar5;
  }
  iVar3 = FUN_1402c10d0(puVar5,"project.json");
  if (local_b0 < 0x10) {
LAB_140063d32:
    local_b8 = 0;
    local_b0 = 0xf;
    local_c8 = 0;
    FUN_140016770(local_48);
    if (iVar3 != 0) {
      return;
    }
    FUN_140016600(&local_c8,param_1);
    FUN_14011d7d0(&local_a8,&local_c8);
    if (7 < local_b0) {
      lVar2 = CONCAT71(uStack_c7,local_c8);
      uVar7 = local_b0 * 2 + 2;
      lVar8 = lVar2;
      if (0xfff < uVar7) {
        lVar8 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar8) - 8U) goto LAB_140063eb0;
        uVar7 = local_b0 * 2 + 0x29;
      }
      thunk_FUN_14028af80(lVar8,uVar7);
    }
    puVar9 = auStack_e8;
    if (local_a7 == '\0') goto LAB_140063ed7;
    plVar6 = (longlong *)FUN_140087490(local_a0,&DAT_140473b68,&DAT_140473b6c);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_140084ac0();
    }
    lVar8 = *plVar6;
    if ((lVar8 != 0) && ((*(uint *)(plVar6 + 1) >> 8 & 1) != 0)) {
      lVar8 = lVar8 + 4;
    }
    FUN_140060c00(param_1,lVar8);
    lVar8 = FUN_140087490(local_a0,"dependency","");
    puVar9 = auStack_e8;
    if (lVar8 != 0) {
      lVar8 = FUN_140087490(local_a0,"dependency","");
      if (lVar8 == 0) {
        lVar8 = FUN_140084ac0();
      }
      puVar9 = auStack_e8;
      if (*(char *)(lVar8 + 8) == '\x04') {
        plVar6 = (longlong *)FUN_140087490(local_a0,"dependency","");
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)FUN_140084ac0();
        }
        lVar8 = *plVar6;
        if ((lVar8 != 0) && ((*(uint *)(plVar6 + 1) >> 8 & 1) != 0)) {
          lVar8 = lVar8 + 4;
        }
        FUN_140060c00(param_2,lVar8);
        puVar9 = auStack_e8;
        if (local_a4 == 1) {
          FUN_140060990(&local_c8,&DAT_140478088);
          FUN_140060d90(param_2,&local_c8);
          FUN_140016770(&local_c8);
          puVar9 = auStack_e8;
        }
        goto LAB_140063ed7;
      }
    }
  }
  else {
    lVar2 = CONCAT71(uStack_c7,local_c8);
    uVar7 = local_b0 + 1;
    lVar8 = lVar2;
    if (uVar7 < 0x1000) {
LAB_140063d2d:
      thunk_FUN_14028af80(lVar8,uVar7);
      goto LAB_140063d32;
    }
    lVar8 = *(longlong *)(lVar2 + -8);
    if ((lVar2 - lVar8) - 8U < 0x20) {
      uVar7 = local_b0 + 0x28;
      goto LAB_140063d2d;
    }
LAB_140063eb0:
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar9 = auStack_e0;
  }
  if (param_2 != param_1) {
    puVar5 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    uVar4 = param_1[2];
    *(undefined8 *)(puVar9 + -8) = 0x140063ed7;
    FUN_140016ae0(param_2,puVar5,uVar4);
  }
LAB_140063ed7:
  *(undefined8 *)(puVar9 + -8) = 0x140063ee0;
  FUN_140085440(local_78);
  *(undefined8 *)(puVar9 + -8) = 0x140063ee9;
  FUN_140085440(local_a0);
  return;
}

