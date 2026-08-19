// Function: FUN_14001dfb0
// Addr: 14001dfb0
// Size: 73 bytes


void FUN_14001dfb0(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_4d8 [32];
  undefined4 uStack_4b8;
  undefined1 auStack_4a8 [1096];
  undefined *puStack_60;
  longlong lStack_38;
  undefined *local_30;
  ulonglong uStack_28;
  
  puStack_60 = (undefined *)0x14001dfb9;
  cVar2 = FUN_14003dbe0();
  if (cVar2 != '\0') {
    local_30 = (undefined *)((ulonglong)local_30 & 0xffffffffffffff00);
    puStack_60 = (undefined *)0x14001dfcd;
    FUN_14003da00(DAT_1404df61c);
    switch((ulonglong)local_30 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      break;
    case 6:
    case 7:
      if (lStack_38 != 0) {
        puStack_60 = &UNK_14001dffc;
        func_0x000140088f10(lStack_38);
        if (lStack_38 != 0) {
          local_30 = (undefined *)0x1402d912c;
          iVar3 = (*DAT_1404264b8)(DAT_1404e4fa0,0,lStack_38);
          if (iVar3 == 0) {
            local_30 = (undefined *)0x1402d9136;
            uVar4 = (*DAT_1404266a8)();
            local_30 = (undefined *)0x1402d913d;
            func_0x0001402caec4(uVar4);
                    /* WARNING: Subroutine does not return */
            local_30 = &UNK_1402d9144;
            FUN_1402cb004();
          }
        }
        return;
      }
      break;
    default:
      local_30 = (undefined *)0x1402cba60;
      iVar3 = func_0x0001402dec1c(3);
      if (iVar3 == 1) {
code_r0x0001402cba98:
        local_30 = &UNK_1402cbaa6;
        func_0x0001402cb878(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (iVar3 == 0) {
        local_30 = &UNK_1402cba6e;
        iVar3 = func_0x0001402d1fd0();
        if (iVar3 == 1) goto code_r0x0001402cba98;
      }
      uStack_28 = DAT_1404dc110 ^ (ulonglong)auStack_4d8;
      func_0x000140421870(auStack_4a8,0,0x480);
      uStack_4b8 = 0x434;
      func_0x0001402cb37c(auStack_4a8,0x240,L"false",
                          L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp");
      iVar3 = FUN_1402dee18(auStack_4a8,L"Microsoft Visual C++ Runtime Library",0x12012);
      if (iVar3 == 3) {
        FUN_1402dcf48(0x16);
        func_0x0001402d106c(3);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (iVar3 == 4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (iVar3 != 5) {
                    /* WARNING: Subroutine does not return */
        FUN_1402c98b4();
      }
      func_0x0001402ed2f0(uStack_28 ^ (ulonglong)auStack_4d8);
      return;
    }
  }
  return;
}

