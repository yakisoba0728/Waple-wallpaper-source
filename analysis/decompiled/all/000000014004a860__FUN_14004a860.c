// Function: FUN_14004a860
// Addr: 14004a860
// Size: 167 bytes


void FUN_14004a860(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 unaff_RBX;
  
  *param_1 = &PTR_UNWIND_INFO_14004ab3a_UnwindCodes_65__OffsetInProlog_14042b010;
  if ((param_1[0x10] != 0) && (*(undefined8 **)param_1[3] == param_1 + 0xe)) {
    lVar1 = param_1[0x11];
    uVar2 = param_1[0x12];
    *(longlong *)param_1[3] = lVar1;
    *(longlong *)param_1[7] = lVar1;
    *(int *)param_1[10] = (int)uVar2 - (int)lVar1;
  }
  if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
    FUN_14004c490(param_1);
  }
  *param_1 = &PTR_UNWIND_INFO_140014bda_UnwindCodes_1__OffsetInProlog_14042af90;
  lVar1 = param_1[0xc];
  if (lVar1 == 0) {
    return;
  }
  if ((*(longlong **)(lVar1 + 8) != (longlong *)0x0) &&
     (puVar5 = (undefined8 *)(**(code **)(**(longlong **)(lVar1 + 8) + 0x10))(),
     puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)(puVar5,1);
  }
  if ((lVar1 != 0) &&
     (iVar3 = (*DAT_1404264b8)(DAT_1404e4fa0,0,lVar1,param_4,unaff_RBX), iVar3 == 0)) {
    uVar4 = (*DAT_1404266a8)();
    func_0x0001402caec4(uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  return;
}

