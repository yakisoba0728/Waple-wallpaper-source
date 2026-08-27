// Function: FUN_140216e00
// Addr: 140216e00
// Size: 318 bytes


undefined4 * FUN_140216e00(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  if (param_1 == param_2) {
    return param_1;
  }
  lVar3 = *(longlong *)(param_1 + 4);
  if (lVar3 == 0) {
LAB_140216e89:
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    lVar3 = *(longlong *)(param_1 + 10);
    if (lVar3 == 0) goto LAB_140216f07;
    if ((0xfff < (ulonglong)((*(longlong *)(param_1 + 0xe) - lVar3 >> 2) * 4)) &&
       (lVar2 = lVar3 - *(longlong *)(lVar3 + -8), lVar3 = *(longlong *)(lVar3 + -8),
       puVar5 = auStack_28, 0x1f < lVar2 - 8U)) goto LAB_140216ee9;
  }
  else {
    uVar4 = (*(longlong *)(param_1 + 8) - lVar3 >> 2) * 4;
    if (uVar4 < 0x1000) {
LAB_140216e75:
      thunk_FUN_14028af80(lVar3,uVar4);
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_140216e89;
    }
    if ((lVar3 - *(longlong *)(lVar3 + -8)) - 8U < 0x20) {
      uVar4 = uVar4 + 0x27;
      lVar3 = *(longlong *)(lVar3 + -8);
      goto LAB_140216e75;
    }
LAB_140216ee9:
    lVar3 = 5;
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar5 = auStack_20;
  }
  *(undefined8 *)(puVar5 + -8) = 0x140216efb;
  thunk_FUN_14028af80(lVar3);
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
LAB_140216f07:
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  return param_1;
}

