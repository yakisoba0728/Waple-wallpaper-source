// Function: FUN_140276310
// Addr: 140276310
// Size: 442 bytes


void FUN_140276310(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  undefined1 local_res10 [8];
  undefined8 ***local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  undefined8 ***local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  puVar4 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar4 = (undefined8 *)*param_2;
  }
  local_18 = 0;
  local_28 = (undefined8 ****)0x0;
  uStack_20 = 0;
  local_10 = 0;
  FUN_140016170(&local_28,puVar4,param_2[2]);
  local_38 = 0;
  ppppuVar6 = &local_28;
  if (7 < local_10) {
    ppppuVar6 = (undefined8 ****)local_28;
  }
  local_30 = 0;
  local_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  uVar5 = FUN_1402d6aa0(ppppuVar6);
  FUN_140016170(&local_48,ppppuVar6,uVar5);
  if (7 < local_10) {
    uVar7 = local_10 * 2 + 2;
    ppppuVar6 = (undefined8 ****)local_28;
    if (0xfff < uVar7) {
      ppppuVar6 = (undefined8 ****)local_28[-1];
      if (0x1f < (ulonglong)((longlong)local_28 + (-8 - (longlong)ppppuVar6))) goto LAB_1402764c2;
      uVar7 = local_10 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppuVar6,uVar7);
  }
  if (local_30 - local_38 < 8) {
    FUN_140016310(&local_48,8,local_res10[0],L"\\assets\\",8);
  }
  else {
    lVar1 = local_38 + 8;
    ppppuVar6 = &local_48;
    if (7 < local_30) {
      ppppuVar6 = (undefined8 ****)local_48;
    }
    lVar2 = local_38 * 2;
    local_38 = lVar1;
    FUN_1404210f0((longlong)ppppuVar6 + lVar2,L"\\assets\\",0x10);
    *(undefined2 *)((longlong)ppppuVar6 + lVar1 * 2) = 0;
  }
  FUN_1402764d0(param_1,local_res10,&local_48);
  if (7 < local_30) {
    uVar7 = local_30 * 2 + 2;
    ppppuVar6 = (undefined8 ****)local_48;
    if (0xfff < uVar7) {
      ppppuVar6 = (undefined8 ****)local_48[-1];
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)ppppuVar6))) {
LAB_1402764c2:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = local_30 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppuVar6,uVar7);
  }
  return;
}

