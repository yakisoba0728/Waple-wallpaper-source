// Function: FUN_140424940
// Addr: 140424940
// Size: 57 bytes


/* WARNING: Possible PIC construction at 0x000140049448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014004944d) */
/* WARNING: Removing unreachable block (ram,0x000140049455) */

void FUN_140424940(void)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 unaff_RBX;
  longlong lVar5;
  longlong lVar6;
  undefined *apuStack_30 [5];
  
  lVar6 = 10;
  lVar5 = 0x1404dfa80;
  do {
    lVar5 = lVar5 + -0x28;
    apuStack_30[0] = (undefined *)0x14042496c;
    func_0x000140092a70(lVar5);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  apuStack_30[0] = (undefined *)0x14042497e;
  func_0x00014000dab0(&DAT_1404df8c8);
  plVar1 = DAT_1404df8b8;
  *(undefined8 *)DAT_1404df8b8[1] = 0;
  plVar1 = (longlong *)*plVar1;
  plVar4 = DAT_1404df8b8;
  if (plVar1 != (longlong *)0x0) {
    unaff_RBX = *plVar1;
    register0x00000020 = (BADSPACEBASE *)apuStack_30;
    apuStack_30[0] = &UNK_14004944d;
    plVar4 = plVar1;
  }
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)((longlong)register0x00000020 + -8) = unaff_RBX;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d912c;
    iVar2 = (*DAT_1404264b8)(DAT_1404e4fa0,0,plVar4);
    if (iVar2 == 0) {
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d9136;
      uVar3 = (*DAT_1404266a8)();
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d913d;
      func_0x0001402caec4(uVar3);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)register0x00000020 + -0x30) = &UNK_1402d9144;
      FUN_1402cb004();
    }
  }
  return;
}

