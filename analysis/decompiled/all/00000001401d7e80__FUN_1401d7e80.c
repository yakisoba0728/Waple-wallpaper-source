// Function: FUN_1401d7e80
// Addr: 1401d7e80
// Size: 402 bytes


void FUN_1401d7e80(undefined8 param_1,char *param_2,char *param_3)

{
  uint uVar1;
  longlong lVar2;
  size_t sVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 local_48 [8];
  uint local_40;
  
  sVar3 = strlen(param_2);
  lVar4 = FUN_140087490(param_1,param_2,param_2 + sVar3);
  if (lVar4 == 0) {
    local_40 = CONCAT31(local_40._1_3_,4);
    sVar3 = strlen(param_3);
    puVar5 = (undefined4 *)_malloc_base((sVar3 & 0xffffffff) + 5);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_140017170(local_48,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(local_48);
    }
    *puVar5 = (int)sVar3;
    uVar7 = local_40 | 0x100;
    FUN_1404210f0(puVar5 + 1,param_3,sVar3 & 0xffffffff);
    *(undefined1 *)((longlong)puVar5 + (sVar3 & 0xffffffff) + 4) = 0;
    sVar3 = strlen(param_2);
    plVar6 = (longlong *)FUN_140086de0(param_1,param_2,param_2 + sVar3);
    uVar1 = *(uint *)(plVar6 + 1);
    *(uint *)(plVar6 + 1) = uVar7;
    lVar4 = *plVar6;
    *plVar6 = (longlong)puVar5;
    lVar2 = plVar6[2];
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    switch(uVar1 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar1 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(lVar4);
      }
      break;
    case 6:
    case 7:
      if (lVar4 != 0) {
        FUN_140088e40(lVar4);
        thunk_FUN_14028af80(lVar4,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    if (lVar2 != 0) {
      FUN_140017240(lVar2 + 0x40);
      FUN_140017240(lVar2 + 0x20);
      FUN_140017240(lVar2);
      thunk_FUN_14028af80(lVar2,0x60);
    }
  }
  return;
}

