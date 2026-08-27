// Function: FUN_1401bc080
// Addr: 1401bc080
// Size: 972 bytes


void FUN_1401bc080(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_58;
  uint local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar2 = FUN_140087490(param_1,"count","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,1);
    plVar3 = (longlong *)FUN_140086de0(param_1,"count","");
    uVar7 = *(uint *)(plVar3 + 1);
    *(uint *)(plVar3 + 1) = local_50 & 0xfffffeff;
    lVar2 = *plVar3;
    *plVar3 = 0x20;
    lVar1 = plVar3[2];
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    switch(uVar7 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar7 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(lVar2);
      }
      break;
    case 6:
    case 7:
      if (lVar2 != 0) {
        FUN_140088e40(lVar2);
        thunk_FUN_14028af80(lVar2,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    if (lVar1 != 0) {
      FUN_140017240(lVar1 + 0x40);
      FUN_140017240(lVar1 + 0x20);
      FUN_140017240(lVar1);
      thunk_FUN_14028af80(lVar1,0x60);
    }
  }
  lVar2 = FUN_140087490(param_1,"bounds","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,4);
    uVar7 = local_50 | 0x100;
    puVar4 = (undefined4 *)_malloc_base(8);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_140017170(&local_58,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_58);
    }
    *puVar4 = 3;
    *(short *)(puVar4 + 1) = (short)DAT_14048f734;
    *(char *)((longlong)puVar4 + 6) = (char)((uint)DAT_14048f734 >> 0x10);
    *(undefined1 *)((longlong)puVar4 + 7) = 0;
    puVar5 = (undefined8 *)FUN_140086de0(param_1,"bounds","");
    local_50 = *(uint *)(puVar5 + 1);
    *(uint *)(puVar5 + 1) = uVar7;
    local_58 = *puVar5;
    *puVar5 = puVar4;
    lVar2 = puVar5[2];
    puVar5[2] = 0;
    local_38 = puVar5[4];
    uStack_40 = puVar5[3];
    puVar5[3] = 0;
    puVar5[4] = 0;
    local_48 = lVar2;
    FUN_140086d30(&local_58);
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  lVar2 = FUN_140087490(param_1,"limitbehavior","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,4);
    uVar7 = local_50 | 0x100;
    puVar4 = (undefined4 *)_malloc_base(0xb);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_140017170(&local_58,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_58);
    }
    *puVar4 = 6;
    puVar4[1] = s_repeat_14048f6f8._0_4_;
    *(undefined2 *)(puVar4 + 2) = s_repeat_14048f6f8._4_2_;
    *(undefined1 *)((longlong)puVar4 + 10) = 0;
    puVar5 = (undefined8 *)FUN_140086de0(param_1,"limitbehavior","");
    local_50 = *(uint *)(puVar5 + 1);
    *(uint *)(puVar5 + 1) = uVar7;
    local_58 = *puVar5;
    *puVar5 = puVar4;
    lVar2 = puVar5[2];
    puVar5[2] = 0;
    local_38 = puVar5[4];
    uStack_40 = puVar5[3];
    puVar5[3] = 0;
    puVar5[4] = 0;
    local_48 = lVar2;
    FUN_140086d30(&local_58);
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  lVar2 = FUN_140087490(param_1,"controlpointstart","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,1);
    local_50 = local_50 & 0xfffffeff;
    local_38 = 0;
    local_58 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uVar6 = FUN_140086de0(param_1,"controlpointstart","");
    FUN_140085610(uVar6,&local_58);
    FUN_140085440(&local_58);
  }
  FUN_1401d7be0(param_1,"controlpointend",1);
  FUN_1401d7be0(param_1,"flags",0);
  FUN_1401d7d30(param_1,"arcamount",DAT_140492694);
  FUN_1401d7e80(param_1,"arcdirection",&DAT_14048f6d0);
  FUN_1401d7d30(param_1,"sizereductionamount",DAT_1404926e8);
  return;
}

