// Function: FUN_1401298a0
// Addr: 1401298a0
// Size: 79 bytes


void FUN_1401298a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_38 [8];
  undefined *puStack_30;
  
  uVar2 = func_0x000140085160(local_38);
  func_0x00014010c450(param_1,uVar2);
  uVar2 = func_0x000140085160(local_38,param_2);
  FUN_14012a340(param_1,uVar2);
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

