// Function: FUN_1400545e0
// Addr: 1400545e0
// Size: 215 bytes


void FUN_1400545e0(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint local_30;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  local_30 = CONCAT31(local_30._1_3_,1);
  *(uint *)(param_1 + 0x10) = local_30 & 0xfffffeff;
  lVar2 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = (longlong)param_2;
  lVar3 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
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
  if (lVar3 != 0) {
    FUN_140017240(lVar3 + 0x40);
    FUN_140017240(lVar3 + 0x20);
    FUN_140017240(lVar3);
    thunk_FUN_14028af80(lVar3,0x60);
  }
  return;
}

