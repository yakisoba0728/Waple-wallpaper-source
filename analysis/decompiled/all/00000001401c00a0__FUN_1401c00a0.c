// Function: FUN_1401c00a0
// Addr: 1401c00a0
// Size: 808 bytes


void FUN_1401c00a0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_58;
  uint local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar2 = FUN_140087490(param_1,"bouncefactor","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,3);
    uVar7 = local_50 & 0xfffffeff;
    puVar3 = (undefined8 *)FUN_140086de0(param_1,"bouncefactor","");
    local_50 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar7;
    local_58 = *puVar3;
    *puVar3 = 0x3fe0000000000000;
    lVar2 = puVar3[2];
    puVar3[2] = 0;
    uStack_40 = puVar3[3];
    local_38 = puVar3[4];
    puVar3[3] = 0;
    puVar3[4] = 0;
    local_48 = lVar2;
    FUN_140086d30(&local_58);
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  lVar2 = FUN_140087490(param_1,"collisionbehavior","");
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
    puVar4[1] = s_bounce_14048fb50._0_4_;
    *(undefined2 *)(puVar4 + 2) = s_bounce_14048fb50._4_2_;
    *(undefined1 *)((longlong)puVar4 + 10) = 0;
    puVar3 = (undefined8 *)FUN_140086de0(param_1,"collisionbehavior","");
    local_50 = *(uint *)(puVar3 + 1);
    *(uint *)(puVar3 + 1) = uVar7;
    local_58 = *puVar3;
    *puVar3 = puVar4;
    lVar2 = puVar3[2];
    puVar3[2] = 0;
    local_38 = puVar3[4];
    uStack_40 = puVar3[3];
    puVar3[3] = 0;
    puVar3[4] = 0;
    local_48 = lVar2;
    FUN_140086d30(&local_58);
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  lVar2 = FUN_140087490(param_1,"flags","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,1);
    plVar5 = (longlong *)FUN_140086de0(param_1,"flags","");
    uVar7 = *(uint *)(plVar5 + 1);
    *(uint *)(plVar5 + 1) = local_50 & 0xfffffeff;
    lVar2 = *plVar5;
    *plVar5 = 0;
    lVar1 = plVar5[2];
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
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
  lVar2 = FUN_140087490(param_1,"controlpoint","");
  if (lVar2 == 0) {
    local_50 = CONCAT31(local_50._1_3_,1);
    local_50 = local_50 & 0xfffffeff;
    local_38 = 0;
    local_58 = 0;
    local_48 = 0;
    uStack_40 = 0;
    uVar6 = FUN_140086de0(param_1,"controlpoint","");
    FUN_140085610(uVar6,&local_58);
    FUN_140085440(&local_58);
  }
  return;
}

