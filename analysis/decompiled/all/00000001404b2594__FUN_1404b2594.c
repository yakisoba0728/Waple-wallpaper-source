// Function: FUN_1404b2594
// Addr: 1404b2594
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2594(void)

{
  char cVar1;
  uint in_EAX;
  uint unaff_ESP;
  byte bVar2;
  char *pcVar3;
  
  bVar2 = (byte)(in_EAX | unaff_ESP);
  cVar1 = bVar2 + 0x34;
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)((in_EAX | unaff_ESP) >> 8),cVar1);
  *pcVar3 = *pcVar3 + cVar1 + (0xcb < bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

