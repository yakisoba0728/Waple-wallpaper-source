// Function: FUN_140065da0
// Addr: 140065da0
// Size: 477 bytes


undefined8
FUN_140065da0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_b8;
  uint local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_68 [48];
  
  local_b0 = CONCAT31(local_b0._1_3_,7);
  local_b0 = local_b0 & 0xfffffeff;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  plVar2 = (longlong *)func_0x00014028aff0(0x10);
  *plVar2 = 0;
  plVar2[1] = 0;
  lVar3 = func_0x00014028aff0(0x58);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  *(longlong *)(lVar3 + 0x10) = lVar3;
  *(undefined2 *)(lVar3 + 0x18) = 0x101;
  *plVar2 = lVar3;
  puVar5 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar5 = (undefined8 *)*param_3;
  }
  local_b8 = plVar2;
  func_0x000140063fd0(puVar5,param_5,&local_b8);
  plVar7 = DAT_1404e53e8;
  plVar2 = DAT_1404e53e0;
  while( true ) {
    if (plVar2 == plVar7) {
      func_0x00014005a960(param_2);
      bVar8 = DAT_1404e6580 != -1;
      if (bVar8) {
        func_0x000140069090(&DAT_1404e53b0,param_2,&DAT_1404e6580);
      }
      uVar4 = func_0x000140085160(local_68,&local_b8);
      lVar3 = FUN_140072b40(extraout_XMM0_Da,param_2,param_3,param_4,uVar4);
      if (lVar3 != 0) {
        if (bVar8) {
          FUN_14006a100(extraout_XMM0_Da_00,0);
        }
        FUN_14006e190();
        FUN_14006e7a0();
                    /* WARNING: Subroutine does not return */
        FUN_140086eb0(&DAT_1404e6448,"selectedwallpapers","");
      }
      if ((byte)local_b0 < 8) {
                    /* WARNING: Could not recover jumptable at 0x000140066341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(&DAT_140000080.field_0x50 +
                          *(uint *)(&DAT_14006641c + (ulonglong)(byte)local_b0 * 4)))
                          (&DAT_140000080.field_0x50 +
                           *(uint *)(&DAT_14006641c + (ulonglong)(byte)local_b0 * 4));
        return uVar4;
      }
      func_0x0001402cba34(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      if (local_a8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140017310(local_a8 + 0x40);
      }
      return 0;
    }
    if (param_2[2] == 0) break;
    lVar3 = *plVar2;
    plVar6 = (longlong *)(lVar3 + 0x10);
    puVar5 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar5 = (undefined8 *)*param_2;
    }
    if (0xf < *(ulonglong *)(lVar3 + 0x28)) {
      plVar6 = (longlong *)*plVar6;
    }
    if ((*(longlong *)(lVar3 + 0x20) == param_2[2]) &&
       ((*(longlong *)(lVar3 + 0x20) == 0 ||
        (iVar1 = func_0x0001404210c0(plVar6,puVar5), iVar1 == 0)))) break;
    plVar2 = plVar2 + 1;
  }
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    FUN_140058200(lVar3);
    func_0x00014028b040(lVar3,0xf0);
    plVar7 = DAT_1404e53e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(plVar2,plVar2 + 1,(longlong)plVar7 - (longlong)(plVar2 + 1));
}

