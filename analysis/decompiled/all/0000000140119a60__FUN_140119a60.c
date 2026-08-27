// Function: FUN_140119a60
// Addr: 140119a60
// Size: 564 bytes


void FUN_140119a60(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 ***local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  
  puVar8 = auStack_98;
  uVar4 = FUN_140086de0(param_1 + 7,"general","");
  uVar4 = FUN_140086de0(uVar4,"cefcommandline","");
  uVar5 = FUN_140086de0(param_2,"cefcommandline","");
  cVar2 = FUN_140085a30(uVar4,uVar5);
  uVar4 = FUN_140086de0(param_1 + 7,"general","");
  uVar4 = FUN_140017fb0(local_58,uVar4,param_2);
  uVar5 = FUN_140086de0(param_1 + 7,"general","");
  FUN_140085610(uVar5,uVar4);
  FUN_140085440(local_58);
  if (cVar2 == '\0') {
    if (param_1[0x2b] != -1) {
      FUN_140004d00(local_58,param_2,0);
      local_78 = 7;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      if (local_48 != 0) {
        local_68 = (int)local_48;
        uVar4 = thunk_FUN_14028af20(local_48 & 0xffffffff);
        ppppuVar6 = local_58;
        if (0xf < local_40) {
          ppppuVar6 = (undefined8 ****)local_58[0];
        }
        local_60 = uVar4;
        FUN_1404210f0(uVar4,ppppuVar6,local_48 & 0xffffffff);
        local_78 = CONCAT44((int)local_48,(undefined4)local_78);
        local_70 = uVar4;
      }
      uVar4 = local_70;
      iVar3 = FUN_140290d80(param_1 + 0x94);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      iVar3 = *(int *)((longlong)param_1 + 0x4ec);
      if (iVar3 == 0x7fffffff) {
LAB_140119c77:
        *(int *)((longlong)param_1 + 0x4ec) = iVar3 + -1;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar8 + -8) = &UNK_140119c8a;
        FUN_140290d30(6);
      }
      FUN_1400182d0(param_1 + 0x2b,&local_78);
      FUN_140290ea0(param_1 + 0x94);
      thunk_FUN_14028af80(uVar4);
      if (0xf < local_40) {
        uVar7 = local_40 + 1;
        ppppuVar6 = (undefined8 ****)local_58[0];
        if (0xfff < uVar7) {
          ppppuVar6 = (undefined8 ****)local_58[0][-1];
          if (0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)ppppuVar6))) {
            pcVar1 = (code *)swi(0x29);
            iVar3 = (*pcVar1)(5);
            puVar8 = auStack_90;
            goto LAB_140119c77;
          }
          uVar7 = local_40 + 0x28;
        }
        thunk_FUN_14028af80(ppppuVar6,uVar7);
      }
    }
    FUN_14011ae10(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  FUN_140085440(param_2);
  return;
}

