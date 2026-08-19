// Function: FUN_140290e00
// Addr: 140290e00
// Size: 10 bytes


void FUN_140290e00(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [48];
  
  uVar2 = func_0x000140015e30();
  FUN_140290cc0(auStack_38,*(undefined4 *)(&UNK_14042abb8 + (longlong)param_1 * 4),uVar2,
                (&PTR_s_descriptor_14042a428_8_14042ab80)[param_1]);
  func_0x0001402bbb30(auStack_38,&UNK_1404d8530);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

