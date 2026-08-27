// Function: FUN_14000e7e0
// Addr: 14000e7e0
// Size: 258 bytes


void FUN_14000e7e0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar6 = auStack_28;
  *param_1 = &PTR_FUN_1404741c8;
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    lVar5 = *(longlong *)param_1[8];
    if (lVar5 == 0) {
      iVar1 = *(int *)param_1[10];
      lVar5 = *(longlong *)param_1[7];
    }
    else {
      iVar1 = *(int *)param_1[0xb];
    }
    lVar2 = *(longlong *)param_1[3];
    puVar6 = auStack_28;
    if ((0xfff < (ulonglong)(((lVar5 + (longlong)iVar1 * 2) - lVar2 >> 1) * 2)) &&
       (puVar6 = auStack_28, 0x1f < (lVar2 - *(longlong *)(lVar2 + -8)) - 8U)) {
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)();
      puVar6 = auStack_20;
    }
    *(undefined8 *)(puVar6 + -8) = 0x14000e863;
    thunk_FUN_14028af80();
  }
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)param_1[7] = 0;
  *(undefined4 *)param_1[10] = 0;
  *(undefined8 *)param_1[4] = 0;
  *(undefined8 *)param_1[8] = 0;
  *(undefined4 *)param_1[0xb] = 0;
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) & 0xfffffffe;
  *param_1 = &PTR_FUN_140474140;
  param_1[0xd] = 0;
  lVar5 = param_1[0xc];
  if (lVar5 == 0) {
    return;
  }
  if (*(longlong **)(lVar5 + 8) != (longlong *)0x0) {
    pcVar3 = *(code **)(**(longlong **)(lVar5 + 8) + 0x10);
    *(undefined8 *)(puVar6 + -8) = 0x14000e8b7;
    puVar4 = (undefined8 *)(*pcVar3)();
    if (puVar4 != (undefined8 *)0x0) {
      pcVar3 = *(code **)*puVar4;
      *(undefined8 *)(puVar6 + -8) = 0x14000e8ca;
      (*pcVar3)(puVar4,1);
    }
  }
  thunk_FUN_14028af80(lVar5,0x10);
  return;
}

