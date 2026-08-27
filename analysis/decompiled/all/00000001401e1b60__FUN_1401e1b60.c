// Function: FUN_1401e1b60
// Addr: 1401e1b60
// Size: 221 bytes


void FUN_1401e1b60(undefined4 *param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined7 uStack_37;
  uint local_30;
  
  uVar1 = *param_1;
  uVar4 = param_2[1];
  local_30 = CONCAT31(local_30._1_3_,5);
  *(uint *)(param_2 + 1) = local_30 & 0xfffffeff;
  uVar2 = *param_2;
  *param_2 = CONCAT71(uStack_37,(char)uVar1) & 0xffffffffffffff01;
  uVar3 = param_2[2];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  switch((uint)uVar4 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if (((uint)uVar4 >> 8 & 1) != 0) {
      thunk_FUN_1402d9040(uVar2);
    }
    break;
  case 6:
  case 7:
    if (uVar2 != 0) {
      FUN_140088e40(uVar2);
      thunk_FUN_14028af80(uVar2,0x10);
    }
    break;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  if (uVar3 != 0) {
    FUN_140017240(uVar3 + 0x40);
    FUN_140017240(uVar3 + 0x20);
    FUN_140017240(uVar3);
    thunk_FUN_14028af80(uVar3,0x60);
  }
  return;
}

