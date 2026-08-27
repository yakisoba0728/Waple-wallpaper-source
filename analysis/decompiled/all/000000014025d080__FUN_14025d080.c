// Function: FUN_14025d080
// Addr: 14025d080
// Size: 356 bytes


void FUN_14025d080(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  puVar8 = auStack_48;
  FUN_1401de470();
  if ((*(uint *)(param_1 + 0x2c4) >> 1 & 1) == 0) {
    return;
  }
  local_18 = 6;
  uStack_20 = 0;
  local_10 = 0xf;
  local_28 = (ulonglong)CONCAT24(s_cookie_140491acc._4_2_,s_cookie_140491acc._0_4_);
  puVar3 = (undefined8 *)FUN_140087490(param_2,&local_28,(longlong)&local_28 + 6);
  if (local_10 < 0x10) {
LAB_14025d131:
    local_18 = 0;
    local_10 = 0xf;
    local_28 = local_28 & 0xffffffffffffff00;
    puVar9 = auStack_48;
    if ((puVar3 == (undefined8 *)0x0) ||
       (uVar5 = *(uint *)(puVar3 + 1), puVar9 = auStack_48, (char)uVar5 != '\x04'))
    goto LAB_14025d1a6;
    pcVar7 = (char *)*puVar3;
    if (pcVar7 != (char *)0x0) goto LAB_14025d167;
    pcVar7 = (char *)0x0;
    puVar9 = auStack_48;
  }
  else {
    pcVar7 = (char *)(local_10 + 1);
    uVar6 = local_28;
    if (pcVar7 < (char *)0x1000) {
LAB_14025d12c:
      thunk_FUN_14028af80(uVar6,pcVar7);
      goto LAB_14025d131;
    }
    uVar6 = *(ulonglong *)(local_28 - 8);
    if ((local_28 - uVar6) - 8 < 0x20) {
      pcVar7 = (char *)(local_10 + 0x28);
      goto LAB_14025d12c;
    }
    uVar5 = 0;
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)();
    puVar8 = auStack_40;
LAB_14025d167:
    puVar9 = puVar8;
    if ((uVar5 >> 8 & 1) != 0) {
      pcVar7 = pcVar7 + 4;
    }
  }
  if (*pcVar7 != '\0') {
    lVar1 = *(longlong *)(param_1 + 200);
    *(undefined8 *)(puVar9 + -8) = 0x14025d19f;
    uVar4 = FUN_14014cf90(lVar1 + 0x1520);
    *(undefined8 *)(param_1 + 0x330) = uVar4;
  }
LAB_14025d1a6:
  if (*(longlong *)(param_1 + 0x330) == 0) {
    lVar1 = *(longlong *)(param_1 + 200);
    *(undefined8 *)(puVar9 + -8) = 0x14025d1cd;
    uVar4 = FUN_14014cf90(lVar1 + 0x1520,"cookie/flashlight1",1);
    *(undefined8 *)(param_1 + 0x330) = uVar4;
  }
  return;
}

