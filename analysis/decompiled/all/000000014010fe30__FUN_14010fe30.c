// Function: FUN_14010fe30
// Addr: 14010fe30
// Size: 18 bytes


void FUN_14010fe30(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uStackX_8;
  undefined1 auStack_38 [8];
  undefined *puStack_30;
  
  iVar2 = func_0x000140290e50(param_1 + 0x3d8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x424) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x424) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(6);
  }
  uVar3 = func_0x000140085160(auStack_38,param_2);
  func_0x00014010c450(param_1,uVar3);
  FUN_140290f70(param_1 + 0x3d8);
  iVar2 = (*DAT_140426af0)();
  if (iVar2 != 0) {
    uStackX_8 = 0;
    (*DAT_1404267f0)(*(undefined8 *)(param_1 + 0x1c8),0x466,param_2,0,1,0,&uStackX_8);
  }
  switch(*(uint *)(param_2 + 1) & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((*(uint *)(param_2 + 1) >> 8 & 1) != 0) {
      puStack_30 = (undefined *)0x14008554d;
      func_0x0001402bf8e0(*param_2);
    }
    break;
  case 6:
  case 7:
    lVar1 = *param_2;
    if (lVar1 != 0) {
      puStack_30 = (undefined *)0x14008555f;
      func_0x000140088f10(lVar1);
      puStack_30 = (undefined *)0x14008556c;
      func_0x00014028b040(lVar1,0x10);
    }
    break;
  default:
    puStack_30 = (undefined *)0x140085587;
    func_0x0001402cba34(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  *param_2 = 0;
  if (param_2[2] == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_30 = &UNK_1400855a5;
  FUN_140017310(param_2[2] + 0x40);
}

