// Function: FUN_1404acfa0
// Addr: 1404acfa0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acfa0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 in_RAX;
  char unaff_BL;
  
  bVar1 = *param_1;
  bVar2 = (byte)in_RAX;
  *param_1 = *param_1 + bVar2;
  param_1[CONCAT71((int7)((ulonglong)in_RAX >> 8),(bVar2 - 10) - CARRY1(bVar1,bVar2))] =
       param_1[CONCAT71((int7)((ulonglong)in_RAX >> 8),(bVar2 - 10) - CARRY1(bVar1,bVar2))] +
       unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

