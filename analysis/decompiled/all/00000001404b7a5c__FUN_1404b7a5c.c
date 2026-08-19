// Function: FUN_1404b7a5c
// Addr: 1404b7a5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7a5c(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint *in_RAX;
  byte bVar4;
  byte bVar5;
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  bVar4 = (byte)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + bVar5;
  pbVar1 = (byte *)((longlong)in_RAX + (longlong)param_1);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  *(char *)(unaff_RBX + -0x6408ffe3) =
       (*(char *)(unaff_RBX + -0x6408ffe3) + -0x1d) - CARRY1(bVar3,bVar4);
  *(byte *)in_RAX = (byte)*in_RAX + (char)((ulonglong)param_1 >> 8);
  bVar3 = (byte)((ulonglong)in_RAX >> 8);
  if (-1 < (char)(byte)*in_RAX) {
    *param_1 = *param_1 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)in_RAX = (byte)*in_RAX | bVar2;
  param_1[unaff_RDI] = param_1[unaff_RDI] + bVar5;
  *(byte *)in_RAX = (byte)*in_RAX + bVar4;
  pbVar1 = (byte *)((CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar3 | bVar2 | 0xf0,bVar2)
                             ) | 0xf0) + 7);
  *pbVar1 = *pbVar1 | bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

