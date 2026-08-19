// Function: FUN_1404a8b94
// Addr: 1404a8b94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8b94(byte *param_1)

{
  byte bVar1;
  byte bVar3;
  undefined8 in_RAX;
  byte *pbVar2;
  
  bVar1 = *param_1;
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar3;
  bVar1 = (char)in_RAX + '\x04' + CARRY1(bVar1,bVar3);
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *pbVar2 = *pbVar2 | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

