// Function: FUN_1404c8cc8
// Addr: 1404c8cc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8cc8(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  char *in_RAX;
  uint *puVar3;
  byte bVar4;
  longlong unaff_RBP;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX);
  pbVar2 = (byte *)(param_1 * 2);
  bVar1 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar4;
  *(char *)(param_2 + 0x31) =
       *(char *)(param_2 + 0x31) + (char)((ulonglong)param_1 >> 8) + CARRY1(bVar1,bVar4);
  *(char *)(unaff_RBP + 0x6a) = *(char *)(unaff_RBP + 0x6a) + (char)param_1;
  *puVar3 = *puVar3 ^ (uint)puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

