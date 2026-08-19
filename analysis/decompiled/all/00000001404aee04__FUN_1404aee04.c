// Function: FUN_1404aee04
// Addr: 1404aee04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aee04(longlong param_1,longlong param_2)

{
  byte bVar1;
  int *in_RAX;
  byte bVar3;
  byte *pbVar2;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX + (int)param_1;
  bVar1 = (char)in_RAX + (char)*in_RAX;
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *(byte *)(param_2 + 0x18215004) = *(byte *)(param_2 + 0x18215004) | bVar3;
  *pbVar2 = *pbVar2 | bVar1;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) - bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

