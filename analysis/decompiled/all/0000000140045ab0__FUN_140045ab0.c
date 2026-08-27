// Function: FUN_140045ab0
// Addr: 140045ab0
// Size: 397 bytes


void FUN_140045ab0(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  undefined8 ***local_48 [2];
  longlong local_38;
  ulonglong local_30;
  longlong local_28 [3];
  ulonglong local_10;
  
  uVar2 = FUN_140053e40(local_28);
  FUN_14002fd20(local_48,&DAT_140476c08,uVar2);
  if (0xf < local_10) {
    uVar5 = local_10 + 1;
    lVar3 = local_28[0];
    if (0xfff < uVar5) {
      lVar3 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar3) - 8U) goto LAB_140045c35;
      uVar5 = local_10 + 0x28;
    }
    thunk_FUN_14028af80(lVar3,uVar5);
  }
  if (param_2 < 0) {
LAB_140045b43:
    lVar3 = FUN_140086de0(param_1 + 0x48,"wpropertiesvd","");
    if (*(char *)(lVar3 + 8) != '\a') goto LAB_140045bdb;
    uVar2 = FUN_140086de0(param_1 + 0x48,"wpropertiesvd","");
    ppppuVar4 = local_48;
    if (0xf < local_30) {
      ppppuVar4 = (undefined8 ****)local_48[0];
    }
    lVar3 = FUN_140087490(uVar2,ppppuVar4,local_38 + (longlong)ppppuVar4);
    if (lVar3 == 0) goto LAB_140045bdb;
    uVar2 = FUN_140086de0(param_1 + 0x48,"wpropertiesvd","");
    ppppuVar4 = local_48;
    if (0xf < local_30) {
      ppppuVar4 = (undefined8 ****)local_48[0];
    }
    lVar3 = FUN_140086de0(uVar2,ppppuVar4,local_38 + (longlong)ppppuVar4);
    if (*(char *)(lVar3 + 8) != '\a') goto LAB_140045bdb;
  }
  else {
    lVar3 = FUN_140087490(param_1 + 0x48,"wpropertiesvd","");
    if (lVar3 != 0) goto LAB_140045b43;
LAB_140045bdb:
    FUN_140045c40(param_1);
  }
  *(int *)(param_1 + 0x98) = param_2;
  if (0xf < local_30) {
    uVar5 = local_30 + 1;
    ppppuVar4 = (undefined8 ****)local_48[0];
    if (0xfff < uVar5) {
      ppppuVar4 = (undefined8 ****)local_48[0][-1];
      if (0x1f < (ulonglong)((longlong)local_48[0] + (-8 - (longlong)ppppuVar4))) {
LAB_140045c35:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar4,uVar5);
  }
  return;
}

