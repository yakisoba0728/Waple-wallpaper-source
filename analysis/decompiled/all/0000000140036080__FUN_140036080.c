// Function: FUN_140036080
// Addr: 140036080
// Size: 599 bytes


void FUN_140036080(ULONG_PTR param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ULONG_PTR local_res8;
  undefined1 auStackY_68 [8];
  undefined1 auStackY_60 [24];
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  puVar6 = auStackY_68;
  puVar7 = (undefined8 *)0x0;
  local_res8 = param_1;
  if (DAT_1404e6a68 != (longlong *)0x0) {
    (**(code **)(*DAT_1404e6a68 + 0x20))
              (DAT_1404e6a68,CONCAT71(0x1404e6a,DAT_1404e6a68 != (longlong *)&DAT_1404e6a30));
    DAT_1404e6a68 = (longlong *)0x0;
  }
  if (DAT_1404df580 == 0) {
    return;
  }
  local_18 = (undefined4)DAT_1404df580;
  local_28 = 2;
  local_20 = 0;
  local_10 = 0;
  local_10 = thunk_FUN_14028af20(DAT_1404df580 & 0xffffffff);
  puVar2 = &DAT_1404df570;
  if (0xf < DAT_1404df588) {
    puVar2 = DAT_1404df570;
  }
  FUN_1404210f0(local_10,puVar2,local_18);
  local_20 = local_10;
  local_28 = CONCAT44(local_18,(undefined4)local_28);
  local_res8 = 0;
  SendMessageTimeoutW(DAT_1404e5280,0x401,0,(LPARAM)&local_28,1,0,&local_res8);
  DAT_1404df580 = 0;
  puVar2 = &DAT_1404df570;
  if (0xf < DAT_1404df588) {
    puVar2 = DAT_1404df570;
  }
  *(undefined1 *)puVar2 = 0;
  puVar2 = DAT_1404df570;
  if (DAT_1404df588 < 0x10) goto LAB_1400362b6;
  if (DAT_1404df580 < 0x10) {
    FUN_1404210f0(&DAT_1404df570,DAT_1404df570,DAT_1404df580 + 1);
    uVar4 = DAT_1404df588 + 1;
    if (0xfff < uVar4) {
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)puVar2 + (-8 - (longlong)puVar2[-1]))) {
LAB_1400362cb:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar6 = auStackY_60;
LAB_1400362d2:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar6 + -8) = &UNK_1400362d7;
        FUN_140017370();
      }
      uVar4 = DAT_1404df588 + 0x28;
      puVar2 = (undefined8 *)puVar2[-1];
    }
    thunk_FUN_14028af80(puVar2,uVar4);
    DAT_1404df588 = 0xf;
  }
  else {
    uVar4 = DAT_1404df580 | 0xf;
    if (0x7fffffffffffffff < uVar4) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (DAT_1404df588 <= uVar4) goto LAB_1400362b6;
    if (uVar4 != 0xffffffffffffffff) {
      if (uVar4 + 1 < 0x1000) {
        puVar7 = (undefined8 *)FUN_14028af20();
      }
      else {
        if (uVar4 + 0x28 <= uVar4 + 1) goto LAB_1400362d2;
        lVar3 = FUN_14028af20(uVar4 + 0x28);
        if (lVar3 == 0) goto LAB_1400362cb;
        puVar7 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
        puVar7[-1] = lVar3;
      }
    }
    FUN_1404210f0(puVar7,DAT_1404df570,DAT_1404df580 + 1);
    uVar5 = DAT_1404df588 + 1;
    puVar2 = DAT_1404df570;
    if (0xfff < uVar5) {
      puVar2 = (undefined8 *)DAT_1404df570[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)DAT_1404df570 + (-8 - (longlong)puVar2)))
      goto LAB_1400362cb;
      uVar5 = DAT_1404df588 + 0x28;
    }
    thunk_FUN_14028af80(puVar2,uVar5);
    DAT_1404df570 = puVar7;
    DAT_1404df588 = uVar4;
  }
LAB_1400362b6:
  thunk_FUN_14028af80(local_10);
  return;
}

