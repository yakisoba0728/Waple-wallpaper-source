// Function: FUN_14025af90
// Addr: 14025af90
// Size: 220 bytes


void FUN_14025af90(byte *param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined7 uStack_37;
  uint local_30;
  
  bVar1 = *param_1;
  uVar2 = *(uint *)(param_2 + 1);
  local_30 = CONCAT31(local_30._1_3_,5);
  *(uint *)(param_2 + 1) = local_30 & 0xfffffeff;
  lVar3 = *param_2;
  *param_2 = CONCAT71(uStack_37,(bVar1 & 0x10) != 0);
  lVar4 = param_2[2];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  switch(uVar2 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((uVar2 >> 8 & 1) != 0) {
      thunk_FUN_1402d9040(lVar3);
    }
    break;
  case 6:
  case 7:
    if (lVar3 != 0) {
      FUN_140088e40(lVar3);
      thunk_FUN_14028af80(lVar3,0x10);
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

