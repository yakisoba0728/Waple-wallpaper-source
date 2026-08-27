// Function: FUN_1402ed6e0
// Addr: 1402ed6e0
// Size: 145 bytes


char * FUN_1402ed6e0(int *param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(int)IMAGE_DOS_HEADER_140000000.e_lfanew;
  if ((0xd < *(uint *)(&UNK_140000080.field_0x4 + lVar3)) &&
     (*(uint *)(&UNK_140000080.field_0x70 + lVar3) != 0)) {
    uVar2 = 0;
    lVar1 = (ulonglong)*(ushort *)((longlong)IMAGE_DOS_HEADER_140000000.e_res_4_ + lVar3 + -8) +
            lVar3 + 0x140000018;
    if (*(ushort *)(IMAGE_DOS_HEADER_140000000.e_magic + lVar3 + 6) != 0) {
      do {
        if ((*(uint *)(lVar1 + 0xc) <=
             *(uint *)(IMAGE_DOS_HEADER_140000000.e_magic +
                      (ulonglong)*(uint *)(&UNK_140000080.field_0x70 + lVar3) + 0xc)) &&
           (*(uint *)(IMAGE_DOS_HEADER_140000000.e_magic +
                     (ulonglong)*(uint *)(&UNK_140000080.field_0x70 + lVar3) + 0xc) <
            *(uint *)(lVar1 + 0xc) + *(int *)(lVar1 + 8))) {
          *param_1 = *(int *)(lVar1 + 8);
          *param_2 = *(undefined4 *)(lVar1 + 0x24);
          return IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(lVar1 + 0xc);
        }
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 0x28;
      } while (uVar2 < *(ushort *)(IMAGE_DOS_HEADER_140000000.e_magic + lVar3 + 6));
    }
  }
  return (char *)0x0;
}

