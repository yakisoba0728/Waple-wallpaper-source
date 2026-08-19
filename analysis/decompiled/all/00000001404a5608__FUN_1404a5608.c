// Function: FUN_1404a5608
// Addr: 1404a5608
// Size: 1 bytes


void FUN_1404a5608(void)

{
  code *pcVar1;
  uint in_EAX;
  
  uRam00000001944f5610 = uRam00000001944f5610 & in_EAX;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}

