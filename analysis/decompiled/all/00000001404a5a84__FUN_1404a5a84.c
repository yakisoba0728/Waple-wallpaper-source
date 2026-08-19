// Function: FUN_1404a5a84
// Addr: 1404a5a84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5a84(char *param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  byte *pbVar2;
  
  bVar1 = (char)in_RAX + 0x60;
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *pbVar2 = *pbVar2 ^ bVar1;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

