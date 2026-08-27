// Function: FUN_140035d70
// Addr: 140035d70
// Size: 266 bytes


longlong * FUN_140035d70(longlong param_1)

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
  longlong *local_res18;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar8 = auStack_38;
  FUN_1402914b0(local_res10,0);
  plVar2 = DAT_1404e8ef8;
  local_res18 = DAT_1404e8ef8;
  if (DAT_1404e90d8 == 0) {
    FUN_1402914b0(local_res8,0);
    if (DAT_1404e90d8 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e90d8 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550();
  }
  uVar3 = DAT_1404e90d8;
  lVar4 = *(longlong *)(param_1 + 8);
  lVar5 = DAT_1404e90d8 * 8;
  if (DAT_1404e90d8 < *(ulonglong *)(lVar4 + 0x18)) {
    plVar6 = *(longlong **)(lVar5 + *(longlong *)(lVar4 + 0x10));
    puVar7 = auStack_38;
    if (plVar6 != (longlong *)0x0) goto LAB_140035e02;
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  if (*(char *)(lVar4 + 0x24) == '\0') {
LAB_140035e37:
    puVar7 = auStack_38;
    if (plVar6 != (longlong *)0x0) goto LAB_140035e02;
  }
  else {
    lVar4 = FUN_1402916f0();
    if (uVar3 < *(ulonglong *)(lVar4 + 0x18)) {
      plVar6 = *(longlong **)(lVar5 + *(longlong *)(lVar4 + 0x10));
      goto LAB_140035e37;
    }
  }
  plVar6 = plVar2;
  puVar7 = auStack_38;
  if (plVar2 == (longlong *)0x0) {
    lVar5 = FUN_140038290(&local_res18,param_1);
    if (lVar5 == -1) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar8 = auStack_30;
    }
    plVar6 = *(longlong **)(puVar8 + 0x50);
    *(undefined8 *)(puVar8 + -8) = 0x140035e68;
    FUN_1402916b0(plVar6);
    pcVar1 = *(code **)(*plVar6 + 8);
    *(undefined8 *)(puVar8 + -8) = 0x140035e71;
    (*pcVar1)(plVar6);
    puVar7 = puVar8;
    DAT_1404e8ef8 = plVar6;
  }
LAB_140035e02:
  *(undefined8 *)(puVar7 + -8) = 0x140035e0c;
  FUN_140291550(puVar7 + 0x48);
  return plVar6;
}

