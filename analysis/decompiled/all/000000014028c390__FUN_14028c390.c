// Function: FUN_14028c390
// Addr: 14028c390
// Size: 1 bytes


void FUN_14028c390(void)

{
  code *pcVar1;
  undefined1 auStack_28 [40];
  
  func_0x00014028c030(auStack_28);
  func_0x0001402bbb30(auStack_28,&UNK_1404d8468);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

