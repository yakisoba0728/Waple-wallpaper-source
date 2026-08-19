// Function: FUN_14000e8b0
// Addr: 14000e8b0
// Size: 177 bytes


/* WARNING: Possible PIC construction at 0x00014000e92e: Changing call to branch */

void FUN_14000e8b0(undefined8 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *unaff_RBX;
  undefined1 *puVar8;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  *param_1 = &PTR_UNWIND_INFO_14000f07b_UnwindCodes_0__UnwindOpCode_140474298;
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    *(undefined8 *)param_1[3] = 0;
    *(undefined8 *)param_1[7] = 0;
    *(undefined4 *)param_1[10] = 0;
    *(undefined8 *)param_1[4] = 0;
    *(undefined8 *)param_1[8] = 0;
    *(undefined4 *)param_1[0xb] = 0;
    *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) & 0xfffffffe;
    *param_1 = &PTR_UNWIND_INFO_14000f243_UnwindCodes_4__UnwindOpCode_140474210;
    param_1[0xd] = 0;
    lVar7 = param_1[0xc];
    if (lVar7 == 0) {
      return;
    }
    if ((*(longlong **)(lVar7 + 8) != (longlong *)0x0) &&
       (puVar5 = (undefined8 *)(**(code **)(**(longlong **)(lVar7 + 8) + 0x10))(),
       puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  else {
    lVar6 = *(longlong *)param_1[8];
    if (lVar6 == 0) {
      iVar3 = *(int *)param_1[10];
      lVar6 = *(longlong *)param_1[7];
    }
    else {
      iVar3 = *(int *)param_1[0xb];
    }
    lVar1 = *(longlong *)param_1[3];
    lVar7 = lVar1;
    puVar8 = auStack_28;
    if ((0xfff < (ulonglong)(((lVar6 + (longlong)iVar3 * 2) - lVar1 >> 1) * 2)) &&
       (lVar7 = *(longlong *)(lVar1 + -8), puVar8 = auStack_28, 0x1f < (lVar1 - lVar7) - 8U)) {
      lVar7 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      puVar8 = auStack_20;
    }
    register0x00000020 = (BADSPACEBASE *)(puVar8 + -8);
    *(undefined8 *)(puVar8 + -8) = 0x14000e933;
    unaff_RBX = param_1;
  }
  if (lVar7 != 0) {
    *(undefined8 **)((longlong)register0x00000020 + -8) = unaff_RBX;
    *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d912c;
    iVar3 = (*DAT_1404264b8)(DAT_1404e4fa0,0,lVar7);
    if (iVar3 == 0) {
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d9136;
      uVar4 = (*DAT_1404266a8)();
      *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0x1402d913d;
      func_0x0001402caec4(uVar4);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)register0x00000020 + -0x30) = &UNK_1402d9144;
      FUN_1402cb004();
    }
  }
  return;
}

