// Function: FUN_1401a9410
// Addr: 1401a9410
// Size: 668 bytes


void FUN_1401a9410(longlong *param_1,float param_2,undefined8 param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong local_88 [3];
  ulonglong local_70;
  float local_68 [2];
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  ulonglong local_48;
  
  plVar13 = (longlong *)0x0;
  uVar10 = *(uint *)(param_1 + 1) & 0xff;
  if (((uVar10 == 6) || (uVar10 == 7)) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
    bVar3 = false;
    plVar12 = (longlong *)**(undefined8 **)*param_1;
  }
  else {
    bVar3 = true;
    plVar12 = plVar13;
  }
  if (((uVar10 == 6) || (uVar10 == 7)) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
    plVar13 = *(longlong **)*param_1;
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  do {
    bVar4 = bVar5;
    if (!bVar3) {
      bVar4 = plVar12 == plVar13;
    }
    if (bVar4) {
      return;
    }
    lVar7 = FUN_140087490(plVar12 + 6,&DAT_1404748b8,&DAT_1404748bc);
    if (lVar7 == 0) {
      lVar7 = FUN_140084ac0();
    }
    lVar8 = FUN_140087490(plVar12 + 6,"frame","");
    if (lVar8 == 0) {
      lVar8 = FUN_140084ac0();
    }
    if ((*(char *)(lVar7 + 8) == '\x04') && (*(byte *)(lVar8 + 8) - 1 < 3)) {
      local_50 = 0;
      lStack_58 = 0;
      local_60 = 0;
      local_48 = 0xf;
      local_68[0] = (float)FUN_140086220();
      local_68[0] = local_68[0] * param_2;
      plVar9 = (longlong *)FUN_140004d00(local_88,plVar12 + 6,0);
      if (&local_60 != plVar9) {
        local_60 = *plVar9;
        lStack_58 = plVar9[1];
        local_50 = plVar9[2];
        local_48 = plVar9[3];
        plVar9[2] = 0;
        plVar9[3] = 0xf;
        *(undefined1 *)plVar9 = 0;
      }
      if (0xf < local_70) {
        uVar11 = local_70 + 1;
        lVar7 = local_88[0];
        if (0xfff < uVar11) {
          lVar7 = *(longlong *)(local_88[0] + -8);
          if (0x1f < (local_88[0] - lVar7) - 8U) {
LAB_1401a9671:
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            return;
          }
          uVar11 = local_70 + 0x28;
        }
        thunk_FUN_14028af80(lVar7,uVar11);
      }
      FUN_1401aa1c0(param_3,local_68);
      if (0xf < local_48) {
        uVar11 = local_48 + 1;
        lVar7 = local_60;
        if (0xfff < uVar11) {
          lVar7 = *(longlong *)(local_60 + -8);
          if (0x1f < (local_60 - lVar7) - 8U) goto LAB_1401a9671;
          uVar11 = local_48 + 0x28;
        }
        thunk_FUN_14028af80(lVar7,uVar11);
      }
    }
    plVar9 = (longlong *)plVar12[2];
    if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar9 + 0x19);
      plVar12 = plVar9;
      while (cVar1 == '\0') {
        plVar12 = (longlong *)*plVar12;
        cVar1 = *(char *)(*plVar12 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar12[1] + 0x19);
      plVar6 = (longlong *)plVar12[1];
      plVar9 = plVar12;
      while ((plVar12 = plVar6, cVar1 == '\0' && (plVar9 == (longlong *)plVar12[2]))) {
        cVar1 = *(char *)(plVar12[1] + 0x19);
        plVar6 = (longlong *)plVar12[1];
        plVar9 = plVar12;
      }
    }
  } while( true );
}

