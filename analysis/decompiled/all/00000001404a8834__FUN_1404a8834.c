// Function: FUN_1404a8834
// Addr: 1404a8834
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8834(void)

{
  byte bVar1;
  byte bVar2;
  byte *in_RAX;
  int *piVar3;
  
  bVar1 = *in_RAX;
  bVar2 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar2;
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                           (bVar2 - (char)((ulonglong)in_RAX >> 8)) - CARRY1(bVar1,bVar2));
  *piVar3 = *piVar3 + (int)piVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

