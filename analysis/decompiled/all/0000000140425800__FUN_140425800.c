// Function: FUN_140425800
// Addr: 140425800
// Size: 84 bytes


void FUN_140425800(void)

{
  *(undefined ***)((longlong)&PTR_DAT_1404dc180 + (longlong)*(int *)(PTR_DAT_1404dc180 + 4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(PTR_DAT_1404dc180 + 4) + 0x1404dc17c) =
       *(int *)(PTR_DAT_1404dc180 + 4) + -0x10;
  PTR_vftable_1404dc190 = (undefined *)std::ios_base::vftable;
  FUN_14028c430(&PTR_vftable_1404dc190);
  return;
}

