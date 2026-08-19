// Function: FUN_1404a45dc
// Addr: 1404a45dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a45dc(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  ulonglong in_RAX;
  uint *puVar3;
  char *pcVar4;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  char in_ZF;
  
  pcVar4 = (char *)(param_1 + -1);
  if (pcVar4 != (char *)0x0 && in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar4 = *pcVar4 + unaff_SPL;
  puVar3 = (uint *)(in_RAX | 6);
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + param_2 * 8);
  *pcVar1 = *pcVar1 + (char)pcVar4;
  *puVar3 = *puVar3 | (uint)puVar3;
  bVar2 = (byte)puVar3;
  if ('\0' < (char)((bVar2 | *(byte *)CONCAT62((int6)(in_RAX >> 0x10),
                                               CONCAT11((byte)(in_RAX >> 8) | bVar2,bVar2))) + 100))
  {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + -0x78) = *(char *)(unaff_RBP + -0x78) + (char)((ulonglong)pcVar4 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

