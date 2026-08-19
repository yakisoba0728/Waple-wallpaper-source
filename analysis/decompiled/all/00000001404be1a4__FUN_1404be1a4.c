// Function: FUN_1404be1a4
// Addr: 1404be1a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be1a4(char *param_1,longlong param_2)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar5;
  char *in_RAX;
  char *pcVar4;
  byte bVar6;
  uint unaff_EBP;
  undefined4 unaff_0000002c;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  puVar1 = (uint *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x4a0ab400);
  *puVar1 = *puVar1 ^ unaff_EBP;
  cVar5 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar5;
  *in_RAX = *in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX + cVar5;
  pcVar4 = (char *)(ulonglong)((uint)in_RAX & 0x25ac3100);
  pbVar2 = (byte *)(param_1 + param_2 + 0x7a21004a);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar6;
  *pcVar4 = *pcVar4 + CARRY1(bVar3,bVar6);
  if ((POPCOUNT(*pcVar4) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar4 = (char *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x1a21004b +
                   (ulonglong)((uint)in_RAX & 0x25a80000));
  *pcVar4 = *pcVar4 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

