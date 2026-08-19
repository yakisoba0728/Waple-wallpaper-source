// Function: FUN_1404a7d18
// Addr: 1404a7d18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7d18(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar5;
  longlong in_RAX;
  longlong unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RDI;
  byte in_CF;
  byte bVar4;
  
  pbVar2 = (byte *)(in_RAX + param_2);
  bVar3 = *pbVar2;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  bVar4 = *pbVar2;
  *pbVar2 = (bVar4 - bVar5) - in_CF;
  param_1[param_2] =
       param_1[param_2] + (char)param_2 + (bVar3 < bVar5 || (byte)(bVar4 - bVar5) < in_CF);
  *(byte *)(in_RAX + unaff_RBX) = *(byte *)(in_RAX + unaff_RBX) | (byte)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + -0x51) = *(char *)(in_RAX + -0x51) + bVar5;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RDI * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

