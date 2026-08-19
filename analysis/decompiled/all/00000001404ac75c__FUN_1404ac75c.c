// Function: FUN_1404ac75c
// Addr: 1404ac75c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac75c(undefined8 param_1)

{
  byte bVar1;
  byte *in_RAX;
  byte bVar2;
  
  bVar2 = (byte)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX + (char)in_RAX;
  bVar1 = *in_RAX;
  *in_RAX = *in_RAX + bVar2;
  *in_RAX = *in_RAX + (char)in_RAX + CARRY1(bVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

