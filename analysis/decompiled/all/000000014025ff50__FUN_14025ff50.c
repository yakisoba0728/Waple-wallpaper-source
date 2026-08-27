// Function: FUN_14025ff50
// Addr: 14025ff50
// Size: 511 bytes


void FUN_14025ff50(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar2 = FUN_140086de0(param_2,"combos","");
  if (*(char *)(lVar2 + 8) != '\a') {
    local_50 = CONCAT31(local_50._1_3_,7);
    local_50 = local_50 & 0xfffffeff;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    plVar3 = (longlong *)FUN_14028af20(0x10);
    *plVar3 = 0;
    plVar3[1] = 0;
    lVar4 = FUN_14028af20(0x58);
    *(longlong *)lVar4 = lVar4;
    *(longlong *)(lVar4 + 8) = lVar4;
    *(longlong *)(lVar4 + 0x10) = lVar4;
    *(undefined2 *)(lVar4 + 0x18) = 0x101;
    *plVar3 = lVar4;
    local_58 = plVar3;
    FUN_140085610(lVar2,&local_58);
    plVar3 = local_58;
    switch((undefined1)local_50) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((local_50 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(local_58);
      }
      break;
    case 6:
    case 7:
      if (local_58 != (longlong *)0x0) {
        FUN_140088e40(local_58);
        thunk_FUN_14028af80(plVar3,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    lVar4 = local_48;
    if (local_48 != 0) {
      FUN_140017240(local_48 + 0x40);
      FUN_140017240(lVar4 + 0x20);
      FUN_140017240(lVar4);
      thunk_FUN_14028af80(lVar4,0x60);
    }
  }
  local_50 = CONCAT31(local_50._1_3_,1);
  plVar3 = (longlong *)FUN_140086de0(lVar2,"DIRECTDRAW","");
  uVar1 = *(uint *)(plVar3 + 1);
  *(uint *)(plVar3 + 1) = local_50 & 0xfffffeff;
  lVar2 = *plVar3;
  *plVar3 = 1;
  lVar4 = plVar3[2];
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  switch(uVar1 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((uVar1 >> 8 & 1) != 0) {
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
  if (lVar4 != 0) {
    FUN_140017240(lVar4 + 0x40);
    FUN_140017240(lVar4 + 0x20);
    FUN_140017240(lVar4);
    thunk_FUN_14028af80(lVar4,0x60);
  }
  return;
}

