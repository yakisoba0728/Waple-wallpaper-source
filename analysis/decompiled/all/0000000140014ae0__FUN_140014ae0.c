// Function: FUN_140014ae0
// Addr: 140014ae0
// Size: 250 bytes


void FUN_140014ae0(undefined8 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  *param_1 = &PTR_FUN_1404740b8;
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    if (*(longlong *)param_1[8] == 0) {
      lVar4 = (longlong)*(int *)param_1[10] + *(longlong *)param_1[7];
    }
    else {
      lVar4 = (longlong)*(int *)param_1[0xb] + *(longlong *)param_1[8];
    }
    lVar1 = *(longlong *)param_1[3];
    puVar5 = auStack_28;
    if ((0xfff < (ulonglong)(lVar4 - lVar1)) &&
       (puVar5 = auStack_28, 0x1f < (lVar1 - *(longlong *)(lVar1 + -8)) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      puVar5 = auStack_20;
    }
    *(undefined8 *)(puVar5 + -8) = 0x140014b5b;
    thunk_FUN_14028af80();
  }
  *(undefined8 *)param_1[3] = 0;
  *(undefined8 *)param_1[7] = 0;
  *(undefined4 *)param_1[10] = 0;
  *(undefined8 *)param_1[4] = 0;
  *(undefined8 *)param_1[8] = 0;
  *(undefined4 *)param_1[0xb] = 0;
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) & 0xfffffffe;
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  param_1[0xd] = 0;
  lVar4 = param_1[0xc];
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong **)(lVar4 + 8) != (longlong *)0x0) {
    pcVar2 = *(code **)(**(longlong **)(lVar4 + 8) + 0x10);
    *(undefined8 *)(puVar5 + -8) = 0x140014baf;
    puVar3 = (undefined8 *)(*pcVar2)();
    if (puVar3 != (undefined8 *)0x0) {
      pcVar2 = *(code **)*puVar3;
      *(undefined8 *)(puVar5 + -8) = 0x140014bc2;
      (*pcVar2)(puVar3,1);
    }
  }
  thunk_FUN_14028af80(lVar4,0x10);
  return;
}

