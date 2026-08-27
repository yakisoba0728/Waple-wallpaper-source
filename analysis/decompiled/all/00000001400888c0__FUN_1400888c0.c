// Function: FUN_1400888c0
// Addr: 1400888c0
// Size: 459 bytes


void FUN_1400888c0(longlong param_1,longlong *param_2,int param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  ulonglong uStack_30;
  
  puVar7 = auStack_68;
  if (param_2[2] != 0) {
    plVar5 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar5 = (longlong *)*param_2;
    }
    lVar2 = param_2[2] + -1;
    if (*(char *)(lVar2 + (longlong)plVar5) == '\n') {
      param_2[2] = lVar2;
      plVar5 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        plVar5 = (longlong *)*param_2;
      }
      *(undefined1 *)((longlong)plVar5 + lVar2) = 0;
    }
  }
  local_48 = *param_2;
  lStack_40 = param_2[1];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  if (param_3 < 3) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      puVar3 = (undefined8 *)FUN_14028af20(0x60);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0xf;
      *(undefined1 *)puVar3 = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0xf;
      *(undefined1 *)(puVar3 + 4) = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0xf;
      *(undefined1 *)(puVar3 + 8) = 0;
      lVar2 = *(longlong *)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x10) = puVar3;
      if (lVar2 != 0) {
        FUN_140017240(lVar2 + 0x40);
        FUN_140017240(lVar2 + 0x20);
        FUN_140017240(lVar2);
        thunk_FUN_14028af80(lVar2,0x60);
      }
    }
    FUN_14000de40((longlong)param_3 * 0x20 + *(longlong *)(param_1 + 0x10),&local_48);
    if (0xf < uStack_30) goto LAB_140088a06;
LAB_140088a2f:
    if ((ulonglong)param_2[3] < 0x10) goto LAB_140088a72;
    lVar2 = *param_2;
    if ((0xfff < param_2[3] + 1U) &&
       (lVar4 = lVar2 - *(longlong *)(lVar2 + -8), puVar7 = auStack_68,
       lVar2 = *(longlong *)(lVar2 + -8), 0x1f < lVar4 - 8U)) goto LAB_140088a60;
  }
  else {
    if (uStack_30 < 0x10) goto LAB_140088a2f;
LAB_140088a06:
    uVar6 = uStack_30 + 1;
    lVar2 = local_48;
    if (uVar6 < 0x1000) {
LAB_140088a2a:
      thunk_FUN_14028af80(lVar2,uVar6);
      goto LAB_140088a2f;
    }
    lVar2 = *(longlong *)(local_48 + -8);
    if ((local_48 - lVar2) - 8U < 0x20) {
      uVar6 = uStack_30 + 0x28;
      goto LAB_140088a2a;
    }
LAB_140088a60:
    pcVar1 = (code *)swi(0x29);
    lVar2 = (*pcVar1)(5);
    puVar7 = auStack_60;
  }
  *(undefined8 *)(puVar7 + -8) = 0x140088a72;
  thunk_FUN_14028af80(lVar2);
LAB_140088a72:
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  return;
}

