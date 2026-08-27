// Function: FUN_1400de8b0
// Addr: 1400de8b0
// Size: 294 bytes


longlong * FUN_1400de8b0(longlong *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong *local_res18 [2];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar8 = auStack_48;
  lVar4 = FUN_140291700(1);
  param_1[3] = lVar4;
  FUN_1402914b0(local_res10,0);
  plVar2 = DAT_1404e8f70;
  local_res18[0] = DAT_1404e8f70;
  if (DAT_1404e91c0 == 0) {
    FUN_1402914b0(local_res8,0);
    if (DAT_1404e91c0 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e91c0 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550();
  }
  uVar3 = DAT_1404e91c0;
  lVar5 = param_1[3];
  lVar4 = DAT_1404e91c0 * 8;
  if (DAT_1404e91c0 < *(ulonglong *)(lVar5 + 0x18)) {
    plVar6 = *(longlong **)(lVar4 + *(longlong *)(lVar5 + 0x10));
    puVar7 = auStack_48;
    if (plVar6 != (longlong *)0x0) goto LAB_1400de94c;
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  if (*(char *)(lVar5 + 0x24) == '\0') {
LAB_1400de98f:
    puVar7 = auStack_48;
    if (plVar6 != (longlong *)0x0) goto LAB_1400de94c;
  }
  else {
    lVar5 = FUN_1402916f0();
    if (uVar3 < *(ulonglong *)(lVar5 + 0x18)) {
      plVar6 = *(longlong **)(lVar4 + *(longlong *)(lVar5 + 0x10));
      goto LAB_1400de98f;
    }
  }
  plVar6 = plVar2;
  puVar7 = auStack_48;
  if (plVar2 == (longlong *)0x0) {
    lVar4 = FUN_1400e6fa0(local_res18,param_1 + 2);
    if (lVar4 == -1) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar8 = auStack_40;
    }
    plVar6 = *(longlong **)(puVar8 + 0x60);
    *(undefined8 *)(puVar8 + -8) = 0x1400de9c1;
    FUN_1402916b0(plVar6);
    pcVar1 = *(code **)(*plVar6 + 8);
    *(undefined8 *)(puVar8 + -8) = 0x1400de9ca;
    (*pcVar1)(plVar6);
    puVar7 = puVar8;
    DAT_1404e8f70 = plVar6;
  }
LAB_1400de94c:
  *(undefined8 *)(puVar7 + -8) = 0x1400de956;
  FUN_140291550(puVar7 + 0x58);
  *param_1 = (longlong)plVar6;
  *(undefined8 *)(puVar7 + -8) = 0x1400de962;
  lVar4 = FUN_140013d40(param_1 + 2);
  param_1[1] = lVar4;
  return param_1;
}

