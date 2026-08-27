// Function: FUN_140067720
// Addr: 140067720
// Size: 562 bytes


ulonglong FUN_140067720(char param_1,int param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  bool bVar10;
  undefined8 ***local_48 [2];
  size_t local_38;
  ulonglong local_30;
  undefined8 ***local_28 [2];
  size_t local_18;
  ulonglong local_10;
  
  puVar1 = (undefined8 *)*DAT_1404e5330;
  while( true ) {
    if (puVar1 == DAT_1404e5330) {
      uVar6 = FUN_14006a030(param_1,1);
      return uVar6 & 0xffffffffffffff00;
    }
    if (((puVar1[6] == 0) || (*(int *)(puVar1[6] + 0x154) != param_2)) || (puVar1[7] == puVar1[8]))
    {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((*(int *)(puVar1 + 0xe) == 1) && ((*(byte *)((longlong)puVar1 + 0x74) & 1) != 0)) {
      param_1 = '\x01';
    }
    else {
      param_1 = '\0';
    }
    if (((*(byte *)((longlong)puVar1 + 0x74) & 0x10) == 0) ||
       (*(char *)((longlong)puVar1 + 0xe2) == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar10) && (bVar10 = param_1 != '\0', param_1 = '\0', bVar10 || bVar4)) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  FUN_140016fc0(local_48,puVar1[6] + 0x100);
  FUN_140016fc0(local_28,puVar1[6] + 0x120);
  plVar7 = (longlong *)FUN_140067a00(&DAT_1404e52e0,puVar1 + 2,0);
  if (plVar7 == (longlong *)0x0) {
LAB_1400678b4:
    FUN_14006a030();
    bVar10 = plVar7 != (longlong *)0x0;
  }
  else {
    sVar2 = plVar7[0x22];
    plVar8 = plVar7 + 0x20;
    ppppuVar9 = local_48;
    if (0xf < local_30) {
      ppppuVar9 = (undefined8 ****)local_48[0];
    }
    if (0xf < (ulonglong)plVar7[0x23]) {
      plVar8 = (longlong *)*plVar8;
    }
    if ((sVar2 != local_38) ||
       ((sVar2 != 0 && (iVar5 = memcmp(plVar8,ppppuVar9,sVar2), iVar5 != 0)))) goto LAB_1400678b4;
    sVar2 = plVar7[0x26];
    plVar8 = plVar7 + 0x24;
    ppppuVar9 = local_28;
    if (0xf < local_10) {
      ppppuVar9 = (undefined8 ****)local_28[0];
    }
    if (0xf < (ulonglong)plVar7[0x27]) {
      plVar8 = (longlong *)*plVar8;
    }
    if ((sVar2 != local_18) ||
       ((sVar2 != 0 && (iVar5 = memcmp(plVar8,ppppuVar9,sVar2), iVar5 != 0)))) goto LAB_1400678b4;
    iVar5 = (**(code **)(*plVar7 + 0x20))(plVar7);
    if (iVar5 == 4) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    bVar10 = false;
  }
  if (0xf < local_10) {
    uVar6 = local_10 + 1;
    ppppuVar9 = (undefined8 ****)local_28[0];
    if (0xfff < uVar6) {
      ppppuVar9 = (undefined8 ****)local_28[0][-1];
      if (0x1f < (ulonglong)((longlong)local_28[0] + (-8 - (longlong)ppppuVar9)))
      goto LAB_14006794a;
      uVar6 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar9,uVar6);
  }
  if (0xf < local_30) {
    uVar6 = local_30 + 1;
    ppppuVar9 = (undefined8 ****)local_48[0];
    if (0xfff < uVar6) {
      ppppuVar9 = (undefined8 ****)local_48[0][-1];
      if (0x1f < (ulonglong)((longlong)local_48[0] + (-8 - (longlong)ppppuVar9))) {
LAB_14006794a:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
      uVar6 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar9,uVar6);
  }
  return (ulonglong)bVar10;
}

