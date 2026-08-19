// Function: FUN_14010d240
// Addr: 14010d240
// Size: 273 bytes


void FUN_14010d240(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong *local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  puVar3 = *(undefined8 **)(param_1 + 0xa8);
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar3 != puVar1) {
    do {
      local_90 = (local_90 >> 8 & 0xfffffe) << 8;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      FUN_14011cad0(*puVar3,&local_98);
      if ((local_90 & 0xff) != 6) {
        if (7 < (local_90 & 0xff)) {
          func_0x0001402cba34(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434
                             );
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00014010d2d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_140000080.field_0x50 +
                  *(uint *)(&UNWIND_INFO_14010d5b5.field_0x77 + (ulonglong)(byte)local_90 * 4)))
                  (&DAT_140000080.field_0x50 +
                   *(uint *)(&UNWIND_INFO_14010d5b5.field_0x77 + (ulonglong)(byte)local_90 * 4));
        return;
      }
      if (local_98 == (longlong *)0x0) {
        bVar4 = true;
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)*local_98;
        bVar4 = lVar2 == *local_98;
      }
      if (!bVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_140086eb0(lVar2 + 0x30,&DAT_140474988,&DAT_14047498c);
      }
      func_0x000140085510(&local_98);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
  }
  return;
}

